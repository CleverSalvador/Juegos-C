#include "miniwin.h"
using namespace miniwin;
int main(){
    vredimensiona(400,400);
    //color(VERDE);
    color_rgb(142,68,173);
    //linea(0,0,400,400);//linea diagonal
    /*linea(50,50,50,100);//dos cuadrados 
    linea(50,100,200,100);
    linea(200,100,200,50);
    linea(200,50,50,50);
    
    linea(100,100,100,200);
    linea(100,200,200,200);
    linea(200,200,200,100);
    linea(200,100,100,100);*/
    rectangulo_lleno(50,50,300,150);
    color(AMARILLO);
    circulo_lleno(50,100,20);
    refresca();
    return 0;
}
