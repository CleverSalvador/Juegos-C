#include "raylib.h" /*libreria externa*/


int main()
{
    /*Dimensiones de las ventanas*/
    const int windowWidth{512};
    int windowHeinght{380};
    /*Es el rectangulo en el aire*/
    bool isInAir{};
    /*velocidad del santo*/
    const int jumVel{-22};
    InitWindow(windowWidth,windowHeinght,"hOLA SOY CLEVER");
    const int gravedad{1};
    /*Dimensiones del rectangulo*/
    const int width{50};
    const int heigth{80};
    /*Posicion y velocidad del rectangulo*/
    int posY{windowHeinght-heigth};
    int velocidad{0};
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {  
        /*inicializa el dibujo*/
        BeginDrawing();
        ClearBackground(WHITE);//fondo de la ventana
        /*verificacion del suelo*/
        if(posY>=windowHeinght-heigth)
        {
            velocidad = 0;
            isInAir = false;
        }
        else{
            /*aplicando la gravedad*/
            velocidad += gravedad;
            isInAir = true;
        }
        if(IsKeyPressed(KEY_UP)&& !isInAir){
            velocidad += jumVel;
        }
        
        posY += velocidad;
        DrawRectangle(windowWidth/2,posY,width,heigth,BLUE);//dibujar el rectangulo
        /*Detener dibujo*/
        EndDrawing();
    }
    CloseWindow();
    
}