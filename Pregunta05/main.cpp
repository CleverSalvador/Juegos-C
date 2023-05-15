#include "miniwin.h"
using namespace miniwin;
//MAPA
void mapa(){
     color_rgb(151,151,151);
     rectangulo_lleno(20,80,300,90);
     rectangulo_lleno(290,90,300,300);
     rectangulo_lleno(20,310,250,340);
     rectangulo_lleno(350,90,370,300);
     rectangulo_lleno(380,90,390,300);
     rectangulo_lleno(20,350,250,360);
}
//destino
void destino()
{
     /*simetria*/
     color_rgb(15,248,15);//color plomo
     rectangulo_lleno(20,60,100,70);
     rectangulo_lleno(30,50,90,60);
     rectangulo_lleno(40,40,80,50);   
}
void personaje(int x,int y){
     color_rgb(255,176,176);
     rectangulo_lleno(450+x,450+y,460+x,490+y);
     rectangulo_lleno(440+x,450+y,445+x,470+y);
     rectangulo_lleno(465+x,450+y,470+x,470+y);
     rectangulo_lleno(450+x,435+y,460+x,445+y);
}
int main(){
    int x = 0, y =0;
    int t = tecla();
    vredimensiona(500,500);
    /*movimiento del personaje*/
    while(t!=ESCAPE)
    {
     if(t==IZQUIERDA){
      x = x -5, y = y+0;
     } else if(t==DERECHA){
       x = x +5 , y = y +0;
     }
     if(t==ARRIBA){
      y = y -5, x = x+0;
     }else if(t==ABAJO){
      y = y + 5, x = x+0;
     }
     
    borra();
    destino();
    mapa();
    personaje(x,y);
    refresca();
    espera(10);
    t = tecla();
    }
    
    
return 0;
}
