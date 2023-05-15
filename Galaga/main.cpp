#include "miniwin.h"
using namespace miniwin;
//Bala de la nave
void balaprota(int xx, int yy)
{
   if(yy==400 || yy==0){
    color_rgb(0,0,0);
    rectangulo_lleno(250+xx,245+yy,260+xx,255+yy);//cabeza
   }  else {
           color_rgb(255,242,0);
          rectangulo_lleno(250+xx,245+yy,260+xx,255+yy);//cabeza
           }
}
void nave_alien(int x, int y)
{
     /*Siemtria*/
     color_rgb(166,168,164);//color plomo
     rectangulo_lleno(200+x,10+y,205+x,15+y);
     color_rgb(220,221,219);//color plomo claro  
     rectangulo_lleno(200+x,15+y,205+x,20+y);
     color_rgb(166,168,164);//color plomo
     rectangulo_lleno(200+x,20+y,205+x,25+y);
     color_rgb(250,214,10);//color amarillo
     rectangulo_lleno(200+x,25+y,205+x,30+y);
     color_rgb(0,0,0);//color negro
     rectangulo_lleno(200+x,30+y,205+x,35+y);
     color_rgb(254,150,0);//color naranja
     rectangulo_lleno(200+x,35+y,205+x,40+y);
     color_rgb(250,214,10);//color amarillo
     rectangulo_lleno(200+x,40+y,205+x,45+y);
     /*Simetria 2*/
     color_rgb(166,168,164);//color plomo
     rectangulo_lleno(195+x,15+y,200+x,25+y);
     rectangulo_lleno(205+x,15+y,210+x,25+y);
     color_rgb(80,80,80);//plomo oscuro
     rectangulo_lleno(195+x,25+y,200+x,30+y);
     rectangulo_lleno(205+x,25+y,210+x,30+y);
     color_rgb(250,214,10);//color amarillo
     rectangulo_lleno(195+x,35+y,200+x,40+y);
     rectangulo_lleno(205+x,35+y,210+x,40+y);
     /*Simetria 3*/
     color_rgb(250,214,10);//color amarillo
     rectangulo_lleno(190+x,25+y,195+x,30+y);
     rectangulo_lleno(210+x,25+y,215+x,30+y);
     color_rgb(166,168,164);//color plomo
     rectangulo_lleno(180+x,25+y,185+x,30+y); 
     rectangulo_lleno(220+x,25+y,225+x,30+y);
}
void alien (int x, int y)
{
     /*Simetria*/
     color_rgb(175,26,245);//color morado
     rectangulo_lleno(200+x,100+y,210+x,110+y);
     color_rgb(233,0,252);//color rosado
     rectangulo_lleno(200+x,110+y,210+x,190+y);
     color_rgb(175,26,245);//color morado
     rectangulo_lleno(200+x,190+y,210+x,200+y);
     /*Simetria 1*/
     color_rgb(175,26,245);//color morado
     rectangulo_lleno(190+x,110+y,200+x,120+y);
     rectangulo_lleno(210+x,110+y,220+x,120+y);
     color_rgb(233,0,252);//color rosado
     rectangulo_lleno(190+x,120+y,200+x,140+y);
     rectangulo_lleno(210+x,120+y,220+x,140+y);
     color_rgb(255,255,255);
     rectangulo_lleno(190+x,140+y,200+x,150+y);
     rectangulo_lleno(210+x,140+y,220+x,150+y);
     color_rgb(233,0,252);//color rosado
     rectangulo_lleno(190+x,150+y,200+x,190+y);
     rectangulo_lleno(210+x,150+y,220+x,190+y);
     color_rgb(175,26,245);//color morado
     rectangulo_lleno(190+x,190+y,200+x,200+y);
     rectangulo_lleno(210+x,190+y,220+x,200+y);
     /*Simetria 2*/
     color_rgb(175,26,245);//color morado
     rectangulo_lleno(180+x,80+y,190+x,130+y);
     rectangulo_lleno(220+x,80+y,230+x,130+y);
     color_rgb(233,0,252);//color rosado
     rectangulo_lleno(180+x,130+y,190+x,140+y); 
     rectangulo_lleno(220+x,130+y,230+x,140+y); 
     color_rgb(0,0,0);//color negro
     rectangulo_lleno(180+x,140+y,190+x,150+y);
     rectangulo_lleno(220+x,140+y,230+x,150+y);
     color_rgb(233,0,252);//color rosado
     rectangulo_lleno(180+x,150+y,190+x,180+y);
     rectangulo_lleno(220+x,150+y,230+x,180+y);
     color_rgb(175,26,245);//color morado
     rectangulo_lleno(180+x,180+y,190+x,190+y);
     rectangulo_lleno(220+x,180+y,230+x,190+y);
     /*Simetria 3*/
     color_rgb(138,252,1);//color verde
     rectangulo_lleno(170+x,80+y,180+x,90+y);
     rectangulo_lleno(230+x,80+y,240+x,90+y);
     color_rgb(175,26,245);//color morado
     rectangulo_lleno(170+x,120+y,180+x,170+y);
     rectangulo_lleno(230+x,120+y,240+x,170+y);
     color_rgb(233,0,252);//color rosado
     rectangulo_lleno(170+x,170+y,180+x,180+y);
     rectangulo_lleno(230+x,170+y,240+x,180+y);
     /*Siemtria 4*/
     color_rgb(175,26,245);//color morado
     rectangulo_lleno(160+x,140+y,170+x,150+y);
     rectangulo_lleno(240+x,140+y,250+x,150+y);
     rectangulo_lleno(160+x,170+y,170+x,180+y);
     rectangulo_lleno(240+x,170+y,250+x,180+y);
     /*Simetria 5*/
     color_rgb(138,252,1);//color verde
     rectangulo_lleno(150+x,110+y,160+x,120+y);
     rectangulo_lleno(250+x,110+y,260+x,120+y);
     color_rgb(175,26,245);//color morado
     rectangulo_lleno(150+x,120+y,160+x,140+y);
     rectangulo_lleno(250+x,120+y,260+x,140+y);
     rectangulo_lleno(150+x,180+y,160+x,190+y);
     rectangulo_lleno(250+x,180+y,260+x,190+y);
     color_rgb(138,252,1);//color verde
     rectangulo_lleno(150+x,190+y,160+x,200+y);
     rectangulo_lleno(250+x,190+y,260+x,200+y);
}
void galaga (int x, int y)
{
     /*x = x - 227;
     y = y - 245;*/
    /*Simetria */
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(250+x,245+y,260+x,255+y);//cabeza
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(250+x,255+y,260+x,305+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(250+x,305+y,260+x,315+y);
    color_rgb(255,228,0);//color amarillo
    rectangulo_lleno(250+x,315+y,260+x,340+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(250+x,340+y,260+x,345+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(250+x,345+y,260+x,350+y);
    color_rgb(255,255,255);//color blanco
    rectangulo_lleno(250+x,350+y,260+x,380+y);
    color_rgb(249,166,53);//amarillo oscuro
    rectangulo_lleno(250+x,380+y,255+x,405+y);
    rectangulo_lleno(255+x,380+y,260+x,395+y);
    /*Fin de simetria*/
    //////////////////////////////////////////////////////////////////
    /*izquierda y derecha simetria*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(245+x,255+y,250+x,275+y);
    rectangulo_lleno(260+x,255+y,265+x,275+y);
    color_rgb(255,255,255);//color blanco
    rectangulo_lleno(245+x,275+y,250+x,315+y);
    rectangulo_lleno(260+x,275+y,265+x,315+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(245+x,315+y,250+x,325+y);
    rectangulo_lleno(260+x,315+y,265+x,325+y);
    color_rgb(255,228,0);//color amarillo
    rectangulo_lleno(245+x,325+y,250+x,335+y);
    rectangulo_lleno(260+x,325+y,265+x,335+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(245+x,335+y,250+x,340+y);
    rectangulo_lleno(260+x,335+y,265+x,340+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(245+x,340+y,250+x,345+y);
    rectangulo_lleno(260+x,340+y,265+x,345+y);
    color_rgb(255,255,255);//color blanco
    rectangulo_lleno(245+x,345+y,250+x,355+y);
    rectangulo_lleno(260+x,345+y,265+x,355+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(245+x,355+y,250+x,375+y);
    rectangulo_lleno(260+x,355+y,265+x,375+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(245+x,375+y,250+x,380+y);
    rectangulo_lleno(260+x,375+y,265+x,380+y);
    color_rgb(255,228,0);//color amarillo
    rectangulo_lleno(245+x,380+y,250+x,395+y);
    rectangulo_lleno(260+x,380+y,265+x,400+y);
    //////////////////////////////////////////////////////////////////////////
    /*simetria 2 izquierda y derecha*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(240+x,275+y,245+x,285+y);
    rectangulo_lleno(265+x,275+y,270+x,285+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(240+x,285+y,245+x,310+y);
    rectangulo_lleno(265+x,285+y,270+x,310+y);
    color_rgb(255,255,255);//color blanco
    rectangulo_lleno(240+x,310+y,245+x,320+y);
    rectangulo_lleno(265+x,310+y,270+x,320+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(240+x,320+y,245+x,325+y);
    rectangulo_lleno(265+x,320+y,270+x,325+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(240+x,325+y,245+x,335+y);
    rectangulo_lleno(265+x,325+y,270+x,335+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(240+x,335+y,245+x,345+y);
    rectangulo_lleno(265+x,335+y,270+x,345+y);
    color_rgb(255,255,255);//color blanco
    rectangulo_lleno(240+x,345+y,245+x,350+y);
    rectangulo_lleno(265+x,345+y,270+x,350+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(240+x,350+y,245+x,375+y);
    rectangulo_lleno(265+x,350+y,270+x,375+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(240+x,375+y,245+x,385+y);
    rectangulo_lleno(265+x,375+y,270+x,385+y);
    ///////////////////////////////////////////////////////////////
    /*simetra 3 izquierda y derecha */
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(235+x,285+y,240+x,305+y);
    rectangulo_lleno(270+x,285+y,275+x,305+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(235+x,305+y,240+x,320+y);
    rectangulo_lleno(270+x,305+y,275+x,320+y);
    color_rgb(255,255,255);//color blanco
    rectangulo_lleno(235+x,320+y,240+x,330+y);
    rectangulo_lleno(270+x,320+y,275+x,330+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(235+x,330+y,240+x,340+y);
    rectangulo_lleno(270+x,330+y,275+x,340+y);
    color_rgb(255,255,255);//color blanco
    rectangulo_lleno(235+x,340+y,240+x,345+y);
    rectangulo_lleno(270+x,340+y,275+x,345+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(235+x,345+y,240+x,365+y);
    rectangulo_lleno(270+x,345+y,275+x,365+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(235+x,365+y,240+x,375+y);
    rectangulo_lleno(270+x,365+y,275+x,375+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(235+x,375+y,240+x,385+y);
    rectangulo_lleno(270+x,375+y,275+x,385+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(235+x,385+y,240+x,390+y);
    rectangulo_lleno(270+x,385+y,275+x,390+y);
    /////////////////////////////////////////////////////////
    /*simetria 4 izquierda y derecha*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(230+x,290+y,235+x,320+y);
    rectangulo_lleno(275+x,290+y,280+x,320+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(230+x,320+y,235+x,330+y);
    rectangulo_lleno(275+x,320+y,280+x,330+y);
    color_rgb(255,255,255);//color blanco
    rectangulo_lleno(230+x,330+y,235+x,340+y);
    rectangulo_lleno(275+x,330+y,280+x,340+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(230+x,340+y,235+x,350+y);
    rectangulo_lleno(275+x,340+y,280+x,350+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(230+x,350+y,235+x,365+y);
    rectangulo_lleno(275+x,350+y,280+x,365+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(230+x,365+y,235+x,380+y);
    rectangulo_lleno(275+x,365+y,280+x,380+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(230+x,380+y,235+x,405+y);
    rectangulo_lleno(275+x,380+y,280+x,405+y);
    ////////////////////////////////////////////////
    /*Simetria 5 izquierda y derecha */
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(225+x,285+y,230+x,305+y);
    rectangulo_lleno(280+x,285+y,285+x,305+y);
    rectangulo_lleno(225+x,320+y,230+x,330+y);
    rectangulo_lleno(280+x,320+y,285+x,330+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(225+x,330+y,230+x,340+y);
    rectangulo_lleno(280+x,330+y,285+x,340+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(225+x,340+y,230+x,350+y);
    rectangulo_lleno(280+x,340+y,285+x,350+y);
    rectangulo_lleno(225+x,360+y,230+x,380+y);
    rectangulo_lleno(280+x,360+y,285+x,380+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(225+x,380+y,230+x,385+y);
    rectangulo_lleno(280+x,380+y,285+x,385+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(225+x,385+y,230+x,390+y);
    rectangulo_lleno(280+x,385+y,285+x,390+y);
    ////////////////////////////////////////////////
    /*simetria 6 izquierda y derecha*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(220+x,285+y,225+x,310+y);
    rectangulo_lleno(285+x,285+y,290+x,310+y);  
    rectangulo_lleno(220+x,330+y,225+x,345+y);
    rectangulo_lleno(285+x,330+y,290+x,345+y);
    rectangulo_lleno(220+x,360+y,225+x,370+y);
    rectangulo_lleno(285+x,360+y,290+x,370+y);
    color_rgb(250,50,53);//rojo claro 
    rectangulo_lleno(220+x,370+y,225+x,385+y);
    rectangulo_lleno(285+x,370+y,290+x,385+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(220+x,385+y,225+x,390+y);
    rectangulo_lleno(285+x,385+y,290+x,390+y);
    ///////////////////////////////////////////////////
    /*siemtria 7*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(215+x,255+y,220+x,285+y);
    rectangulo_lleno(290+x,255+y,295+x,285+y);
    color_rgb(250,50,53);//rojo claro 
    rectangulo_lleno(215+x,285+y,220+x,310+y);
    rectangulo_lleno(290+x,285+y,295+x,310+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(215+x,310+y,220+x,315+y);
    rectangulo_lleno(290+x,310+y,295+x,315+y);
    rectangulo_lleno(215+x,345+y,220+x,360+y);
    rectangulo_lleno(290+x,345+y,295+x,360+y);
    color_rgb(250,50,53);//rojo claro 
    rectangulo_lleno(215+x,360+y,220+x,380+y);
    rectangulo_lleno(290+x,360+y,295+x,380+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(215+x,380+y,220+x,385+y);
    rectangulo_lleno(290+x,380+y,295+x,385+y);
    //////////////////////////////////////////
    /*simetria 8*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(210+x,265+y,215+x,290+y);
    rectangulo_lleno(295+x,265+y,300+x,290+y);
    color_rgb(250,50,53);//rojo claro 
    rectangulo_lleno(210+x,290+y,215+x,315+y);
    rectangulo_lleno(295+x,290+y,300+x,315+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(210+x,315+y,215+x,320+y);
    rectangulo_lleno(295+x,315+y,300+x,320+y);
    rectangulo_lleno(210+x,345+y,215+x,350+y);
    rectangulo_lleno(295+x,345+y,300+x,350+y);
    color_rgb(250,50,53);//rojo claro 
    rectangulo_lleno(210+x,350+y,215+x,380+y);
    rectangulo_lleno(295+x,350+y,300+x,380+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(210+x,380+y,215+x,385+y);
    rectangulo_lleno(295+x,380+y,300+x,385+y);
    ///////////////////////////////////////////////
    /*siemtria 9*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(205+x,290+y,210+x,315+y);
    rectangulo_lleno(300+x,290+y,305+x,315+y);
    color_rgb(250,50,53);//rojo claro 
    rectangulo_lleno(205+x,315+y,210+x,320+y);
    rectangulo_lleno(300+x,315+y,305+x,320+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(205+x,320+y,210+x,325+y);
    rectangulo_lleno(300+x,320+y,305+x,325+y);
    rectangulo_lleno(205+x,340+y,210+x,350+y);
    rectangulo_lleno(300+x,340+y,305+x,350+y);
    color_rgb(250,50,53);//rojo claro 
    rectangulo_lleno(205+x,350+y,210+x,380+y);
    rectangulo_lleno(300+x,350+y,305+x,380+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(205+x,380+y,210+x,385+y);
    rectangulo_lleno(300+x,380+y,305+x,385+y);
    //////////////////////////////////////
    /*simetria 10*/
    color_rgb(255,228,0);//color amarillo
    rectangulo_lleno(200+x,315+y,205+x,320+y);
    rectangulo_lleno(305+x,315+y,310+x,320+y);
    color_rgb(20,191,250);//color celeste
    rectangulo_lleno(200+x,320+y,205+x,330+y);
    rectangulo_lleno(305+x,320+y,310+x,330+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(200+x,350+y,205+x,360+y);
    rectangulo_lleno(305+x,350+y,310+x,360+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(200+x,360+y,205+x,385+y);
    rectangulo_lleno(305+x,360+y,310+x,385+y); 
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(200+x,385+y,205+x,390+y);
    rectangulo_lleno(305+x,385+y,310+x,390+y);
    ////////////////////////////////
    /*siemtria 11*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(195+x,360+y,200+x,370+y);
    rectangulo_lleno(310+x,360+y,315+x,370+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(195+x,370+y,200+x,385+y);
    rectangulo_lleno(310+x,370+y,315+x,385+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(195+x,385+y,200+x,390+y);
    rectangulo_lleno(310+x,385+y,315+x,390+y);
    ////////////////////////////////////////
    /*siemtria 12*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(190+x,370+y,195+x,380+y);
    rectangulo_lleno(315+x,370+y,320+x,380+y);
    color_rgb(250,50,53);//rojo claro
    rectangulo_lleno(190+x,380+y,195+x,390+y);
    rectangulo_lleno(315+x,380+y,320+x,390+y);
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(190+x,390+y,195+x,395+y);
    rectangulo_lleno(315+x,390+y,320+x,395+y);
    color_rgb(255,228,0);//color amarillo
    rectangulo_lleno(190+x,395+y,195+x,400+y);
    rectangulo_lleno(315+x,395+y,320+x,400+y);
    ////////////////////////////////////////////
    /*simetria 13*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(185+x,380+y,195+x,395+y);
    rectangulo_lleno(320+x,380+y,325+x,395+y);
    color_rgb(255,228,0);//color amarillo
    rectangulo_lleno(185+x,395+y,195+x,400+y);
    rectangulo_lleno(320+x,395+y,325+x,400+y);
    /////////////////////////////////////////////
    /*siemtria 14*/
    color_rgb(161,26,34);/*color rojo oscuro*/
    rectangulo_lleno(180+x,390+y,185+x,400+y);
    rectangulo_lleno(325+x,390+y,330+x,400+y);
}
int main()
{
    vredimensiona(500,500);
    /*coordenadas de la bala*/
    int xx = 200, yy=300;
    int x =200;
    int y = 300;
    int a = 100;
    int b = 20;
    int p = 10;
    int z = 250;
    int p1= 600;
    int z2 = 300;
    int ran1,ran2,ran3;
    int m_jefe,m_nave,m_nave2;
    int t = tecla();
    while(t!=ESCAPE)
    {
       if(t==IZQUIERDA)
       {
        x = x -5 , y = y+0;
        } else if (t==DERECHA){
          x = x +5 , y = y+0;   
        }
        if(t==ARRIBA)
        {
         y = y -5, x = x+0;
        }else if (t==ABAJO){
        y = y + 5, x = x+0;
        }
        //Movimiento del jefe
        ran1 = rand()%50;
        if(ran1==0)
        {
         m_jefe = IZQUIERDA;
        }
        if(ran1==1)
        {
         m_jefe = DERECHA;
        }
        if (m_jefe == IZQUIERDA)
        {
         if(a>=20){
                   a = a - 15, b = b + 0;
                   }
        } else if(m_jefe == DERECHA)
        {
          if (a <600)
          { a = a + 15 , b = b+0;
             }
        }
        /*Movimiento de la minijefes*/
        ran2 = rand()%50;
        if(ran2==0)
        {
         m_nave = IZQUIERDA;
        }
        if(ran2==1)
        {
         m_nave = DERECHA;
        }
        if (m_nave == IZQUIERDA)
        {
         if(p>=20){
                   p = p - 15, z = z + 0;
                   }
        } else if(m_nave == DERECHA)
        {
          if (p <600)
          { p = p + 15 , z= z+0;
             }
        }
        /*Movimiento de la 2do minijefe*/
        ran3 = rand()%30;
        if (ran3 ==0)
        {
         m_nave2 = IZQUIERDA;
        }
        if(ran3 == 1)
        {
         m_nave2 = DERECHA;
        }
        if(m_nave2 == IZQUIERDA)
        {
         if(p1>=20){
          p1 = p1 - 15, z2 = z2+0;
         }
        }else if (m_nave2 == DERECHA){
              if(p1<600)
              {
               p1 = p1 + 15, z2 = z2+0;
              }
        }
        /*Movimiento de la bala*/
        if(yy<0 && t==ESPACIO){
        xx = x ;
        yy = y;
        }
        if(t== ESPACIO){
        if(yy>=300 && yy<=500){
           xx = x , yy = yy -10;        
           }
        }
        if(t=ESPACIO){
         if(yy<=391 && yy>=0){
           xx = xx +0, yy = yy -10;
         }
        }
        /*Fin movimiento de la bala*/
        /*Colision de con el alien*/
        if(xx>= a-30 && xx<= a){
         if(yy>=10 && yy <=45){
            a = -30, b = -200;
         }
        }
        /*Fin colision de alien*/
        /*Colision con nave 1*/
        if(xx>=p-30 && xx<=p){
         if(yy>=10 && yy<=45){
          p = -30 , z = -300;
         }
        } 
        /*fin colision*/
        /*colision con nave 2*/
        if(xx>=p1-30 && xx<=p1){
         if(yy>=10 && yy<=45){
          p1 = -30 , z2 = -400;
         }
        } 
        /*fin colision*/
        borra();
        balaprota(xx,yy);
        galaga(x,y);
        //alien(a,b);
        //nave_alien(p,z);
        //nave_alien(p1,z2);
        refresca();
        espera(10);
        t = tecla();
    }
    return 0;
}
