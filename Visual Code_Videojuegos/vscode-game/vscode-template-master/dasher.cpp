#include "raylib.h" /*libreria externa*/


int main()
{
    /*Dimensiones de las ventanas*/
    const int windowWidth{512};
    int windowHeinght{380};
    /*Es el rectangulo en el aire*/
    bool isInAir{};
    /*velocidad del salto*/
    const int jumVel{-600};
    InitWindow(windowWidth,windowHeinght,"HOLA SOY CLEVER");//Es el frame mostrado
    /*Declarar gravedad*/
    const int gravedad{1'000};
    /*-----------------------------------------------------------------------*/
    /*Cargando sprite obtaculos*/
    Texture2D nebula = LoadTexture("textures/12_nebula_spritesheet.png");
    /*coordenadas y dimesiones de nebula*/
    Rectangle nebRec{0.0, 0.0, nebula.width/8, nebula.height/8};
    /*vector nebpos con respecto a la altura*/
    Vector2 nebpos{windowWidth,windowHeinght-nebRec.height};
    /*variables de la animacion del spritesheet nebula*/
    int nebFrame{};
    const float nebUpdateTime{1.0/12.0};
    float nebRunningTime{};
    /*Nebula 2*/
    int neb2Frame{};
    const float neb2UpdateTime{1.0/16.0};
    float neb2RunningTime{};
    /*******************************************************************************/
    //velocidad del sprite nebula (pixel/second)
    int nebvel{-200};
    /*-----------------------------------------------------------------------*/
    /*Cargando sarfy*/
    Texture2D scarfy = LoadTexture("textures/scarfy.png");
    Rectangle scarfyRec;
    /*Dimensiones del sprite*/
    scarfyRec.width = scarfy.width/6;//ancho
    scarfyRec.height = scarfy.height;//altura
    /*posicion del rectangulo*/
    scarfyRec.x = 0;
    scarfyRec.y = 0;
    Vector2 scarfyPos;//posicion 
    scarfyPos.x = windowWidth/2 - scarfyRec.width/2;
    scarfyPos.y = windowHeinght - scarfyRec.height;
    /*Animación de Frame*/
    int frame{};
    /*cantidad de tiempo antes de actualizar frame de la animacion*/
    const float updateTime{1.0/12.0};
    float runningTime{};

    /*Dimensiones del rectangulo
    const int width{50};
    const int heigth{80};
    Posicion y velocidad del rectangulo*/
    //int scarfyPos.y {windowHeinght-heigth};
    int velocidad{0};
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {  
        /*declaramos el delta time (tiempo del ultimo frame)*/
        const float dt{GetFrameTime()};
        
        /*inicializa el dibujo*/
        BeginDrawing();
        ClearBackground(WHITE);//fondo de la ventana
        /*verificacion del suelo*/
        if(scarfyPos.y>=windowHeinght-scarfyRec.height)
        {
            velocidad = 0;
            isInAir = false;
        }
        else{
            /*aplicando la gravedad*/
            velocidad += gravedad * dt;
            isInAir = true;
        }
        if(IsKeyPressed(KEY_UP)&& !isInAir){
            velocidad += jumVel;
        }
        /*posicion actualizable de nebula*/
        nebpos.x += nebvel*dt; 
        /*posicion actualizable de scarfy*/
        scarfyPos.y += velocidad*dt;
        if(!isInAir){
             /*actualizacion de tiempo de recorrido */
        runningTime += dt;
        
        if(runningTime>=updateTime){
            runningTime = 0.0;

        /*Actualizacion de la Animación de Frame*/
        if(IsKeyDown(KEY_RIGHT)){
        scarfyRec.x = frame * scarfyRec.width;
        frame++;
        if (frame>5)
        {
            frame = 0; 
        }
       }
     }
 }
 /*Actualizacion de la animacion del frame de nebula*/
      nebRunningTime += dt;
        
        if(nebRunningTime>=nebUpdateTime){
            nebRunningTime = 0.0;

        /*Actualizacion de la Animación de Frame*/
        nebRec.x = nebFrame * nebRec.width;
        nebFrame++;
        if (nebFrame>5)
        {
            nebFrame = 0;
        }

        }
       
        /*dibujando a nebula*/
        DrawTextureRec(nebula,nebRec,nebpos,WHITE);
       /*dibujando a scarfy*/
        DrawTextureRec(scarfy,scarfyRec,scarfyPos,WHITE);
       // DrawRectangle(windowWidth/2,posY,width,heigth,BLUE);//dibujar el rectangulo
       
        /*Detener dibujo*/
        EndDrawing();
    }
    UnloadTexture(scarfy);
    UnloadTexture(nebula);
    CloseWindow();
    
}