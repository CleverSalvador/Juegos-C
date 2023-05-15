#include <windows.h> 
#include <stdio.h> 
#include "miniwin.h"
#include <sstream>

using namespace miniwin;
void Player(int x, int y){
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

void PlayerBullet(int xx, int yy){
     if(yy==550 | yy==0){
       color_rgb(0,0,0);          
     }
     else{
       color_rgb(255,242,0);
       //rectangulo_lleno(18+xx,0+yy,22+xx,10+yy);
       rectangulo_lleno(250+xx,245+yy,254+xx,255+yy);  
                                           }
     }

void Enemy(int x, int y, int r, int g, int b , int r1,int r2,int r3 , int tp){
     
     
if(tp==1){
color_rgb(r, g, b);
rectangulo_lleno(0+x,100+y,5+x,110+y); 
rectangulo_lleno(-2+x,130+y,8+x,140+y);//pie 1
rectangulo_lleno(5+x,90+y,10+x,120+y);
rectangulo_lleno(10+x,80+y,15+x,130+y); 
rectangulo_lleno(5+x,70+y,15+x,80+y);//antena
rectangulo_lleno(15+x,80+y,20+x,130+y); 
rectangulo_lleno(20+x,80+y,25+x,130+y);
rectangulo_lleno(25+x,80+y,30+x,130+y);//medio
rectangulo_lleno(30+x,80+y,35+x,130+y); 
rectangulo_lleno(35+x,80+y,40+x,130+y); 
rectangulo_lleno(40+x,80+y,45+x,130+y);
rectangulo_lleno(40+x,70+y,50+x,80+y);//antena
rectangulo_lleno(45+x,90+y,50+x,120+y); 
rectangulo_lleno(47+x,130+y,57+x,140+y);//pie 2
rectangulo_lleno(50+x,100+y,55+x,110+y); 

//ojos
color_rgb(r1,r2,r3);
rectangulo_lleno(10+x,90+y,20+x,110+y); 
rectangulo_lleno(35+x,90+y,45+x,110+y);   
         
}
else
 if(tp==2){
color_rgb(r, g, b);
rectangulo_lleno(0+x,100+y,5+x,110+y); 
rectangulo_lleno(0+x,130+y,10+x,140+y);//pie 1
rectangulo_lleno(5+x,90+y,10+x,120+y);
rectangulo_lleno(10+x,80+y,15+x,130+y); 
rectangulo_lleno(5+x,70+y,15+x,80+y);//antena
rectangulo_lleno(15+x,80+y,20+x,130+y); 
rectangulo_lleno(20+x,80+y,25+x,130+y);
rectangulo_lleno(25+x,80+y,30+x,130+y);//medio
rectangulo_lleno(30+x,80+y,35+x,130+y); 
rectangulo_lleno(35+x,80+y,40+x,130+y); 
rectangulo_lleno(40+x,80+y,45+x,130+y);
rectangulo_lleno(40+x,70+y,50+x,80+y);//antena
rectangulo_lleno(45+x,90+y,50+x,120+y); 
rectangulo_lleno(45+x,130+y,55+x,140+y);//pie 2
rectangulo_lleno(50+x,100+y,55+x,110+y); 

//ojos
color_rgb(r1,r2,r3);
rectangulo_lleno(10+x,90+y,20+x,110+y); 
rectangulo_lleno(35+x,90+y,45+x,110+y); 

//colmillo
color_rgb(255, 255, 255);
rectangulo_lleno(20+x,130+y,25+x,135+y);
rectangulo_lleno(20+x,135+y,22.5+x,140+y);
rectangulo_lleno(30+x,130+y,35+x,135+y);
rectangulo_lleno(33.5+x,135+y,35+x,140+y);
 
}  
else{
  color_rgb(r, g, b);
rectangulo_lleno(0+x,100+y,5+x,110+y); 
rectangulo_lleno(0+x,130+y,10+x,140+y);//pie 1
rectangulo_lleno(5+x,90+y,10+x,120+y);
rectangulo_lleno(10+x,80+y,15+x,130+y); 
rectangulo_lleno(5+x,70+y,15+x,80+y);//antena
rectangulo_lleno(15+x,80+y,20+x,130+y); 
rectangulo_lleno(20+x,80+y,25+x,130+y);
rectangulo_lleno(25+x,80+y,30+x,130+y);//medio
rectangulo_lleno(30+x,80+y,35+x,130+y); 
rectangulo_lleno(35+x,80+y,40+x,130+y); 
rectangulo_lleno(40+x,80+y,45+x,130+y);
rectangulo_lleno(40+x,70+y,50+x,80+y);//antena
rectangulo_lleno(45+x,90+y,50+x,120+y); 
rectangulo_lleno(45+x,130+y,55+x,140+y);//pie 2
rectangulo_lleno(50+x,100+y,55+x,110+y); 

//ojos
color_rgb(r1,r2,r3);
rectangulo_lleno(2+x,90+y,12+x,95+y);
rectangulo_lleno(6+x,95+y,20+x,100+y);
rectangulo_lleno(10+x,100+y,20+x,110+y); //iqz,arri,der,aba
rectangulo_lleno(43+x,90+y,53+x,95+y);
rectangulo_lleno(35+x,95+y,49+x,100+y);
rectangulo_lleno(35+x,100+y,45+x,110+y); 

//colmillo
color_rgb(255, 255, 255);
rectangulo_lleno(20+x,130+y,25+x,135+y);
rectangulo_lleno(20+x,135+y,22.5+x,140+y);
rectangulo_lleno(30+x,130+y,35+x,135+y);
rectangulo_lleno(33.5+x,135+y,35+x,140+y);

//garras
rectangulo_lleno(0+x,140+y,2+x,150+y);
rectangulo_lleno(3+x,140+y,5+x,150+y);
rectangulo_lleno(7+x,140+y,9+x,150+y);

rectangulo_lleno(46+x,140+y,48+x,150+y);
rectangulo_lleno(50+x,140+y,52+x,150+y);
rectangulo_lleno(53+x,140+y,55+x,150+y);
      
}   
     
}
     
void Enemy02(int x, int y)
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
     
void EnemyRow03Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(190+xv,25+yz,195+xv,30+yz);
          }  
}     

void EnemyRow01Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(18+xv,0+yz,22+xv,10+yz);  
          }
     }
void EnemyRow02Bullet(int xv, int yz){
     if(yz==500 | yz==20){
                color_rgb(0,0,0);          
     }
     else{
          color_rgb(62,200,24);
          rectangulo_lleno(18+xv,0+yz,22+xv,10+yz);  
          }
     }
     
void PlayerHeart(int x, int y, int xx){
          color_rgb(200,20,20);
          rectangulo_lleno(x,y,xx+x,y+20);  
     }

std::string ShowScore (std::string text,int number){
         std::stringstream sstm;
         sstm << text << number;
         return sstm.str();    
     }

int main(){
    //Gamebox
    int WIDTH  = 800;
    int HEIGHT = 680;
    vredimensiona(WIDTH,HEIGHT);
    
    //Variables
    int PlayerX = 320, PlayerY = 200; /*posisicon del jugador*/
    int PlayerBulletX=320, PlayerBulletY=200;
    
    int EnemyRow01X = 160, EnemyRow01Y = 50;
    int EnemyRow01BulletX=160, EnemyRow01BulletY=50;
    
    int EnemyRow02X = 480, EnemyRow02Y = 100;
    int EnemyRow02BulletX=480, EnemyRow02BulletY=100;
    
    int EnemyRow03X = 480, EnemyRow03Y = 50;
    int EnemyRow03BulletX=480, EnemyRow03BulletY=50;
    
    int t = tecla();
    int RandomRow01,RollRow01;
    int RandomRow02,RollRow02;
    int RandomRow03,RollRow03;
    int RNGSpawn01, RNGSpawn02,RNGSpawn03;
    
    bool PlayerAlive = true;
    bool EnemyRow01Alive = true;
    bool EnemyRow02Alive = true;
    bool EnemyRow03Alive = true;
    
    int EnemyRow01Counter = 0;
    int EnemyRow02Counter = 0;
    int EnemyRow03Counter = 0;
    int PlayerLifeCounter = 40;
    
    std::string ScoreText = "Current Score = ";
    std::string BestScoreText = "Best Score = ";
    std::string GameOverText = "Game Over. Final Score = ";
    std::string RestartText = "Press UP to restart the game";
    
    int CurrentScoreNumber = 0;
    int BestScoreNumber = 0;
    int NivelNumber;
    
    int Row01R,Row01G, Row01B;
    int aiR,aiG,aiB;
    int Row02R,Row02G, Row02B;
    int tp;
    
    int Row01BonusX = 0;
    int Row02BonusX = 0;
    int Row03BonusX = 0;
    int Row01BonusBulletY = 0;
    int Row02BonusBulletY = 0;
    int Row03BonusBulletY = 0;
    int BonusDamage = 0;
    
    //Gameloop & Update Cycle
    while(t != ESCAPE){
        //Player Controls
        if (PlayerAlive){//
            if(t == IZQUIERDA){
                if(PlayerX == -120){ }
                else {PlayerX = PlayerX-20, PlayerY = PlayerY+0;}
            } 
            else if(t == DERECHA){
                if(PlayerX >= WIDTH-350){ }
                else PlayerX = PlayerX+20, PlayerY = PlayerY+0;
            }
            //Shooting
            if(PlayerBulletY<=0 && t==ESPACIO){
                 PlayerBulletX=PlayerX; PlayerBulletY=PlayerY-30;
                 PlaySound("laser.wav",NULL,SND_ASYNC);//player
                 }
            if(t==ESPACIO){
                 if(PlayerBulletY>=400 && PlayerBulletY<=550 ){
                    PlayerBulletX = PlayerX, PlayerBulletY= PlayerBulletY-10;
                    }  
              
              }
            if(t=ESPACIO){
                 if(PlayerBulletY<=401 && PlayerBulletY>=-500){ 
                    PlayerBulletX = PlayerBulletX+0, PlayerBulletY= PlayerBulletY-10;
                    }
            }
        }
        else if(t == ARRIBA){
                 CurrentScoreNumber = 0;
                 PlayerAlive = true;
                 PlayerLifeCounter = 40;
                 PlayerX = 320, PlayerY = 400; 
                 PlayerBulletX=320, PlayerBulletY=400;
            }
        //AI
        
        //Enemy Row 1
        if (EnemyRow01Alive){
            //Enemy Row 1 Movement
            if(RandomRow01==0){RollRow01=IZQUIERDA;}
            if(RandomRow01==1){RollRow01=DERECHA;}
            RandomRow01 = rand()%50;
            
            if(RollRow01 == IZQUIERDA){
                  if(EnemyRow01X>=0){
                     EnemyRow01X = EnemyRow01X-(2+Row01BonusX), EnemyRow01Y = EnemyRow01Y+0;
                  }
            } else if(RollRow01 == DERECHA){
                   if(EnemyRow01X<590){
                     EnemyRow01X = EnemyRow01X+(2+Row01BonusX), EnemyRow01Y = EnemyRow01Y+0;
                }
            }
            
            if(EnemyRow01BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow01BulletX = EnemyRow01X;
                EnemyRow01BulletY = EnemyRow01Y+(4+Row01BonusBulletY);
            } 
            //Enemy Row 1 Shooting
            if(t==ESPACIO){
                if(EnemyRow01BulletY>=20 && EnemyRow01BulletY<=31 ){
                   EnemyRow01BulletX = EnemyRow01X, EnemyRow01BulletY= EnemyRow01BulletY+(4+Row01BonusBulletY);
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow01BulletY>=21 && EnemyRow01BulletY<=HEIGHT){
                   EnemyRow01BulletX = EnemyRow01BulletX+0, EnemyRow01BulletY= EnemyRow01BulletY+(4+Row01BonusBulletY);
                }
            }
        }
        
        //Enemy Row 2
        if (EnemyRow02Alive){
            //Enemy Row 2 Movement                 
            if(RandomRow02==0){RollRow02=IZQUIERDA;}
            if(RandomRow02==1){RollRow02=DERECHA;}
            RandomRow02= rand()%50;
            
            if(RollRow02 == IZQUIERDA){
                  if(EnemyRow02X>=0){
                     EnemyRow02X = EnemyRow02X-(2+Row02BonusX), EnemyRow02Y = EnemyRow02Y+0;
                  }
            } else if(RollRow02 == DERECHA){
                   if(EnemyRow02X<590){
                     EnemyRow02X = EnemyRow02X+(2+Row02BonusX), EnemyRow02Y = EnemyRow02Y+0;
                }
            }
            //Enemy Row 2 Shooting
            if(EnemyRow02BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow02BulletX = EnemyRow02X;
                EnemyRow02BulletY = EnemyRow02Y+(4+Row01BonusBulletY);
            } 
            
            if(t==ESPACIO){
                if(EnemyRow02BulletY>=20 && EnemyRow02BulletY<=31 ){
                   EnemyRow02BulletX = EnemyRow02X, EnemyRow02BulletY= EnemyRow02BulletY+(4+Row01BonusBulletY);
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow02BulletY>=21 && EnemyRow02BulletY<=HEIGHT){
                   EnemyRow02BulletX = EnemyRow02BulletX+0, EnemyRow02BulletY= EnemyRow02BulletY+(4+Row01BonusBulletY);
                }
            }
        } 
        //Enemy Row 3
        if (EnemyRow03Alive){
            //Enemy Row 1 Movement
            if(RandomRow03==0){RollRow03=IZQUIERDA;}
            if(RandomRow03==1){RollRow03=DERECHA;}
            RandomRow03 = rand()%50;
            
            if(RollRow03 == IZQUIERDA){
                  if(EnemyRow03X>=0){
                     EnemyRow03X = EnemyRow03X-(2+Row03BonusX), EnemyRow03Y = EnemyRow03Y+0;
                  }
            } else if(RollRow03 == DERECHA){
                   if(EnemyRow03X<590){
                     EnemyRow03X = EnemyRow03X+(2+Row03BonusX), EnemyRow03Y = EnemyRow03Y+0;
                }
            }
            
            if(EnemyRow03BulletY>=HEIGHT && t==ESPACIO){
                EnemyRow03BulletX = EnemyRow03X;
                EnemyRow03BulletY = EnemyRow03Y+(4+Row03BonusBulletY);
            } 
            //Enemy Row 1 Shooting
            if(t==ESPACIO){
                if(EnemyRow03BulletY>=20 && EnemyRow03BulletY<=31 ){
                   EnemyRow03BulletX = EnemyRow03X, EnemyRow03BulletY= EnemyRow03BulletY+(4+Row03BonusBulletY);
                }  
            }

            if(t=ESPACIO){
                if(EnemyRow03BulletY>=21 && EnemyRow03BulletY<=HEIGHT){
                   EnemyRow03BulletX = EnemyRow03BulletX+0, EnemyRow03BulletY= EnemyRow03BulletY+(4+Row03BonusBulletY);
                }
            }
        }
        // Colision Detection 
           // Player Bullets to the Enemy on Row 1    
              if(EnemyRow01Alive){ 
                  if(PlayerBulletX>=EnemyRow01X-80 && PlayerBulletX<=EnemyRow01X+80){
                     if(PlayerBulletY>=50 && PlayerBulletY<=80){
                        EnemyRow01Alive = false;
                        EnemyRow01X = -200, EnemyRow01Y = -200;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                        PlaySound("impacto.wav",NULL,SND_ASYNC);
                     }
                  }
              }
          // Player Bullets to the Enemy on Row 2        
             if(EnemyRow02Alive){ 
                 if(PlayerBulletX>=EnemyRow02X-80 && PlayerBulletX<=EnemyRow02X+80){
                     if(PlayerBulletY>=100 && PlayerBulletY<=130){
                        EnemyRow02Alive = false;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                        //PlaySound("impacto.wav",NULL,SND_ASYNC);
                     }
                  }
              }
              // Player Bullets to the Enemy on Row 3       
             if(EnemyRow03Alive){ 
                 if(PlayerBulletX>=EnemyRow03X-80 && PlayerBulletX<=EnemyRow03X+80){
                     if(PlayerBulletY>=100 && PlayerBulletY<=130){
                        EnemyRow03Alive = false;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                        PlaySound("impacto.wav",NULL,SND_ASYNC);
                     }
                  }
              }
          // Enemy on Row 1 Bullets to the Player
             if(PlayerAlive){  
                 if(EnemyRow01BulletX>=PlayerX-30 && EnemyRow01BulletX<=PlayerX+30){
                    if(EnemyRow01BulletY>=600 && EnemyRow01BulletY<=650){
                      PlaySound("laser2.wav",NULL,SND_ASYNC);
                        PlayerLifeCounter -= 1+BonusDamage;
                        
                     }
                  }
              }
            
          // Enemy on Row 2 Bullets to the Player
              if(PlayerAlive){ 
                  if(EnemyRow02BulletX>=PlayerX-30 && EnemyRow02BulletX<=PlayerX+30){
                     if(EnemyRow02BulletY>=600 && EnemyRow02BulletY<=650){
                       PlaySound("laser2.wav",NULL,SND_ASYNC);
                        PlayerLifeCounter -= 1 +BonusDamage;
                      }
                  }
              }
         // Enemy on Row 3 Bullets to the Player
              if(PlayerAlive){ 
                  if(EnemyRow03BulletX>=PlayerX-30 && EnemyRow03BulletX<=PlayerX+30){
                     if(EnemyRow03BulletY>=600 && EnemyRow03BulletY<=650){
                       PlaySound("laser2.wav",NULL,SND_ASYNC);
                        PlayerLifeCounter -= 1 +BonusDamage;
                      }
                  }
              }
        //Delete & Create
        borra();
            //Check Player Alive & Paint if so
            if (PlayerLifeCounter <= 0){
                                  PlayerBullet(0, 0);
                                  PlayerAlive = false;
                                  }
            if (PlayerAlive){Player(PlayerX,PlayerY);}
            if (PlayerAlive){PlayerBullet(PlayerBulletX, PlayerBulletY);}
            
            //Paint Enemy Row 01
            if (EnemyRow01Alive){Enemy(EnemyRow01X, EnemyRow01Y,Row01R,Row01G, Row01B,aiR,aiG,aiB,tp);}//llamada de la funcion
            if (EnemyRow01Alive){EnemyRow01Bullet(EnemyRow01BulletX,EnemyRow01BulletY);}
            
            //Paint Enemy Row 02
            if (EnemyRow02Alive){Enemy(EnemyRow02X, EnemyRow02Y,Row02R,Row02G, Row02B , aiR,aiG,aiB,tp);}
            if (EnemyRow02Alive){EnemyRow02Bullet(EnemyRow02BulletX,EnemyRow02BulletY);}
            
            //Paint Enemy Row 03
            if (EnemyRow03Alive){Enemy02(EnemyRow03X, EnemyRow03Y);}
            if (EnemyRow03Alive){EnemyRow03Bullet(EnemyRow03BulletX,EnemyRow03BulletY);}
            
            //Respawning check & Restart Position Pseudorandomly of Enemy Row 01
            if (!EnemyRow01Alive){
                                  RNGSpawn01 = rand()%3;
                                  switch(RNGSpawn01) {
                                  case 0 : EnemyRow01X = 20; break;
                                  case 1 : EnemyRow01X = 160;break;
                                  case 2 : EnemyRow01X = 240;break;
                                  case 3 : EnemyRow01X = 320;break;
                                  }
                                  EnemyRow01Y = 50;
                                  EnemyRow01BulletX=EnemyRow01X, EnemyRow01BulletY=50;
                                  EnemyRow01Counter += 5;}
            if (EnemyRow01Counter == 1000){
                                  EnemyRow01Counter = 0;
                                  EnemyRow01Alive = true;}
            //Respawning check & Restart Position Pseudorandomly of Enemy Row 03
            if (!EnemyRow03Alive){
                                  RNGSpawn03 = rand()%3;
                                  switch(RNGSpawn03) {
                                  case 0 : EnemyRow03X = 20; break;
                                  case 1 : EnemyRow03X = 160;break;
                                  case 2 : EnemyRow03X = 240;break;
                                  case 3 : EnemyRow03X = 320;break;
                                  }
                                  EnemyRow03Y = 50;
                                  EnemyRow03BulletX=EnemyRow03X, EnemyRow03BulletY=50;
                                  EnemyRow03Counter += 5;}
            if (EnemyRow03Counter == 1000){
                                  EnemyRow03Counter = 0;
                                  EnemyRow03Alive = true;}
            //Respawning check & Restart Position Pseudorandomly of Enemy Row 02
            if (!EnemyRow02Alive){
                                  RNGSpawn02 = rand()%3;
                                  switch(RNGSpawn02) {
                                  case 0 : EnemyRow02X = 20; break;
                                  case 1 : EnemyRow02X = 160;break;
                                  case 2 : EnemyRow02X = 240;break;
                                  case 3 : EnemyRow02X = 320;break;
                                  }
                                  EnemyRow02Y = 100;
                                  EnemyRow02BulletX=EnemyRow02X, EnemyRow02BulletY=100;
                                  EnemyRow02Counter += 5;}
            if (EnemyRow02Counter == 1000){
                                  EnemyRow02Counter = 0;
                                  EnemyRow02Alive = true;}
            if (PlayerAlive){
            //Score Screen
            color_rgb(69, 30, 16); //Caja de puntaje
            rectangulo_lleno(0,630,800,680);
            color_rgb(219, 151, 31);//Barra de vida de fondo Amarilla
            rectangulo_lleno(30,640,230,660);
            color_rgb(255, 255, 255); // Letras del texto
            texto(300, 646, ShowScore("Nivel  ",NivelNumber));
            texto(645,20, ShowScore("Score : ",CurrentScoreNumber));
            texto(480, 646, ShowScore(BestScoreText,BestScoreNumber));
            
            if (BestScoreNumber < CurrentScoreNumber) {BestScoreNumber = CurrentScoreNumber;}
            } 
            else {

            //Game Over Text 
            color_rgb(250,250,250);
            if (BestScoreNumber < CurrentScoreNumber) {BestScoreNumber = CurrentScoreNumber;}
            texto(230, 240, ShowScore(GameOverText,CurrentScoreNumber));
            texto(230, 260, RestartText);
            texto(270, 280, ShowScore(BestScoreText,BestScoreNumber));

            }                                           
            //Paint Players Life //
            if (PlayerLifeCounter > 0) {
                PlayerHeart(30,640,PlayerLifeCounter*5);
            }
            else if (PlayerLifeCounter <= 0) { 
                  } 
            
            //Difficulty Increase based on Current Score
            if (CurrentScoreNumber < 300){
                tp=1;
                aiR=234,aiG=174,aiB=62;
                Row01R=5,Row01G=143, Row01B=140;
                Row02R=2,Row02G=143, Row02B=140; 
                Row01BonusX = 0;
                Row02BonusX = 0;
                Row03BonusX = 0;
                Row01BonusBulletY = 0;
                Row02BonusBulletY = 0;  
                Row03BonusBulletY = 0;  
                BonusDamage = 0;
                NivelNumber = 1;                    
            } else
            if (CurrentScoreNumber < 600){
                tp=2;
                aiR=47,aiG=127,aiB=224;
                Row01R=214,Row01G=156, Row01B=39;
                Row02R=214,Row02G=156, Row02B=39;
                Row01BonusX = 1;
                Row02BonusX = 1;
                Row03BonusX = 1;
                Row01BonusBulletY = 2;
                Row02BonusBulletY = 2; 
                Row03BonusBulletY = 2; 
                BonusDamage = 0;
                NivelNumber = 2;                         
            } else 
            if (CurrentScoreNumber < 900){
                tp=3;
                aiR=220,aiG=43,aiB=49;
                Row01R=93,Row01G=97, Row01B=73;
                Row02R=93,Row02G=97, Row02B=73;
                Row01BonusX = 2;
                Row02BonusX = 2;
                Row03BonusX = 2;
                Row01BonusBulletY = 3;
                Row02BonusBulletY = 3;
                Row03BonusBulletY = 3;
                BonusDamage = 1;
                NivelNumber = 3; 
            } else {
                tp=3;
                aiR=47,aiG=127,aiB=224;
                Row01R=187,Row01G=36, Row01B=36;
                Row02R=187,Row02G=36, Row02B=36;
                Row01BonusX = 4;
                Row02BonusX = 4;
                Row03BonusX = 4;
                Row01BonusBulletY = 5;
                Row02BonusBulletY = 5; 
                Row03BonusBulletY = 5; 
                BonusDamage = 2; 
                NivelNumber = 4; 
            }
            
        refresca();
        espera(10);
        t= tecla();
        
    }
    return 0;
}
