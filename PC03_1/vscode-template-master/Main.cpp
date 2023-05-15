#include "raylib.h" /*Notacion para incluir una libreria externa*/
int main()
{
 /*Dimensiones de la Ventana de trabajo*/
 const int windowWidth{352};
 int windowHeight{192};
  /*La figura del rectangulo en el aire*/
 bool isInAir{};
 /*velocidad de salto*/
 const int jumvel {-500};
 InitWindow(windowWidth,windowHeight,"CLEVER RONALDO SALVADOR QUISPE");

 /*Cargar del fondo*/
 Image fondo = LoadImage("textures/foreground.png");
 Texture2D fondoTexture = LoadTextureFromImage(fondo);
 UnloadImage(fondo);
 /*Cargar el sprite del detective*/
 Texture2D pj = LoadTexture("textures/detective.png");
 Rectangle pjRec;
 /*Dimensiones del detective*/
 pjRec.width = pj.width/9;//ancho del rectangulo
 pjRec.height = pj.height/4;//altura del rectangulo
 /*posicion del rectangulo del detective*/
 pjRec.x = 0;
 pjRec.y = 128;
 Vector2 pjPos;//posicion del personaje
 Vector2 positionFondo = {(float)(windowWidth/2 - fondoTexture.width/2), (float)(windowHeight/2 - fondoTexture.height/2)};
 pjPos.x = windowWidth/2 - pjRec.width/2;
 pjPos.y = windowHeight - pjRec.height;
 /*Cargando sprite esqueleto*/
 Texture2D esqueleto = LoadTexture("textures/esqueleto.png");
 Rectangle esqueRec; //{0.0, 0.0, esqueleto.width/9,esqueleto.height/4};//coordenadas del esqueleto
 esqueRec.width = esqueleto.width/9;
 esqueRec.height = esqueleto.height/4;
 Vector2 esquePos; //{windowWidth,windowHeight-esqueRec.height};
 esquePos.x = windowWidth;
 esquePos.y = windowHeight - esqueRec.height+10;
/*posicion del rectangulo del esqueleto*/
esqueRec.x = 0;
esqueRec.y = 64;
 const int gravedad{1'000};
 /*Animacion de los personaje*/
 int frame{};//personaje
 int esqueframe{};//esqueleto
 const float esqueupdateTime{1.0/6.0};//esqueleto
 float esquerunningTime{};
 /*Tiempor transcurrido al actualizar un frame de la animacion*/
 const float updateTime{1.0/6.0};//detective
 float runningTime{};
 int velocidad{0};//velocidad del detective
 int esquevel{-50};//velocidad del esqueleto
 SetTargetFPS(60);
 while(!WindowShouldClose())
 {
     /*Declaramos del dt (tiempo del ultimo frame)*/
     const float dt{GetFrameTime()};
     BeginDrawing();
     ClearBackground(WHITE);
     /*Verificacion del suelo*/
     if(pjPos.y>=windowHeight-pjRec.height){
         velocidad = 0;
         isInAir = false;
     }else{
         /*aplicamos la gravedad para que caiga el objeto*/
         velocidad += gravedad * dt;
         isInAir = true;
     }
     if(IsKeyPressed(KEY_SPACE) && !isInAir){
         velocidad += jumvel;
     }
    if(IsKeyDown(KEY_LEFT))
    {
        pjRec.y=64;
        pjPos.x -= 1.0f;
        runningTime +=dt;
    }else if(IsKeyDown(KEY_RIGHT)){
        pjRec.y = 192;
        pjPos.x += 1.0f;
        runningTime += dt; 
    }else{
        frame = 0;
        pjRec.x = frame*pjRec.width;
    }
     /*posicion actualizada*/
     esquePos.x += esquevel*dt;
     pjPos.y +=velocidad*dt;
     if(!isInAir){/*mantener el sprite quieto en el aire*/
         //runningTime += dt;
         if(runningTime>=updateTime){   
             runningTime = 0.0;
             /*Actualizacion de la animacion*/            
                 pjRec.x = frame*pjRec.width;
                 frame++;
                 if(frame>8)
                 {
                     frame=1;
                 }
         }
     }
     /*Animacion del esqueleto*/
     esquerunningTime +=dt;
     if(esquerunningTime>=esqueupdateTime){
         esquerunningTime = 0.0;
         /*actualizacion de los frames*/
         esqueRec.x = esqueframe * esqueRec.width;
         esqueframe ++;
         if(esqueframe>8){
             esqueframe = 0;
         }
     }
     /*Carga de la imagen de el personaje*/
     DrawTextureV(fondoTexture,positionFondo,WHITE);
     DrawTextureRec(pj,pjRec,pjPos,WHITE);
     DrawTextureRec(esqueleto,esqueRec,esquePos,WHITE);
     
     EndDrawing();
 }
 UnloadTexture(fondoTexture);
 UnloadTexture(pj);
 UnloadTexture(esqueleto);
 CloseWindow();
}