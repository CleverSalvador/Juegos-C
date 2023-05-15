#include "miniwin.h"
using namespace miniwin;
//Balas jugador
void balaprota(int xx, int yy)
{
     if(yy == 400 | yy ==0){
           color_rgb(0,0,0);  
          } else{
                   color_rgb(255,242,0);
                   rectangulo_lleno(250+xx,0+yy,260+xx,10+yy);
                   }
}  
void enemigo2 (int x, int y)
{
   color_rgb(254,60,3);
   rectangulo_lleno(8+x,30+y,42+x,40+y);
   rectangulo_lleno(2+x,25+y,6+x,50+y);
   rectangulo_lleno(44+x,25+y,48+x,50+y);
   rectangulo_lleno(0+x,20+y,2+x,37+y);  
   rectangulo_lleno(6+x,20+y,8+x,37+y);
   rectangulo_lleno(42+x,20+y,44+x,37+y);
   rectangulo_lleno(48+x,20+y,50+x,37+y);
   //centro
   color_rgb(17,168,65);
   rectangulo_lleno(15+x,25+y,35+x,50+y);
   //frente
   color_rgb(130,224,170);
   rectangulo_lleno(18+x,10+y,30+x,25+y);
   //frente medio
   color_rgb(247,119,190);
   rectangulo_lleno(23+x,3+y,27+x,20+y);
   //frente medio izquierda
   color_rgb(225,27,213);
   rectangulo_lleno(17+x,3+y,21+x,15+y);
   rectangulo_lleno(17+x,2+y,19+x,3+y);
   rectangulo_lleno(19+x,1+y,21+x,2+y);
   rectangulo_lleno(21+x,0+y,23+x,1+y);
   //frente medio derecha
   color_rgb(225,27,213);
   rectangulo_lleno(29+x,3+y,33+x,15+y);
   rectangulo_lleno(31+x,2+y,33+x,3+y);
   rectangulo_lleno(29+x,1+y,31+x,2+y);
   rectangulo_lleno(27+x,0+y,29+x,1+y);
   
   color_rgb(225,27,213);
   rectangulo_lleno(15+x,25+y,19+x,45+y);
   rectangulo_lleno(19+x,30+y,23+x,50+y);
   rectangulo_lleno(31+x,25+y,35+x,45+y);
   rectangulo_lleno(27+x,30+y,31+x,50+y);
   
   color_rgb(253,254,254);
   rectangulo_lleno(20+x,35+y,30+x,38+y);
}
void enemigo(int x, int y)
{
   color_rgb(199,0,57);
   rectangulo_lleno(8+x,30+y,42+x,40+y);
   rectangulo_lleno(2+x,25+y,6+x,50+y);
   rectangulo_lleno(44+x,25+y,48+x,50+y);
   rectangulo_lleno(0+x,20+y,2+x,37+y);  
   rectangulo_lleno(6+x,20+y,8+x,37+y);
   rectangulo_lleno(42+x,20+y,44+x,37+y);
   rectangulo_lleno(48+x,20+y,50+x,37+y);
   //centro
   color_rgb(130,224,170);
   rectangulo_lleno(15+x,25+y,35+x,50+y);
   //frente
   color_rgb(130,224,170);
   rectangulo_lleno(18+x,10+y,30+x,25+y);
   //frente medio
   color_rgb(199,0,57);
   rectangulo_lleno(23+x,3+y,27+x,20+y);
   //frente medio izquierda
   color_rgb(46,134,193);
   rectangulo_lleno(17+x,3+y,21+x,15+y);
   rectangulo_lleno(17+x,2+y,19+x,3+y);
   rectangulo_lleno(19+x,1+y,21+x,2+y);
   rectangulo_lleno(21+x,0+y,23+x,1+y);
   //frente medio derecha
   color_rgb(46,134,193);
   rectangulo_lleno(29+x,3+y,33+x,15+y);
   rectangulo_lleno(31+x,2+y,33+x,3+y);
   rectangulo_lleno(29+x,1+y,31+x,2+y);
   rectangulo_lleno(27+x,0+y,29+x,1+y);
   
   color_rgb(46,134,193);
   rectangulo_lleno(15+x,25+y,19+x,45+y);
   rectangulo_lleno(19+x,30+y,23+x,50+y);
   rectangulo_lleno(31+x,25+y,35+x,45+y);
   rectangulo_lleno(27+x,30+y,31+x,50+y);
   
   color_rgb(253,254,254);
   rectangulo_lleno(20+x,35+y,30+x,38+y);
}
void nave(int x, int y)
{
    
    //contorno de nave
    color_rgb(100,100,100);
    rectangulo_lleno(250+x,250+y,260+x,255+y);
    rectangulo_lleno(245+x,255+y,250+x,270+y);
    rectangulo_lleno(260+x,255+y,265+x,270+y);
    rectangulo_lleno(240+x,270+y,245+x,295+y);
    rectangulo_lleno(265+x,270+y,270+x,295+y);
    rectangulo_lleno(235+x,295+y,240+x,300+y);
    rectangulo_lleno(270+x,295+y,275+x,300+y);
    rectangulo_lleno(225+x,290+y,235+x,295+y);
    rectangulo_lleno(275+x,290+y,285+x,295+y);
    rectangulo_lleno(220+x,295+y,225+x,330+y);
    rectangulo_lleno(285+x,295+y,290+x,330+y);
    rectangulo_lleno(225+x,320+y,240+x,325+y);
    rectangulo_lleno(270+x,320+y,285+x,325+y);
    rectangulo_lleno(240+x,325+y,245+x,330+y);
    rectangulo_lleno(265+x,325+y,270+x,330+y);
    rectangulo_lleno(245+x,330+y,265+x,335+y);
    //linea central
    rectangulo_lleno(252+x,305+y,258+x,325+y);
    //ojos
    rectangulo_lleno(250+x,280+y,260+x,285+y);
    //color naranja
    color_rgb(255,177,20);
    rectangulo_lleno(225+x,325+y,240+x,330+y);
    rectangulo_lleno(230+x,330+y,235+x,345+y);
    //Simetria color naranja
    rectangulo_lleno(225+x+45,325+y,240+x+45,330+y);
    rectangulo_lleno(230+x+45,330+y,235+x+45,345+y);
    //color rojo
    color_rgb(255,0,0);
    rectangulo_lleno(225+x,330+y,230+x,345+y);
    rectangulo_lleno(235+x,330+y,240+x,345+y);
    rectangulo_lleno(230+x,345+y,235+x,350+y);
    //Simetria color rojo
    rectangulo_lleno(225+x+45,330+y,230+x+45,345+y);
    rectangulo_lleno(235+x+45,330+y,240+x+45,345+y);
    rectangulo_lleno(230+x+45,345+y,235+x+45,350+y); 
}
int main()
{
    vredimensiona(500,500);
    int x = 0;
    int y = 0;
    //variables de las coordenadas del avion
    int xx=200,yy=400;
    int xv=114, yz=20;
    int p,di;
    int pp, dii;
    //posición del enemigo
    int v = 100;
    int z = 10;
    int v2 = 200;
    int z2 = 100;
    int t = tecla();
    while( t!= ESCAPE)
    {
           if(t==IZQUIERDA)
           {
           x = x-5, y=y+0;
           } else if (t==DERECHA)
           {
              x = x+5, y=y+0;
           }
           if(t==ARRIBA)
           {
           y = y-5, x=x+0;
           } else if(t==ABAJO)
           {
            y = y +5 , x =x+0;
           }
           
           //movimiento aleatorio
           p = rand()%50;
           if(p==0)
           {
            di = IZQUIERDA;
           }
             if (p==1)
             {
                di = DERECHA;
              }
              if (di==IZQUIERDA)
              {
                 if(v>=20){
                 v = v -15, z = z+0;
                 }
              }
                  else if (di==DERECHA){
              if (v<445)
              {  
                  v = v+15, z = z+0;
               }
             }
             //movimiento aleatorio enemigo 2
           pp = rand()%30;
           if(pp==0)
           {
            dii = IZQUIERDA;
           }
             if (pp==1)
             {
                dii = DERECHA;
              }
              if (dii==IZQUIERDA)
              {
                 if(v2>=20){
                 v2 = v2 -15, z2 = z2+0;
                 }
              }
                  else if (dii==DERECHA){
              if (v2<445)
              {  
                  v2 = v2+15, z2 = z2+0;
               }
             }
             //comienza colision*/
            //movimiento de la bala avion
           if(yy<=0 && t==ESPACIO)
           {
            xx = x;
            yy = y;  
           }
           if(t==ESPACIO)
           {
            if(yy>=390 && yy<=400)
            {
             xx = x, yy = yy-10;
             }         
            }  
            if(t=ESPACIO){
             if( yy>=0 && yy<=391)
             {
             xx = xx+0, yy = yy-10;
            }
           }
           //Colisiones con el enemigo1
           if(xx>=v-30 && xx<=v){
            if(yy>=10 && yy<=45){
                      v = -30, z=-65;
                      }
           }
           /*fin colision*/
           borra();
           nave(x,y);
           balaprota(xx,yy);
           enemigo(v,z);
           enemigo2(v2,z2);
           refresca();
           espera(10);
           t=tecla();
           
    }  
    return 0;
}


