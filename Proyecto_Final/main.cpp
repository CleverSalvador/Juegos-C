#include <windows.h>
#include <stdio.h>
#include "miniwin.h"
#include <sstream>
using namespace miniwin;
void enemigo(int m, int n, int r, int g, int b, int r1, int r2, int r3, int fr, int fg, int fb, int tp )
{    
     color_rgb(0,0,0);//negro    
     rectangulo_lleno(60+m,1+n,74+m,4+n);//1
     rectangulo_lleno(56+m,4+n,60+m,8+n);
     rectangulo_lleno(52+m,8+n,56+m,12+n);
     rectangulo_lleno(40+m,12+n,52+m,16+n);
     rectangulo_lleno(32+m,16+n,40+m,20+n);
     rectangulo_lleno(28+m,20+n,32+m,24+n);
     rectangulo_lleno(24+m,24+n,28+m,28+n);
     rectangulo_lleno(20+m,28+n,24+m,42+n); 
     rectangulo_lleno(16+m,42+n,24+m,46+n);
     rectangulo_lleno(8+m,46+n,16+m,50+n); 
     rectangulo_lleno(4+m,50+n,8+m,70+n);
     rectangulo_lleno(12+m,70+n,8+m,74+n);
     rectangulo_lleno(16+m,74+n,12+m,78+n);
     rectangulo_lleno(26+m,78+n,16+m,82+n);
     rectangulo_lleno(26+m,82+n,22+m,90+n);
     rectangulo_lleno(26+m,88+n,30+m,97+n);
     rectangulo_lleno(30+m,96+n,50+m,100+n);
     rectangulo_lleno(50+m,92+n,58+m,96+n);
     rectangulo_lleno(58+m,88+n,64+m,92+n);
     rectangulo_lleno(64+m,84+n,68+m,88+n);
     rectangulo_lleno(68+m,80+n,80+m,84+n);
     rectangulo_lleno(80+m,84+n,88+m,88+n);
     rectangulo_lleno(88+m,80+n,96+m,84+n);
     rectangulo_lleno(96+m,70+n,100+m,80+n);
     rectangulo_lleno(100+m,70+n,108+m,74+n);
     rectangulo_lleno(108+m,66+n,112+m,70+n);
     rectangulo_lleno(112+m,62+n,116+m,66+n);
     rectangulo_lleno(116+m,58+n,120+m,62+n);
     rectangulo_lleno(120+m,44+n,124+m,58+n);
     rectangulo_lleno(116+m,40+n,120+m,44+n);
     rectangulo_lleno(112+m,36+n,116+m,40+n);
     rectangulo_lleno(102+m,32+n,112+m,36+n);
     rectangulo_lleno(94+m,28+n,102+m,32+n);
     rectangulo_lleno(94+m,16+n,98+m,28+n);
     rectangulo_lleno(90+m,12+n,94+m,16+n);
     rectangulo_lleno(78+m,8+n,90+m,12+n);
     rectangulo_lleno(74+m,4+n,78+m,8+n);
if(tp==1)
{
     /*RELLENO*/
     color_rgb(r,g,b);
      rectangulo_lleno(60+m,4+n,74+m,8+n);
      rectangulo_lleno(56+m,8+n,78+m,12+n);
      rectangulo_lleno(52+m,12+n,90+m,16+n);
      rectangulo_lleno(40+m,16+n,94+m,20+n);
      rectangulo_lleno(32+m,20+n,94+m,24+n);
      rectangulo_lleno(28+m,24+n,94+m,28+n);
      rectangulo_lleno(24+m,28+n,94+m,32+n);
      rectangulo_lleno(24+m,32+n,102+m,36+n);
      rectangulo_lleno(24+m,36+n,112+m,40+n);
      rectangulo_lleno(24+m,40+n,116+m,44+n);
      rectangulo_lleno(24+m,44+n,120+m,46+n);
      rectangulo_lleno(16+m,46+n,120+m,50+n);
      rectangulo_lleno(8+m,50+n,120+m,54+n);
      rectangulo_lleno(8+m,54+n,120+m,58+n);
      rectangulo_lleno(8+m,58+n,116+m,62+n);
      rectangulo_lleno(8+m,62+n,112+m,66+n);
      rectangulo_lleno(8+m,66+n,108+m,70+n);
      rectangulo_lleno(12+m,70+n,96+m,74+n);
      rectangulo_lleno(16+m,74+n,96+m,78+n);
      rectangulo_lleno(26+m,78+n,96+m,80+n);
      rectangulo_lleno(26+m,80+n,68+m,84+n);
      rectangulo_lleno(80+m,80+n,88+m,84+n);
      rectangulo_lleno(26+m,84+n,64+m,88+n);
      rectangulo_lleno(30+m,88+n,58+m,92+n);
      rectangulo_lleno(30+m,92+n,50+m,96+n);
      //Ojitos   
      color_rgb(r1,r2,r3);
      //izq
      rectangulo_lleno(38+m,30+n,42+m,44+n);
      rectangulo_lleno(38+m,44+n,54+m,48+n);
      rectangulo_lleno(50+m,40+n,54+m,44+n);
      rectangulo_lleno(42+m,30+n,46+m,34+n);
      rectangulo_lleno(46+m,34+n,50+m,41+n);
      
      //der
      rectangulo_lleno(60+m,44+n,76+m,48+n);
      rectangulo_lleno(60+m,40+n,64+m,44+n);
      rectangulo_lleno(72+m,30+n,76+m,48+n);
      rectangulo_lleno(68+m,30+n,72+m,34+n);
      rectangulo_lleno(64+m,33+n,68+m,37+n);
      rectangulo_lleno(63+m,37+n,66+m,42+n);
       //boca
      rectangulo_lleno(38+m,52+n,44+m,56+n);
      rectangulo_lleno(38+m,56+n,41+m,64+n);
      rectangulo_lleno(44+m,56+n,48+m,60+n);
      rectangulo_lleno(48+m,52+n,56+m,56+n);
      rectangulo_lleno(56+m,56+n,62+m,60+n);
      rectangulo_lleno(62+m,52+n,70+m,56+n);
      rectangulo_lleno(66+m,56+n,70+m,60+n);
      rectangulo_lleno(62+m,60+n,66+m,64+n);
      rectangulo_lleno(52+m,64+n,66+m,68+n);
      rectangulo_lleno(48+m,60+n,66+m,64+n);
      rectangulo_lleno(40+m,64+n,48+m,68+n);
      
      color_rgb(fr,fg,fb);//FONDO DE OJO
      
      rectangulo_lleno(42+m,34+n,46+m,44+n);
      rectangulo_lleno(46+m,40+n,50+m,44+n);
      
      rectangulo_lleno(63+m,40+n,66+m,44+n);
      rectangulo_lleno(66+m,37+n,68+m,44+n);
      rectangulo_lleno(68+m,33+n,72+m,44+n);
      
      
      rectangulo_lleno(48+m,56+n,56+m,60+n);
      rectangulo_lleno(62+m,56+n,66+m,60+n);
      rectangulo_lleno(56+m,60+n,62+m,64+n);
      rectangulo_lleno(44+m,60+n,48+m,64+n);//gg
      rectangulo_lleno(41.5+m,56+n,44+m,64+n);        
}
else 
  if(tp==2){
  color_rgb(r,g,b);
      rectangulo_lleno(60+m,4+n,74+m,8+n);
      rectangulo_lleno(56+m,8+n,78+m,12+n);
      rectangulo_lleno(52+m,12+n,90+m,16+n);
      rectangulo_lleno(40+m,16+n,94+m,20+n);
      rectangulo_lleno(32+m,20+n,94+m,24+n);
      rectangulo_lleno(28+m,24+n,94+m,28+n);
      rectangulo_lleno(24+m,28+n,94+m,32+n);
      rectangulo_lleno(24+m,32+n,102+m,36+n);
      rectangulo_lleno(24+m,36+n,112+m,40+n);
      rectangulo_lleno(24+m,40+n,116+m,44+n);
      rectangulo_lleno(24+m,44+n,120+m,46+n);
      rectangulo_lleno(16+m,46+n,120+m,50+n);
      rectangulo_lleno(8+m,50+n,120+m,54+n);
      rectangulo_lleno(8+m,54+n,120+m,58+n);
      rectangulo_lleno(8+m,58+n,116+m,62+n);
      rectangulo_lleno(8+m,62+n,112+m,66+n);
      rectangulo_lleno(8+m,66+n,108+m,70+n);
      rectangulo_lleno(12+m,70+n,96+m,74+n);
      rectangulo_lleno(16+m,74+n,96+m,78+n);
      rectangulo_lleno(26+m,78+n,96+m,80+n);
      rectangulo_lleno(26+m,80+n,68+m,84+n);
      rectangulo_lleno(80+m,80+n,88+m,84+n);
      rectangulo_lleno(26+m,84+n,64+m,88+n);
      rectangulo_lleno(30+m,88+n,58+m,92+n);
      rectangulo_lleno(30+m,92+n,50+m,96+n);
      //Ojitos   
      color_rgb(r1,r2,r3);
      //izq
      rectangulo_lleno(38+m,30+n,42+m,44+n);
      rectangulo_lleno(38+m,44+n,54+m,48+n);
      rectangulo_lleno(50+m,40+n,54+m,44+n);
      rectangulo_lleno(42+m,30+n,46+m,34+n);
      rectangulo_lleno(46+m,34+n,50+m,41+n);
      
      //der
      rectangulo_lleno(60+m,44+n,76+m,48+n);
      rectangulo_lleno(60+m,40+n,64+m,44+n);
      rectangulo_lleno(72+m,30+n,76+m,48+n);
      rectangulo_lleno(68+m,30+n,72+m,34+n);
      rectangulo_lleno(64+m,33+n,68+m,37+n);
      rectangulo_lleno(63+m,37+n,66+m,42+n);
       //boca
      rectangulo_lleno(38+m,52+n,44+m,56+n);
      rectangulo_lleno(38+m,56+n,41+m,64+n);
      rectangulo_lleno(44+m,56+n,48+m,60+n);
      rectangulo_lleno(48+m,52+n,56+m,56+n);
      rectangulo_lleno(56+m,56+n,62+m,60+n);
      rectangulo_lleno(62+m,52+n,70+m,56+n);
      rectangulo_lleno(66+m,56+n,70+m,60+n);
      rectangulo_lleno(62+m,60+n,66+m,64+n);
      rectangulo_lleno(52+m,64+n,66+m,68+n);
      rectangulo_lleno(48+m,60+n,66+m,64+n);
      rectangulo_lleno(40+m,64+n,48+m,68+n);
      
      color_rgb(fr,fg,fb);//FONDO DE OJO
      
      rectangulo_lleno(42+m,34+n,46+m,44+n);
      rectangulo_lleno(46+m,40+n,50+m,44+n);
      
      rectangulo_lleno(63+m,40+n,66+m,44+n);
      rectangulo_lleno(66+m,37+n,68+m,44+n);
      rectangulo_lleno(68+m,33+n,72+m,44+n);
      
      
      rectangulo_lleno(48+m,56+n,56+m,60+n);
      rectangulo_lleno(62+m,56+n,66+m,60+n);
      rectangulo_lleno(56+m,60+n,62+m,64+n);
      rectangulo_lleno(44+m,60+n,48+m,64+n);//gg
      rectangulo_lleno(41.5+m,56+n,44+m,64+n);        
}
else {
     color_rgb(r,g,b);
      rectangulo_lleno(60+m,4+n,74+m,8+n);
      rectangulo_lleno(56+m,8+n,78+m,12+n);
      rectangulo_lleno(52+m,12+n,90+m,16+n);
      rectangulo_lleno(40+m,16+n,94+m,20+n);
      rectangulo_lleno(32+m,20+n,94+m,24+n);
      rectangulo_lleno(28+m,24+n,94+m,28+n);
      rectangulo_lleno(24+m,28+n,94+m,32+n);
      rectangulo_lleno(24+m,32+n,102+m,36+n);
      rectangulo_lleno(24+m,36+n,112+m,40+n);
      rectangulo_lleno(24+m,40+n,116+m,44+n);
      rectangulo_lleno(24+m,44+n,120+m,46+n);
      rectangulo_lleno(16+m,46+n,120+m,50+n);
      rectangulo_lleno(8+m,50+n,120+m,54+n);
      rectangulo_lleno(8+m,54+n,120+m,58+n);
      rectangulo_lleno(8+m,58+n,116+m,62+n);
      rectangulo_lleno(8+m,62+n,112+m,66+n);
      rectangulo_lleno(8+m,66+n,108+m,70+n);
      rectangulo_lleno(12+m,70+n,96+m,74+n);
      rectangulo_lleno(16+m,74+n,96+m,78+n);
      rectangulo_lleno(26+m,78+n,96+m,80+n);
      rectangulo_lleno(26+m,80+n,68+m,84+n);
      rectangulo_lleno(80+m,80+n,88+m,84+n);
      rectangulo_lleno(26+m,84+n,64+m,88+n);
      rectangulo_lleno(30+m,88+n,58+m,92+n);
      rectangulo_lleno(30+m,92+n,50+m,96+n);
      //Ojitos   
      color_rgb(r1,r2,r3);
      //izq
      rectangulo_lleno(38+m,30+n,42+m,44+n);
      rectangulo_lleno(38+m,44+n,54+m,48+n);
      rectangulo_lleno(50+m,40+n,54+m,44+n);
      rectangulo_lleno(42+m,30+n,46+m,34+n);
      rectangulo_lleno(46+m,34+n,50+m,41+n);
      
      //der
      rectangulo_lleno(60+m,44+n,76+m,48+n);
      rectangulo_lleno(60+m,40+n,64+m,44+n);
      rectangulo_lleno(72+m,30+n,76+m,48+n);
      rectangulo_lleno(68+m,30+n,72+m,34+n);
      rectangulo_lleno(64+m,33+n,68+m,37+n);
      rectangulo_lleno(63+m,37+n,66+m,42+n);
       //boca
      rectangulo_lleno(38+m,52+n,44+m,56+n);
      rectangulo_lleno(38+m,56+n,41+m,64+n);
      rectangulo_lleno(44+m,56+n,48+m,60+n);
      rectangulo_lleno(48+m,52+n,56+m,56+n);
      rectangulo_lleno(56+m,56+n,62+m,60+n);
      rectangulo_lleno(62+m,52+n,70+m,56+n);
      rectangulo_lleno(66+m,56+n,70+m,60+n);
      rectangulo_lleno(62+m,60+n,66+m,64+n);
      rectangulo_lleno(52+m,64+n,66+m,68+n);
      rectangulo_lleno(48+m,60+n,66+m,64+n);
      rectangulo_lleno(40+m,64+n,48+m,68+n);
      
      color_rgb(fr,fg,fb);//FONDO DE OJO
      
      rectangulo_lleno(42+m,34+n,46+m,44+n);
      rectangulo_lleno(46+m,40+n,50+m,44+n);
      
      rectangulo_lleno(63+m,40+n,66+m,44+n);
      rectangulo_lleno(66+m,37+n,68+m,44+n);
      rectangulo_lleno(68+m,33+n,72+m,44+n);
      
      
      rectangulo_lleno(48+m,56+n,56+m,60+n);
      rectangulo_lleno(62+m,56+n,66+m,60+n);
      rectangulo_lleno(56+m,60+n,62+m,64+n);
      rectangulo_lleno(44+m,60+n,48+m,64+n);//gg
      rectangulo_lleno(41.5+m,56+n,44+m,64+n);        
   }
      
}



/*Flecha del Personaje*/
void flecha(int x, int y)
{
     if(x==200 || x==0)
     {
     color_rgb(0,0,0);
     rectangulo_lleno(170+x,75+y,180+x,80+y);
     rectangulo_lleno(170+x,70+y,175+x,75+y);
     rectangulo_lleno(170+x,80+y,180+x,85+y);
     rectangulo_lleno(175+x,70+y,180+x,75+y);
     rectangulo_lleno(180+x,75+y,185+x,80+y);
     rectangulo_lleno(170+x,65+y,180+x,70+y);
     rectangulo_lleno(180+x,70+y,185+x,75+y);
     rectangulo_lleno(185+x,75+y,190+x,80+y);/*punta*/
     rectangulo_lleno(180+x,80+y,185+x,85+y);
     rectangulo_lleno(170+x,85+y,180+x,90+y);
     rectangulo_lleno(110+x,70+y,170+x,75+y);
     rectangulo_lleno(110+x,80+y,170+x,85+y);
     rectangulo_lleno(105+x,70+y,110+x,85+y);
     rectangulo_lleno(110+x,75+y,170+x,80+y);
     } else{
     color_rgb(129,127,127);//plomo oscuro
     rectangulo_lleno(170+x,75+y,180+x,80+y);
     rectangulo_lleno(170+x,70+y,175+x,75+y);
     rectangulo_lleno(170+x,80+y,180+x,85+y);
     color_rgb(196,189,186);//plomo claro
     rectangulo_lleno(175+x,70+y,180+x,75+y);
     rectangulo_lleno(180+x,75+y,185+x,80+y);
     color_rgb(0,0,0);//color negro
     rectangulo_lleno(170+x,65+y,180+x,70+y);
     rectangulo_lleno(180+x,70+y,185+x,75+y);
     rectangulo_lleno(185+x,75+y,190+x,80+y);/*punta*/
     rectangulo_lleno(180+x,80+y,185+x,85+y);
     rectangulo_lleno(170+x,85+y,180+x,90+y);
     rectangulo_lleno(110+x,70+y,170+x,75+y);
     rectangulo_lleno(110+x,80+y,170+x,85+y);
     rectangulo_lleno(105+x,70+y,110+x,85+y);
     color_rgb(218,103,34);//marron
     rectangulo_lleno(110+x,75+y,170+x,80+y);
     }
}
/*Personaje */
void personaje(int x, int y)
{
     /*cabello*/
     color_rgb(0,0,0);//negro
     rectangulo_lleno(80+x,0+y,115+x,5+y);
     rectangulo_lleno(75+x,5+y,80+x,10+y);
     rectangulo_lleno(70+x,10+y,75+x,15+y);
     rectangulo_lleno(65+x,15+y,70+x,20+y);
     rectangulo_lleno(115+x,5+y,120+x,20+y);/**/
     rectangulo_lleno(65+x,20+y,120+x,25+y);/*final de cabello*/
     rectangulo_lleno(65+x,25+y,70+x,30+y);
     rectangulo_lleno(110+x,25+y,115+x,30+y);
     rectangulo_lleno(65+x,30+y,115+x,35+y);/*final de banda roja*/
     rectangulo_lleno(65+x,35+y,70+x,40+y);
     rectangulo_lleno(85+x,35+y,90+x,45+y);//ojo 1
     rectangulo_lleno(100+x,35+y,105+x,45+y);//ojo 2
     rectangulo_lleno(110+x,35+y,115+x,40+y);
     rectangulo_lleno(115+x,35+y,120+x,40+y);/*arco*/
     rectangulo_lleno(60+x,40+y,65+x,50+y);//oreja
     rectangulo_lleno(110+x,40+y,115+x,45+y);
     rectangulo_lleno(105+x,45+y,110+x,50+y);
     rectangulo_lleno(65+x,50+y,70+x,70+y);/**/
     rectangulo_lleno(100+x,50+y,105+x,55+y);
     rectangulo_lleno(95+x,55+y,100+x,60+y);
     rectangulo_lleno(90+x,60+y,95+x,65+y);
     rectangulo_lleno(60+x,65+y,75+x,70+y);/*hombro*/
     rectangulo_lleno(85+x,65+y,90+x,70+y);
     rectangulo_lleno(75+x,70+y,145+x,75+y);/*palo del arco*/
     rectangulo_lleno(55+x,70+y,60+x,75+y);
     rectangulo_lleno(50+x,75+y,55+x,90+y);
     rectangulo_lleno(55+x,90+y,105+x,95+y);
     rectangulo_lleno(105+x,80+y,110+x,90+y);
     rectangulo_lleno(75+x,95+y,80+x,115+y);/**/
     rectangulo_lleno(85+x,95+y,90+x,100+y);
     rectangulo_lleno(95+x,95+y,100+x,100+y);
     rectangulo_lleno(90+x,100+y,95+x,105+y);
     rectangulo_lleno(100+x,100+y,105+x,105+y);
     rectangulo_lleno(95+x,105+y,100+x,110+y);
     rectangulo_lleno(105+x,105+y,110+x,110+y);
     //color_rgb(252,244,1);//amarillo
     color_rgb(140,82,39);//cabello marron claro
     rectangulo_lleno(80+x,5+y,115+x,10+y);
     rectangulo_lleno(95+x,10+y,115+x,15+y);
     rectangulo_lleno(75+x,10+y,80+x,15+y);
     rectangulo_lleno(70+x,15+y,75+x,20+y);
     //color_rgb(252,179,1);//amarillo oscuro
     color_rgb(91,40,2);//cabello marron oscuro
     rectangulo_lleno(80+x,10+y,95+x,15+y);
     rectangulo_lleno(75+x,15+y,115+x,20+y);
     /*cinta del cabello*/
     color_rgb(252,8,1);//rojo
     rectangulo_lleno(70+x,25+y,110+x,30+y);
     /*cara del personaje*/
     color_rgb(242,173,136);//color rosado oscuro
     rectangulo_lleno(70+x,35+y,75+x,40+y);
     rectangulo_lleno(70+x,60+y,75+x,65+y);
     rectangulo_lleno(75+x,65+y,80+x,70+y);
     rectangulo_lleno(110+x,55+y,115+x,60+y);
     rectangulo_lleno(105+x,60+y,110+x,65+y);
     rectangulo_lleno(100+x,65+y,105+x,70+y);
     rectangulo_lleno(115+x,85+y,120+x,95+y);
     color_rgb(253,216,195);//rosado claro
     rectangulo_lleno(75+x,35+y,85+x,40+y);
     rectangulo_lleno(90+x,35+y,100+x,40+y);
     rectangulo_lleno(105+x,35+y,110+x,40+y);
     rectangulo_lleno(65+x,40+y,85+x,45+y);
     rectangulo_lleno(90+x,40+y,100+x,45+y);
     rectangulo_lleno(105+x,40+y,110+x,45+y);
     rectangulo_lleno(65+x,45+y,105+x,50+y);
     rectangulo_lleno(70+x,50+y,85+x,55+y);
     rectangulo_lleno(90+x,50+y,95+x,55+y);
     rectangulo_lleno(70+x,55+y,90+x,60+y);
     rectangulo_lleno(75+x,60+y,90+x,65+y);
     rectangulo_lleno(80+x,65+y,85+x,70+y);
     rectangulo_lleno(85+x,75+y,110+x,80+y);/*dedo*/
     rectangulo_lleno(85+x,80+y,105+x,85+y);
     rectangulo_lleno(80+x,85+y,105+x,90+y);
     rectangulo_lleno(55+x,135+y,80+x,140+y);
     rectangulo_lleno(115+x,135+y,125+x,140+y);/*pie derecho*/
     rectangulo_lleno(110+x,60+y,115+x,65+y);
     rectangulo_lleno(105+x,65+y,110+x,70+y);
     rectangulo_lleno(140+x,80+y,145+x,95+y);/*dedo*/
     rectangulo_lleno(120+x,85+y,155+x,95+y);/*mano*/
     color_rgb(250,126,120);//color rojo claro
     rectangulo_lleno(85+x,50+y,90+x,55+y);
     rectangulo_lleno(95+x,50+y,100+x,55+y);
     rectangulo_lleno(90+x,55+y,95+x,60+y);
     color_rgb(186,82,14);//color marron 
     rectangulo_lleno(60+x,70+y,75+x,75+y);
     rectangulo_lleno(55+x,75+y,85+x,80+y);
     rectangulo_lleno(55+x,80+y,85+x,85+y);
     rectangulo_lleno(55+x,85+y,80+x,90+y);
     rectangulo_lleno(80+x,95+y,85+x,100+y);
     rectangulo_lleno(80+x,100+y,90+x,105+y);
     rectangulo_lleno(80+x,105+y,95+x,110+y);
     rectangulo_lleno(80+x,110+y,100+x,115+y);
     rectangulo_lleno(75+x,115+y,105+x,120+y);
     rectangulo_lleno(70+x,120+y,110+x,125+y);
     rectangulo_lleno(65+x,125+y,90+x,130+y);
     rectangulo_lleno(60+x,130+y,85+x,135+y);
     rectangulo_lleno(110+x,85+y,115+x,115+y);
     rectangulo_lleno(105+x,90+y,110+x,105+y);
     rectangulo_lleno(100+x,95+y,105+x,100+y);
     rectangulo_lleno(115+x,110+y,120+x,115+y);
     rectangulo_lleno(120+x,115+y,125+x,120+y);
     rectangulo_lleno(125+x,120+y,130+x,125+y);
     color_rgb(245,198,112);//crema oscuro
     rectangulo_lleno(90+x,95+y,95+x,100+y);
     rectangulo_lleno(125+x,130+y,130+x,135+y);
     rectangulo_lleno(90+x,65+y,95+x,70+y);
     rectangulo_lleno(125+x,30+y,130+x,35+y);
     color_rgb(255,229,180);//crema claro
     rectangulo_lleno(95+x,100+y,100+x,105+y);
     rectangulo_lleno(100+x,105+y,105+x,110+y);
     rectangulo_lleno(105+x,110+y,110+x,115+y);
     rectangulo_lleno(110+x,115+y,115+x,120+y);
     rectangulo_lleno(115+x,120+y,120+x,125+y);
     rectangulo_lleno(120+x,125+y,125+x,130+y);
     rectangulo_lleno(115+x,40+y,120+x,45+y);
     rectangulo_lleno(110+x,45+y,115+x,50+y);
     rectangulo_lleno(105+x,50+y,110+x,55+y);
     rectangulo_lleno(100+x,55+y,105+x,60+y);
     rectangulo_lleno(95+x,60+y,100+x,65+y);
     rectangulo_lleno(120+x,35+y,125+x,40+y);
     color_rgb(0,0,0);//color negro
     rectangulo_lleno(140+x,95+y,145+x,115+y);
     rectangulo_lleno(140+x,130+y,145+x,135+y);
     rectangulo_lleno(135+x,115+y,140+x,120+y);
     rectangulo_lleno(135+x,120+y,140+x,125+y);/**/
     rectangulo_lleno(130+x,120+y,135+x,130+y);
     rectangulo_lleno(125+x,115+y,130+x,120+y);
     rectangulo_lleno(100+x,110+y,105+x,115+y);
     rectangulo_lleno(110+x,110+y,115+x,115+y);
     rectangulo_lleno(70+x,115+y,75+x,120+y);
     rectangulo_lleno(105+x,115+y,110+x,120+y);
     rectangulo_lleno(115+x,115+y,120+x,120+y);
     rectangulo_lleno(65+x,120+y,70+x,125+y);
     rectangulo_lleno(110+x,120+y,115+x,125+y);
     rectangulo_lleno(120+x,120+y,125+x,125+y);
     rectangulo_lleno(60+x,125+y,65+x,130+y);
     rectangulo_lleno(90+x,125+y,120+x,130+y);
     rectangulo_lleno(125+x,125+y,130+x,130+y);
     rectangulo_lleno(55+x,130+y,60+x,135+y);
     rectangulo_lleno(85+x,130+y,90+x,135+y);
     rectangulo_lleno(110+x,130+y,125+x,135+y);
     rectangulo_lleno(130+x,130+y,135+x,135+y);
     rectangulo_lleno(50+x,135+y,55+x,140+y);
     rectangulo_lleno(80+x,135+y,85+x,140+y);
     rectangulo_lleno(50+x,140+y,85+x,145+y);
     rectangulo_lleno(110+x,135+y,115+x,140+y);
     rectangulo_lleno(125+x,135+y,140+x,140+y);
     rectangulo_lleno(110+x,140+y,140+x,145+y);/*pie*/
     rectangulo_lleno(115+x,35+y,120+x,40+y);/*arco*/
     rectangulo_lleno(115+x,45+y,120+x,65+y);/**/
     rectangulo_lleno(110+x,50+y,115+x,55+y);
     rectangulo_lleno(105+x,55+y,110+x,60+y);
     rectangulo_lleno(100+x,60+y,105+x,65+y);
     rectangulo_lleno(110+x,65+y,115+x,70+y);
     rectangulo_lleno(95+x,65+y,100+x,70+y);
     rectangulo_lleno(120+x,30+y,125+x,35+y);
     rectangulo_lleno(120+x,40+y,125+x,45+y);
     rectangulo_lleno(125+x,35+y,130+x,40+y);
     rectangulo_lleno(125+x,20+y,130+x,30+y);
     rectangulo_lleno(130+x,30+y,135+x,35+y);
     rectangulo_lleno(130+x,35+y,135+x,40+y);
     rectangulo_lleno(130+x,20+y,135+x,25+y);
     rectangulo_lleno(135+x,25+y,140+x,30+y);
     rectangulo_lleno(140+x,30+y,145+x,40+y);
     rectangulo_lleno(135+x,40+y,140+x,50+y);
     rectangulo_lleno(145+x,40+y,150+x,50+y);
     rectangulo_lleno(140+x,50+y,145+x,75+y);
     rectangulo_lleno(150+x,50+y,155+x,75+y);
     rectangulo_lleno(145+x,70+y,150+x,75+y);
     rectangulo_lleno(140+x,75+y,145+x,80+y);
     rectangulo_lleno(145+x,70+y,170+x,75+y);
     rectangulo_lleno(110+x,80+y,140+x,85+y);
     rectangulo_lleno(145+x,80+y,170+x,85+y);
     rectangulo_lleno(170+x,85+y,180+x,90+y);
     rectangulo_lleno(170+x,65+y,180+x,70+y);
     rectangulo_lleno(180+x,70+y,185+x,75+y);
     rectangulo_lleno(180+x,80+y,185+x,85+y);
     rectangulo_lleno(185+x,75+y,190+x,80+y);
     rectangulo_lleno(155+x,85+y,160+x,95+y);
     rectangulo_lleno(115+x,95+y,155+x,100+y);
     rectangulo_lleno(115+x,95+y,120+x,110+y);
     rectangulo_lleno(120+x,110+y,125+x,115+y);
     color_rgb(218,103,34);//color arco claro
     rectangulo_lleno(130+x,25+y,135+x,30+y);
     rectangulo_lleno(135+x,30+y,140+x,35+y);
     rectangulo_lleno(140+x,40+y,145+x,45+y);
     rectangulo_lleno(145+x,50+y,150+x,60+y);
     rectangulo_lleno(110+x,75+y,140+x,80+y);
     rectangulo_lleno(145+x,75+y,165+x,80+y);
     rectangulo_lleno(135+x,125+y,140+x,130+y);/**/
     rectangulo_lleno(140+x,115+y,145+x,120+y);
     rectangulo_lleno(145+x,100+y,150+x,110+y);
     color_rgb(145,68,21);//color arco oscuro
     rectangulo_lleno(135+x,35+y,140+x,40+y);
     rectangulo_lleno(140+x,45+y,145+x,50+y);
     rectangulo_lleno(145+x,60+y,150+x,70+y);
     rectangulo_lleno(165+x,75+y,170+x,80+y);
     rectangulo_lleno(135+x,130+y,140+x,135+y);/**/
     rectangulo_lleno(140+x,120+y,145+x,130+y);
     rectangulo_lleno(145+x,110+y,150+x,120+y);
     color_rgb(129,127,127);//plomo oscuro
     rectangulo_lleno(170+x,75+y,180+x,80+y);
     rectangulo_lleno(170+x,70+y,175+x,75+y);
     rectangulo_lleno(170+x,80+y,180+x,85+y);
     color_rgb(196,189,186);//plomo claro
     rectangulo_lleno(175+x,70+y,180+x,75+y);
     rectangulo_lleno(180+x,75+y,185+x,80+y);
     color_rgb(0,0,0); //color negro
     rectangulo_lleno(145+x,120+y,150+x,125+y);
     rectangulo_lleno(150+x,100+y,155+x,115+y);
     
     /*PLumas*/
     color_rgb(0,0,0);//color negro
     rectangulo_lleno(100+x,10+y,105+x,20+y);
     rectangulo_lleno(95+x,5+y,100+x,10+y);
     rectangulo_lleno(75+x,0+y,80+x,5+y);
     rectangulo_lleno(85+x,-5+y,90+x,0+y);
     rectangulo_lleno(75+x,-10+y,85+x,-5+y);
     color_rgb(255,255,255);//color blanco
     rectangulo_lleno(95+x,10+y,100+x,15+y);
     rectangulo_lleno(90+x,5+y,95+x,10+y);
     rectangulo_lleno(90+x,15+y,95+x,20+y);
     rectangulo_lleno(85+x,0+y,90+x,5+y);
     rectangulo_lleno(80+x,5+y,85+x,10+y);
     rectangulo_lleno(85+x,10+y,90+x,15+y);
     rectangulo_lleno(80,-5+y,85,0+y);
     color_rgb(254,108,0);//color verde hoja
     rectangulo_lleno(95+x,15+y,100+x,20+y);
     rectangulo_lleno(90+x,10+y,95+x,15+y);
     rectangulo_lleno(85+x,5+y,90+x,10+y);
     rectangulo_lleno(80+x,0+y,85+x,5+y);
     rectangulo_lleno(75+x,-5+y,80+x,0+y);
}
/*Balas del enemigo 01*/
void EnemyRow01Bullet(int xv, int yz){
     if( xv == 700 | xv == 20){
         color_rgb(0,0,0);
         }else {
               color_rgb(62,200,24);
               rectangulo_lleno(18+xv, 0+ yz, 22+xv, 10+yz);
               }
} 
/*Balas del enemigo 02*/
void EnemyRow02Bullet(int xv, int yz){
     if( xv == 700 | xv == 20){
         color_rgb(0,0,0);
         }else {
               color_rgb(62,200,24);
               rectangulo_lleno(18+xv, 0+ yz, 22+xv, 10+yz);
               }
}
void PlayerHeart(int x, int y, int xx){
          color_rgb(200,20,20);
          rectangulo_lleno(x,y,xx+x,y+20);  
     }
std::string ShowScore (std::string text, int number){
              std::stringstream sstm;
              sstm << text << number;
              return sstm.str();
            }
/*HOMBRE VESTIDO*/
void EnemyMen(int v, int z, int cr, int cg , int cb, int tr, int tg, int tb, int tp){
     if(tp==3)
     {
     //pelo
     color_rgb(cr,cg,cb); 
     rectangulo_lleno(24+v,9+z,30+v,12+z);
     rectangulo_lleno(21+v,6+z,30+v,9+z);
     rectangulo_lleno(3+v,3+z,24+v,6+z);
     rectangulo_lleno(27+v,24+z,30+v,30+z);
     
     //traje
     color_rgb(tr,tg,tb);
     
     rectangulo_lleno(27+v,33+z,30+v,36+z);
     rectangulo_lleno(30+v,36+z,33+v,39+z);
     rectangulo_lleno(9+v,36+z,12+v,39+z);
     rectangulo_lleno(36+v,39+z,42+v,42+z);
     rectangulo_lleno(27+v,39+z,33+v,42+z);
     rectangulo_lleno(33+v,42+z,48+v,45+z);
     rectangulo_lleno(24+v,42+z,30+v,45+z);
     rectangulo_lleno(6+v,42+z,9+v,45+z);
     rectangulo_lleno(42+v,45+z,48+v,48+z);
     rectangulo_lleno(6+v,45+z,12+v,48+z);
     
     rectangulo_lleno(45+v,48+z,51+v,54+z);
     rectangulo_lleno(48+v,54+z,54+v,57+z);
     
     rectangulo_lleno(3+v,60+z,9+v,69+z);//debajo arma
     rectangulo_lleno(0+v,69+z,6+v,72+z);
     
     rectangulo_lleno(36+v,57+z,54+v,66+z);
     rectangulo_lleno(12+v,60+z,21+v,69+z);
     rectangulo_lleno(15+v,69+z,24+v,81+z);
     rectangulo_lleno(27+v,78+z,36+v,81+z);
     rectangulo_lleno(30+v,75+z,42+v,78+z);
     rectangulo_lleno(33+v,69+z,45+v,75+z);
     
     rectangulo_lleno(15+v,84+z,30+v,93+z);//pantalon piernaizq
     rectangulo_lleno(15+v,93+z,27+v,108+z);
     rectangulo_lleno(12+v,108+z,27+v,114+z);
     rectangulo_lleno(12+v,114+z,24+v,136+z);
     rectangulo_lleno(9+v,139+z,24+v,142+z);
     
     rectangulo_lleno(42+v,78+z,45+v,81+z);//pierna der
     rectangulo_lleno(36+v,81+z,45+v,84+z);
     rectangulo_lleno(30+v,84+z,48+v,90+z);
     rectangulo_lleno(33+v,90+z,48+v,93+z);
     rectangulo_lleno(36+v,93+z,52+v,102+z);
     rectangulo_lleno(39+v,102+z,52+v,105+z);
     rectangulo_lleno(39+v,105+z,55+v,108+z);
     rectangulo_lleno(42+v,108+z,55+v,121+z);
     rectangulo_lleno(42+v,121+z,58+v,124+z);
     rectangulo_lleno(45+v,124+z,58+v,136+z);
     rectangulo_lleno(45+v,139+z,61+v,142+z);
     } else if(tp==4)
     {
     //pelo
     color_rgb(cr,cg,cb); 
     rectangulo_lleno(24+v,9+z,30+v,12+z);
     rectangulo_lleno(21+v,6+z,30+v,9+z);
     rectangulo_lleno(3+v,3+z,24+v,6+z);
     rectangulo_lleno(27+v,24+z,30+v,30+z);
     
     //traje
     color_rgb(tr,tg,tb);
     
     rectangulo_lleno(27+v,33+z,30+v,36+z);
     rectangulo_lleno(30+v,36+z,33+v,39+z);
     rectangulo_lleno(9+v,36+z,12+v,39+z);
     rectangulo_lleno(36+v,39+z,42+v,42+z);
     rectangulo_lleno(27+v,39+z,33+v,42+z);
     rectangulo_lleno(33+v,42+z,48+v,45+z);
     rectangulo_lleno(24+v,42+z,30+v,45+z);
     rectangulo_lleno(6+v,42+z,9+v,45+z);
     rectangulo_lleno(42+v,45+z,48+v,48+z);
     rectangulo_lleno(6+v,45+z,12+v,48+z);
     
     rectangulo_lleno(45+v,48+z,51+v,54+z);
     rectangulo_lleno(48+v,54+z,54+v,57+z);
     
     rectangulo_lleno(3+v,60+z,9+v,69+z);//debajo arma
     rectangulo_lleno(0+v,69+z,6+v,72+z);
     
     rectangulo_lleno(36+v,57+z,54+v,66+z);
     rectangulo_lleno(12+v,60+z,21+v,69+z);
     rectangulo_lleno(15+v,69+z,24+v,81+z);
     rectangulo_lleno(27+v,78+z,36+v,81+z);
     rectangulo_lleno(30+v,75+z,42+v,78+z);
     rectangulo_lleno(33+v,69+z,45+v,75+z);
     
     rectangulo_lleno(15+v,84+z,30+v,93+z);//pantalon piernaizq
     rectangulo_lleno(15+v,93+z,27+v,108+z);
     rectangulo_lleno(12+v,108+z,27+v,114+z);
     rectangulo_lleno(12+v,114+z,24+v,136+z);
     rectangulo_lleno(9+v,139+z,24+v,142+z);
     
     rectangulo_lleno(42+v,78+z,45+v,81+z);//pierna der
     rectangulo_lleno(36+v,81+z,45+v,84+z);
     rectangulo_lleno(30+v,84+z,48+v,90+z);
     rectangulo_lleno(33+v,90+z,48+v,93+z);
     rectangulo_lleno(36+v,93+z,52+v,102+z);
     rectangulo_lleno(39+v,102+z,52+v,105+z);
     rectangulo_lleno(39+v,105+z,55+v,108+z);
     rectangulo_lleno(42+v,108+z,55+v,121+z);
     rectangulo_lleno(42+v,121+z,58+v,124+z);
     rectangulo_lleno(45+v,124+z,58+v,136+z);
     rectangulo_lleno(45+v,139+z,61+v,142+z);
     
     }
     color_rgb(0,0,0);//negro
     
     //cabeza
     rectangulo_lleno(3+v,0+z,24+v,3+z);//1
     rectangulo_lleno(3+v,6+z,21+v,9+z);
     rectangulo_lleno(24+v,3+z,30+v,6+z);//2
     rectangulo_lleno(30+v,6+z,33+v,30+z);
     rectangulo_lleno(0+v,3+z,3+v,30+z);
     rectangulo_lleno(3+v,30+z,15+v,33+z);
     rectangulo_lleno(9+v,33+z,12+v,36+z);//cuello
     rectangulo_lleno(6+v,36+z,9+v,42+z);
     rectangulo_lleno(9+v,39+z,12+v,45+z);
     rectangulo_lleno(3+v,42+z,6+v,48+z);
     
     rectangulo_lleno(-6+v,48+z,21+v,51+z);
     rectangulo_lleno(-24+v,51+z,-6+v,54+z);
     rectangulo_lleno(-24+v,54+z,-21+v,57+z);//cord bala
     rectangulo_lleno(-21+v,57+z,-9+v,60+z);
     rectangulo_lleno(-9+v,54+z,-6+v,69+z);
     
     rectangulo_lleno(-6+v,66+z,3+v,69+z);
     rectangulo_lleno(0+v,60+z,3+v,66+z);
     rectangulo_lleno(-6+v,57+z,-3+v,54+z);
     
     rectangulo_lleno(-3+v,57+z,21+v,60+z);
     rectangulo_lleno(-3+v,69+z,0+v,72+z);
     rectangulo_lleno(0+v,72+z,6+v,75+z);
     rectangulo_lleno(6+v,69+z,9+v,72+z);
     rectangulo_lleno(9+v,60+z,12+v,69+z);
     rectangulo_lleno(24+v,69+z,27+v,81+z);
     rectangulo_lleno(30+v,69+z,33+v,75+z);
     rectangulo_lleno(27+v,75+z,30+v,78+z);
     rectangulo_lleno(12+v,81+z,36+v,84+z);
     rectangulo_lleno(36+v,78+z,42+v,81+z);
     rectangulo_lleno(42+v,75+z,45+v,78+z);
     
     rectangulo_lleno(12+v,69+z,15+v,108+z);
     rectangulo_lleno(9+v,108+z,12+v,136+z);
     rectangulo_lleno(9+v,136+z,24+v,139+z);
     rectangulo_lleno(6+v,139+z,9+v,145+z);
     rectangulo_lleno(9+v,142+z,24+v,145+z);
     rectangulo_lleno(24+v,114+z,27+v,145+z);
     rectangulo_lleno(27+v,93+z,30+v,114+z);
     rectangulo_lleno(30+v,90+z,33+v,93+z);
     
     rectangulo_lleno(33+v,93+z,36+v,102+z);
     rectangulo_lleno(36+v,102+z,39+v,108+z);
     rectangulo_lleno(39+v,108+z,42+v,124+z);
     rectangulo_lleno(42+v,124+z,45+v,145+z);
     rectangulo_lleno(45+v,142+z,60+v,145+z);
     rectangulo_lleno(60+v,139+z,63+v,145+z);
     rectangulo_lleno(60+v,136+z,45+v,139+z);
     
     rectangulo_lleno(60+v,121+z,57+v,136+z);
     rectangulo_lleno(57+v,105+z,54+v,121+z);
     
     rectangulo_lleno(54+v,93+z,51+v,105+z);
     rectangulo_lleno(51+v,84+z,48+v,93+z);
     rectangulo_lleno(48+v,69+z,45+v,84+z);
     
     rectangulo_lleno(21+v,66+z,54+v,69+z);
     rectangulo_lleno(21+v,63+z,27+v,66+z);
     rectangulo_lleno(33+v,57+z,36+v,66+z);
     rectangulo_lleno(21+v,54+z,24+v,63+z);
     rectangulo_lleno(24+v,54+z,48+v,57+z);
     
     rectangulo_lleno(54+v,54+z,57+v,66+z);
     rectangulo_lleno(51+v,48+z,54+v,54+z);
     rectangulo_lleno(48+v,42+z,51+v,48+z);
     rectangulo_lleno(42+v,39+z,48+v,42+z);
     rectangulo_lleno(33+v,36+z,42+v,39+z);
     rectangulo_lleno(21+v,33+z,24+v,36+z);
     rectangulo_lleno(18+v,36+z,21+v,39+z);
     rectangulo_lleno(27+v,30+z,30+v,33+z);
     rectangulo_lleno(30+v,33+z,33+v,36+z);
     
     rectangulo_lleno(21+v,9+z,24+v,12+z);
     rectangulo_lleno(24+v,15+z,27+v,18+z);
     rectangulo_lleno(24+v,12+z,30+v,15+z);
     rectangulo_lleno(27+v,21+z,30+v,24+z);
     rectangulo_lleno(24+v,24+z,27+v,36+z);//
     rectangulo_lleno(33+v,39+z,36+v,42+z);
     rectangulo_lleno(30+v,42+z,33+v,45+z);
     rectangulo_lleno(21+v,45+z,42+v,48+z);
     rectangulo_lleno(21+v,42+z,24+v,45+z);
     rectangulo_lleno(24+v,39+z,27+v,42+z);
     rectangulo_lleno(27+v,36+z,30+v,39+z);
     rectangulo_lleno(21+v,36+z,24+v,39+z);
     rectangulo_lleno(18+v,39+z,21+v,42+z);
     rectangulo_lleno(15+v,39+z,18+v,48+z);
     rectangulo_lleno(12+v,36+z,15+v,39+z);//cu 
     rectangulo_lleno(12+v,45+z,15+v,48+z);
     rectangulo_lleno(24+v,48+z,27+v,51+z);
     rectangulo_lleno(30+v,48+z,33+v,51+z);
     rectangulo_lleno(36+v,48+z,39+v,51+z);
     rectangulo_lleno(42+v,48+z,45+v,54+z);
     
     
     
     //piel
     color_rgb(239,200,145);
     
     rectangulo_lleno(3+v,9+z,21+v,30+z);
     rectangulo_lleno(21+v,12+z,24+v,30+z);
     rectangulo_lleno(27+v,15+z,30+v,18+z);
     rectangulo_lleno(24+v,18+z,30+v,21+z);
     rectangulo_lleno(24+v,21+z,27+v,24+z);
     rectangulo_lleno(15+v,30+z,24+v,33+z);
     rectangulo_lleno(12+v,33+z,21+v,36+z);
     rectangulo_lleno(15+v,36+z,18+v,39+z);
     
     
     rectangulo_lleno(-6+v,57+z,-3+v,66+z);//manoIzq
     rectangulo_lleno(-3+v,60+z,0+v,66+z);
     
     rectangulo_lleno(27+v,57+z,33+v,66+z);//mano der
     rectangulo_lleno(24+v,57+z,27+v,63+z);
     
     
     //ojos
     color_rgb(149,80,23);
     rectangulo_lleno(3+v,15+z,6+v,18+z);
     rectangulo_lleno(6+v,18+z,9+v,21+z);
     rectangulo_lleno(18+v,15+z,21+v,18+z);
     rectangulo_lleno(15+v,18+z,18+v,21+z);
     
     //bocaabajo
     color_rgb(121,49,50);
     rectangulo_lleno(9+v,22+z,15+v,25+z);
     rectangulo_lleno(6+v,25+z,9+v,28+z);
     rectangulo_lleno(15+v,25+z,18+v,28+z);
     
     
     //azul claro
     color_rgb(193,210,220);
     rectangulo_lleno(12+v,39+z,15+v,45+z);
     rectangulo_lleno(21+v,39+z,24+v,42+z);
     rectangulo_lleno(21+v,36+z,27+v,39+z);
        
     //rojo
     color_rgb(248,98,99);
     rectangulo_lleno(18+v,42+z,21+v,48+z);
     
     
     
     //armaoscura
     color_rgb(132,132,132);
     rectangulo_lleno(39+v,48+z,42+v,51+z);
     rectangulo_lleno(33+v,48+z,36+v,51+z);
     rectangulo_lleno(27+v,48+z,30+v,51+z);
     rectangulo_lleno(21+v,48+z,24+v,51+z);
     rectangulo_lleno(18+v,51+z,42+v,54+z);
     rectangulo_lleno(-6+v,51+z,6+v,54+z);
     rectangulo_lleno(-3+v,54+z,21+v,57+z);
     rectangulo_lleno(-21+v,54+z,-9+v,57+z);
     rectangulo_lleno(27+v,69+z,30+v,75+z);
       
     //armaclara
     color_rgb(189,189,189);
     rectangulo_lleno(6+v,51+z,18+v,54+z);
          
     }
 void BalaHombre01(int xv, int yz){
     if( xv == 700 | xv == 20){
         color_rgb(0,0,0);
         }else {
               color_rgb(62,200,24);
               rectangulo_lleno(-24+xv,54+yz,-21+xv,57+yz);
               }
}
void BalaHombre02(int xv, int yz)
{
     if( xv == 700 | xv == 20){
         color_rgb(0,0,0);
         }else {
               color_rgb(62,200,24);
               rectangulo_lleno(-24+xv,54+yz,-21+xv,57+yz);
               }
} 
 void jefe(int a, int b){
          
     color_rgb(10,6,6);//negro
     
     rectangulo_lleno(0+a,0+b,9+a,3+b);//1 cabeza
     rectangulo_lleno(-3+a,3+b,0+a,6+b); 
     rectangulo_lleno(9+a,3+b,12+a,6+b); 
     rectangulo_lleno(-6+a,6+b,-3+a,18+b);
     rectangulo_lleno(-3+a,9+b,12+a,12+b);
     rectangulo_lleno(12+a,6+b,15+a,18+b);
     rectangulo_lleno(-3+a,18+b,12+a,21+b);
     rectangulo_lleno(-6+a,21+b,-3+a,24+b);//cuerpo
     rectangulo_lleno(15+a,18+b,18+a,24+b);
     rectangulo_lleno(-15+a,24+b,-6+a,27+b);//
     rectangulo_lleno(-15+a,27+b,-12+a,33+b);
     rectangulo_lleno(-45+a,33+b,3+a,36+b);
     rectangulo_lleno(-48+a,36+b,-45+a,60+b);
     
     rectangulo_lleno(-42+a,39+b,-39+a,57+b);//motor
     rectangulo_lleno(-39+a,54+b,-15+a,57+b);
     rectangulo_lleno(-39+a,39+b,-15+a,42+b);
     rectangulo_lleno(-15+a,39+b,-12+a,57+b);
     
     
     rectangulo_lleno(3+a,36+b,6+a,60+b);
     rectangulo_lleno(12+a,57+b,15+a,60+b);
     rectangulo_lleno(15+a,54+b,18+a,57+b);
     rectangulo_lleno(18+a,51+b,21+a,54+b);
     rectangulo_lleno(21+a,48+b,27+a,51+b);
     rectangulo_lleno(21+a,39+b,24+a,48+b);
     rectangulo_lleno(24+a,39+b,39+a,42+b);
     rectangulo_lleno(39+a,42+b,42+a,45+b);
     rectangulo_lleno(27+a,45+b,45+a,48+b);
     rectangulo_lleno(45+a,48+b,51+a,51+b);
     rectangulo_lleno(51+a,51+b,54+a,54+b);
     rectangulo_lleno(42+a,54+b,54+a,57+b);//llantadere
     rectangulo_lleno(39+a,57+b,42+a,63+b);
     rectangulo_lleno(36+a,63+b,39+a,69+b);
     rectangulo_lleno(33+a,69+b,36+a,72+b);
     rectangulo_lleno(30+a,72+b,33+a,75+b);
     rectangulo_lleno(27+a,75+b,30+a,78+b);
     rectangulo_lleno(24+a,78+b,27+a,81+b);
     rectangulo_lleno(21+a,72+b,+24+a,96+b);//
     rectangulo_lleno(18+a,66+b,+21+a,72+b);
     rectangulo_lleno(15+a,63+b,18+a,66+b);
     
     
     rectangulo_lleno(24+a,96+b,27+a,102+b);
     rectangulo_lleno(27+a,102+b,30+a,105+b);
     rectangulo_lleno(30+a,105+b,54+a,108+b);
     rectangulo_lleno(54+a,102+b,57+a,105+b);
     rectangulo_lleno(57+a,96+b,60+a,102+b);
     rectangulo_lleno(60+a,66+b,63+a,96+b);//
     rectangulo_lleno(57+a,60+b,60+a,66+b);
     rectangulo_lleno(54+a,57+b,57+a,60+b);
     
     rectangulo_lleno(51+a,69+b,54+a,93+b);//arollanta
     rectangulo_lleno(45+a,93+b,51+a,96+b);
     rectangulo_lleno(42+a,69+b,45+a,93+b);
     rectangulo_lleno(45+a,66+b,51+a,69+b);//
     
     
     rectangulo_lleno(-72+a,60+b,-9+a,63+b);//pala
     rectangulo_lleno(45+a,66+b,51+a,69+b);//
     rectangulo_lleno(-72+a,63+b,-69+a,66+b);
     rectangulo_lleno(-12+a,63+b,-9+a,66+b);
     rectangulo_lleno(-9+a,66+b,-6+a,102+b);//
     rectangulo_lleno(-12+a,99+b,-9+a,102+b);
     rectangulo_lleno(-69+a,66+b,-66+a,102+b);
     rectangulo_lleno(-6+a,21+b,-3+a,24+b);
     rectangulo_lleno(-72+a,99+b,-69+a,102+b);
     rectangulo_lleno(-72+a,102+b,-9+a,105+b);//finpala
     
     rectangulo_lleno(-3+a,60+b,15+a,63+b);//llantaizq
     rectangulo_lleno(-6+a,63+b,-3+a,66+b);
     rectangulo_lleno(-6+a,102+b,-3+a,105+b);
     rectangulo_lleno(-3+a,105+b,15+a,108+b);
     rectangulo_lleno(18+a,96+b,21+a,102+b);
     rectangulo_lleno(15+a,102+b,18+a,105+b);
     
     rectangulo_lleno(15+a,72+b,18+a,96+b);//arollanta
     rectangulo_lleno(9+a,69+b,15+a,72+b);
     rectangulo_lleno(9+a,96+b,15+a,99+b);
     rectangulo_lleno(6+a,72+b,9+a,96+b);
     
     rectangulo_lleno(6+a,24+b,15+a,27+b);
     rectangulo_lleno(12+a,27+b,15+a,33+b);
     rectangulo_lleno(18+a,24+b,21+a,30+b);//
     rectangulo_lleno(-6+a,27+b,6+a,30+b);
     rectangulo_lleno(-9+a,30+b,-6+a,33+b);
     rectangulo_lleno(6+a,30+b,9+a,39+b);
     rectangulo_lleno(9+a,33+b,12+a,36+b);
     rectangulo_lleno(21+a,30+b,24+a,39+b);
     rectangulo_lleno(15+a,36+b,21+a,39+b);//fin amarillo
     rectangulo_lleno(6+a,39+b,15+a,42+b);//abajo empiezamarron
      
     //amarillo
     color_rgb(245,235,57);
     rectangulo_lleno(0+a,3+b,9+a,6+b);//casco
     rectangulo_lleno(9+a,6+b,12+a,9+b);
     rectangulo_lleno(-6+a,24+b,6+a,27+b);
     
     //amarillo oscuro
     color_rgb(69,64,62);  //casco
     rectangulo_lleno(12+a,18+b,15+a,21+b);
     rectangulo_lleno(-3+a,21+b,15+a,24+b);
     rectangulo_lleno(15+a,24+b,18+a,30+b);
     rectangulo_lleno(15+a,30+b,21+a,36+b);
     rectangulo_lleno(12+a,33+b,15+a,39+b);
     rectangulo_lleno(9+a,36+b,12+a,39+b);
     
     
     //amarillo claro
     color_rgb(254,252,195); 
     rectangulo_lleno(-3+a,6+b,9+a,9+b); 
     
     //mostaza
     color_rgb(194,143,30);
     rectangulo_lleno(-6+a,30+b,6+a,33+b);
     rectangulo_lleno(3+a,33+b,6+a,36+b);
     
     
     //ojos
     color_rgb(34,115,193);
     rectangulo_lleno(-3+a,12+b,0+a,15+b);
     rectangulo_lleno(6+a,12+b,9+a,15+b);
     
     //pielclaro
     color_rgb(247,224,180);
     rectangulo_lleno(-3+a,15+b,9+a,18+b);
     rectangulo_lleno(-12+a,27+b,-6+a,30+b);
     rectangulo_lleno(6+a,27+b,9+a,30+b);
     
     //pielosc
     color_rgb(235,205,146);
     rectangulo_lleno(0+a,12+b,6+a,15+b);
     rectangulo_lleno(9+a,12+b,12+a,18+b);
     rectangulo_lleno(-12+a,30+b,-9+a,33+b);
     rectangulo_lleno(9+a,27+b,12+a,33+b);
     
     //Gris claro
     color_rgb(214,208,204);
     rectangulo_lleno(-69+a,63+b,-18+a,66+b);
     rectangulo_lleno(-66+a,84+b,-15+a,99+b);
     rectangulo_lleno(-69+a,99+b,-18+a,102+b);
     rectangulo_lleno(-39+a,42+b,-15+a,45+b);
     rectangulo_lleno(-39+a,48+b,-15+a,51+b);
     
     //gris oscuro
     color_rgb(162,152,144);
     rectangulo_lleno(-18+a,63+b,-12+a,66+b);
     rectangulo_lleno(-66+a,66+b,-9+a,84+b);
     rectangulo_lleno(-15+a,84+b,-9+a,99+b);
     rectangulo_lleno(-18+a,99+b,-12+a,102+b);
     rectangulo_lleno(-39+a,51+b,-15+a,54+b);
     rectangulo_lleno(-39+a,45+b,-15+a,48+b);
     
     //marron claro
     color_rgb(70,57,10);
     rectangulo_lleno(6+a,42+b,15+a,51+b);
     
     //marron oscuro
     color_rgb(51,38,7);
     rectangulo_lleno(6+a,48+b,9+a,60+b);
     rectangulo_lleno(9+a,45+b,12+a,60+b);
     rectangulo_lleno(12+a,45+b,15+a,57+b);
     rectangulo_lleno(15+a,39+b,18+a,54+b);
     rectangulo_lleno(18+a,39+b,21+a,51+b);
     
     
     //llantas claro
     color_rgb(112,89,76);
     rectangulo_lleno(-3+a,63+b,15+a,66+b);
     rectangulo_lleno(-6+a,66+b,9+a,69+b);
     rectangulo_lleno(15+a,66+b,18+a,69+b);
     rectangulo_lleno(-3+a,69+b,6+a,72+b);
     rectangulo_lleno(-3+a,72+b,3+a,84+b);
     rectangulo_lleno(0+a,84+b,3+a,87+b);
     
     rectangulo_lleno(36+a,78+b,39+a,87+b);
     rectangulo_lleno(39+a,69+b,42+a,90+b);
     rectangulo_lleno(45+a,60+b,54+a,66+b);
     rectangulo_lleno(42+a,63+b,45+a,69+b);
     rectangulo_lleno(51+a,66+b,54+a,69+b);
     rectangulo_lleno(54+a,66+b,57+a,81+b);
     
     
     
     
     //llantas oscuro
     color_rgb(94,62,50);
     rectangulo_lleno(9+a,66+b,15+a,69+b);
     rectangulo_lleno(-6+a,69+b,-3+a,102+b);
     rectangulo_lleno(6+a,69+b,9+a,72+b);
     rectangulo_lleno(15+a,69+b,18+a,72+b);
     rectangulo_lleno(-3+a,84+b,0+a,87+b);
     rectangulo_lleno(3+a,72+b,6+a,87+b);
     rectangulo_lleno(-3+a,87+b,6+a,105+b);
     rectangulo_lleno(6+a,96+b,9+a,105+b);
     rectangulo_lleno(9+a,99+b,15+a,105+b);
     rectangulo_lleno(15+a,96+b,18+a,102+b);
     rectangulo_lleno(18+a,72+b,21+a,96+b);
     
     rectangulo_lleno(57+a,66+b,60+a,96+b);
     rectangulo_lleno(54+a,81+b,57+a,102+b);
     rectangulo_lleno(54+a,60+b,57+a,66+b);
     rectangulo_lleno(42+a,57+b,54+a,60+b);
     rectangulo_lleno(42+a,60+b,45+a,63+b);
     rectangulo_lleno(39+a,63+b,42+a,69+b);
     rectangulo_lleno(36+a,69+b,39+a,72+b);
     rectangulo_lleno(33+a,72+b,39+a,75+b);
     rectangulo_lleno(30+a,75+b,39+a,79+b);
     rectangulo_lleno(27+a,78+b,36+a,81+b);
     rectangulo_lleno(24+a,81+b,36+a,96+b);
     rectangulo_lleno(27+a,96+b,54+a,102+b);
     rectangulo_lleno(30+a,102+b,54+a,105+b);
     rectangulo_lleno(36+a,87+b,39+a,96+b);
     rectangulo_lleno(39+a,90+b,42+a,96+b);
     rectangulo_lleno(42+a,93+b,45+a,96+b);
     rectangulo_lleno(51+a,93+b,54+a,96+b);
     
     
     
     
     //naranja claro
     color_rgb(245,235,57);
     rectangulo_lleno(-45+a,36+b,-6+a,39+b);
     rectangulo_lleno(-45+a,39+b,-42+a,57+b);
     rectangulo_lleno(-12+a,39+b,-9+a,57+b);
     
     rectangulo_lleno(24+a,42+b,30+a,45+b);
     
     rectangulo_lleno(27+a,48+b,45+a,51+b);//llantadere
     rectangulo_lleno(21+a,51+b,39+a,54+b);
     rectangulo_lleno(18+a,54+b,33+a,57+b);
     rectangulo_lleno(15+a,57+b,30+a,60+b);
     rectangulo_lleno(15+a,60+b,27+a,63+b);
     rectangulo_lleno(18+a,63+b,24+a,66+b);
     
     rectangulo_lleno(45+a,69+b,51+a,75+b);
     rectangulo_lleno(9+a,72+b,15+a,78+b);
     
     //naranja oscuro
     color_rgb(202,108,28);
     rectangulo_lleno(-45+a,57+b,-9+a,60+b);
     rectangulo_lleno(-9+a,39+b,-6+a,66+b);
     rectangulo_lleno(-6+a,36+b,3+a,60+b);
     rectangulo_lleno(-6+a,60+b,-3+a,63+b);
     
     rectangulo_lleno(30+a,42+b,39+a,45+b);
     rectangulo_lleno(24+a,45+b,27+a,48+b);
     
     rectangulo_lleno(39+a,51+b,51+a,54+b);
     rectangulo_lleno(33+a,54+b,42+a,57+b);
     rectangulo_lleno(30+a,57+b,39+a,60+b);
     rectangulo_lleno(27+a,60+b,39+a,63+b);
     rectangulo_lleno(24+a,63+b,36+a,66+b);
     rectangulo_lleno(21+a,66+b,36+a,69+b);
     rectangulo_lleno(21+a,69+b,33+a,72+b);
     rectangulo_lleno(24+a,72+b,30+a,75+b);
     rectangulo_lleno(24+a,75+b,27+a,78+b);
     
     rectangulo_lleno(48+a,72+b,51+a,93+b);//aro
     rectangulo_lleno(45+a,75+b,48+a,93+b);
     
     rectangulo_lleno(12+a,75+b,15+a,96+b);
     rectangulo_lleno(9+a,78+b,12+a,96+b);
       
     //naranja mas oscuro
     color_rgb(142,73,19);
     rectangulo_lleno(45+a,78+b,48+a,88+b);
     rectangulo_lleno(9+a,81+b,12+a,91+b);
 } 
 void BalaJefe(int xv, int yz)
{
     if( xv == 700 | xv == 20){
         color_rgb(0,0,0);
         }else {
               color_rgb(62,200,24);
               rectangulo_lleno(-69+xv,63+yz,-18+xv,66+yz);
               }
}  
/***********************************************/
 
int main ()
{
    int WIDTH = 700;
    int HEIGHT = 500;
    vredimensiona(WIDTH,HEIGHT);
    /*Coordenadas del personaje*/
    int x= 0 , y = 290;
    /*Coordenadas de la flecha*/
    int x1 = 0 , y1 = 290;
    /*Coordenadas del Enemigo Nube 01*/
    int m = 350, n = 20;
    /*Coordenadas del Enemigo Nube 02*/
    int m1 = 420, n1 = 20;
    /*Coordenadas del Enemigo Men 01*/
    int EnemyMen01X = 550, EnemyMen01Y = 120;
    /*Coordenadas del Enemigo Men 02*/
    int EnemyMen02X = 420, EnemyMen02Y = 20;
    /*Coordenadas de la bala del enemigo nube 01*/
    int EnemyRow01BulletX = 350, EnemyRow01BulletY=20;
    /*Coordenadas de la bala del enemigo nube 02*/
    int EnemyRow02BulletX = 420 , EnemyRow02BulletY=20;
    /*Coordenadas de la bala del Men 01*/
    int EnemyMen01BulletX = 550, EnemyMen01BulletY=120;
    /*Coordenadas de la bala del Men 02*/
    int EnemyMen02BulletX = 450, EnemyMen02BulletY=20;
    /*Coordenadas del Jefe Final*/
    int EnemyJefe01X = 550, EnemyJefe01Y = 20;
    /*Coordenadas de la bala del Jefe final*/
    int EnemyJefe01BulletX = 550, EnemyJefe01BulletY=20;
    /*Declaramos la tecla para no romper el ciclo*/
    int t = tecla();
    /*Variables ramdon*/
    int RandomRow01, RollRow01;
    int RandomRowMen01, RollRowMen01;
    int RandomRowMen02, RollRowMen02;
    int RandomRow02, RollRow02;
    int RollRowJefe01;
    int RandomRowJefe01;
    int RNGSpawn01, RNGSpawn02;
    int RNGSpawnMen01, RNGSpawnMen02;
    int RNGSpawnJefe01;
    /*Declaramos la vida de los personajes*/
    bool PlayerAlive = true;
    bool EnemyRow01Alive = true;
    bool EnemyRow02Alive = true;
    bool EnemyRow01AliveMen = true;
    bool EnemyRow02AliveMen = true;
    bool EnemyRow01AliveJefe = true;
    /*Puntajes de vida*/
    int EnemyRow01Counter = 0;
    int EnemyRow02Counter = 0;
    int EnemyRow01CounterMen = 0;
    int EnemyRow02CounterMen = 0;
    int EnemyRow01CounterJefe = 0;
    int PlayerLifeCounter = 40;/*cantidad de vida*/
    /*Declaramos el mensaje al finalizar el juego*/
    std::string ScoreText = "Current Score = ";
    std::string BestScoreText = "Best Score = ";
    std::string GameOverText = "Game Over. Final Score = ";
    std::string RestartText = "Press UP to restart the game";
    /*Declaramos los niveles y puntajes*/
    int CurrentScoreNumber = 0;
    int BestScoreNumber = 0;
    int NivelNumber;
    /*Variables para los niveles*/
    int Row01R, Row01G, Row01B;
    int aiR, aiG, aiB;
    int Row02R, Row02G, Row02B;
    int fr,fg,fb;
    int tp;
    /*Varibles para el color por nivel*/
    int cr,cg,cb;
    int tr,tg,tb;
    /*Varibles bonus*/
    int Row01BonusX = 0;
    int Row02BonusX = 0;
    int Row01BonusMenX = 0;
    int Row02BonusMenX = 0;
    int Row01BonusBulletX = 0;
    int Row02BonusBulletX = 0;
    int Row01BonusBulletMenX = 0;
    int Row02BonusBulletMenX = 0;
    int Row01BonusJefeX = 0;
    int Row01BonusBulletJefeX = 0;
    int BonusDamage = 0;
    
    while (t!= ESCAPE)
    {
     
     if(PlayerAlive){
     /*Inicio del movimiento del personaje tomando como variables el x e y */
      if (t == ARRIBA)
      { if(y <= 20){
             }
        else  {y = y - 20 , x = x + 0;}
      } else if (t== ABAJO)
        {
        if(y >= HEIGHT - 210){ }
        else y = y + 20, x = x + 0;
        }
      /****************Fin del movimiento************************************/
      /*Inicio del movimiento de la flecha con las variables x1 y y1*/
      if(x1>700 && t == ESPACIO)
       {
        x1 = x-30;
        y1 = y;
        /*Sonido del Disparo*/
        PlaySound("flecha.wav",NULL,SND_ASYNC);
        }
        if (t==ESPACIO)
        {
         if (y1>= 80 && y1<=400)
         {
            y1 = y , x1 = x1+20;
         } 
        }
        if (t= ESPACIO) 
       {
        if(y1<=400 && y1>=0)
       {
        y1 = y1+0 , x1 = x1 + 20;
        }
      }
    }
    else if(t==ARRIBA){
     CurrentScoreNumber = 0;
     PlayerAlive = true;
     PlayerLifeCounter = 40;
     x =0, y = 290;
     x1 = 0, y1 = 290;      
    }

    /*****************Fin del movimiento ***********************************/
    /*Enemigo ROW 01*/
    if(EnemyRow01Alive){
      /*Movimiento del enemigo*/
      if(RandomRow01 ==0){RollRow01 = ARRIBA;}
      if(RandomRow01 ==1){RollRow01 = ABAJO;}
      RandomRow01 = rand()%50;
      
      if(RollRow01 == ARRIBA){
       if(n >=0){
            n = n - (2+Row01BonusX), m = m + 0;
            }             
      }else if (RollRow01 == ABAJO){
            if(n<300){
            n = n + (2+Row01BonusX), m = m + 0;
            }       
      }
      if (EnemyRow01BulletX<=0 && t == ESPACIO){
         EnemyRow01BulletX = m + (4 + Row01BonusBulletX);
         EnemyRow01BulletY = n;
         /*Sonido Disparo Nube*/
         PlaySound("disparonube.wav",NULL,SND_ASYNC);
       }
       /*DISPARO DEL ENEMIGO*/
      if (t==ESPACIO){
        if(EnemyRow01BulletX >=500 && EnemyRow01BulletX <=669){
         EnemyRow01BulletY = n, EnemyRow01BulletX = EnemyRow01BulletX - (4 + Row01BonusBulletX);
         
         }  
       }
       if(t=ESPACIO){
         if( EnemyRow01BulletX<=WIDTH && EnemyRow01BulletX>= 0 ){
          EnemyRow01BulletX = EnemyRow01BulletX - (4 + Row01BonusBulletX),  EnemyRow01BulletY = EnemyRow01BulletY+0;
         }
       }
    }
    /*fIN ENEMIGO ROW01*/
    /*Movimiento del Men 01*/
    if(EnemyRow01AliveMen){//
    if(RandomRowMen01 == 0){RollRowMen01 = ARRIBA;}
    if(RandomRowMen01 ==1){RollRowMen01 = ABAJO;}
    RandomRowMen01 = rand()%50;
    if(RollRowMen01 == ARRIBA){
       if(EnemyMen01Y >=0){
        EnemyMen01Y = EnemyMen01Y - ( 2 + Row01BonusMenX), EnemyMen01X = EnemyMen01X + 0;}
       }else if (RollRowMen01 == ABAJO){
             if(EnemyMen01Y <300){
               EnemyMen01Y = EnemyMen01Y + ( 2 + Row01BonusMenX), EnemyMen01X = EnemyMen01X + 0;
            }
      }
    if(EnemyMen01BulletX<=0 && t == ESPACIO){
       EnemyMen01BulletX = EnemyMen01X + ( 4 + Row01BonusBulletMenX);
       EnemyMen01BulletY = EnemyMen01Y;
       PlaySound("pistola.wav",NULL,SND_ASYNC);
      }
      /*DISPARO DE LA BALA DE LA PERSONA*/
      if(t==ESPACIO){
       if(EnemyMen01BulletX >=500 && EnemyMen01BulletX<=669){
          EnemyMen01BulletY = EnemyMen01Y, EnemyMen01BulletX = EnemyMen01BulletX - (4+ Row01BonusBulletMenX);
        }
      }
      if(t=ESPACIO){
       if(EnemyMen01BulletX <=WIDTH && EnemyMen01BulletX>=0){
        EnemyMen01BulletX = EnemyMen01BulletX - (4+ Row01BonusBulletMenX), EnemyMen01BulletY = EnemyMen01BulletY+0;
       }
      }
    }
    /*Movimiento del Jefe 01*/
    if(EnemyRow01AliveJefe){//
    if(RandomRowJefe01 == 0){RollRowJefe01 = ARRIBA;}
    if(RandomRowJefe01 ==1){RollRowJefe01 = ABAJO;}
    RandomRowJefe01 = rand()%50;
    if(RollRowJefe01 == ARRIBA){
       if(EnemyJefe01Y >=0){
        EnemyJefe01Y = EnemyJefe01Y - ( 2 + Row01BonusJefeX), EnemyJefe01X = EnemyJefe01X + 0;}
       }else if (RollRowJefe01 == ABAJO){
             if(EnemyJefe01Y <300){
               EnemyJefe01Y = EnemyJefe01Y + ( 2 + Row01BonusJefeX), EnemyJefe01X = EnemyJefe01X + 0;
            }
      }
    if(EnemyJefe01BulletX<=0 && t == ESPACIO){
       EnemyJefe01BulletX = EnemyJefe01X + ( 4 + Row01BonusBulletJefeX);
       EnemyJefe01BulletY = EnemyJefe01Y;
       PlaySound("disparo.wav",NULL,SND_ASYNC);
      }
      /*DISPARO DE LA BALA DEL JEFE*/
      if(t==ESPACIO){
       if(EnemyJefe01BulletX >=500 && EnemyJefe01BulletX<=669){
          EnemyJefe01BulletY = EnemyJefe01Y, EnemyJefe01BulletX = EnemyJefe01BulletX - (4+ Row01BonusBulletJefeX);
        }
      }
      if(t=ESPACIO){
       if(EnemyJefe01BulletX <=WIDTH && EnemyJefe01BulletX>=0){
        EnemyJefe01BulletX = EnemyJefe01BulletX - (4+ Row01BonusBulletJefeX), EnemyJefe01BulletY = EnemyJefe01BulletY+0;
       }
      }
    }
    /*Enemigo Row 02*/
    if(EnemyRow02Alive){
      //Movimiento del Enemigo 02
       if(RandomRow02 ==0){RollRow02 = ARRIBA;}
       if(RandomRow02 ==1){RollRow02 = ABAJO;}
       RandomRow02 = rand()%50;
       if(RollRow02 == ARRIBA){
       if(n1 >=0){
            n1 = n1 - (2+Row02BonusX), m1 = m1 + 0;
            }             
      }else if (RollRow02 == ABAJO){
            if(n1<300){
            n1 = n1 + (2+Row02BonusX), m1 = m1 + 0;
            }       
      }
      if (EnemyRow02BulletX<=0 && t == ESPACIO){
         EnemyRow02BulletX = m1 + (4 + Row02BonusBulletX);
         EnemyRow02BulletY = n1;
         PlaySound("disparonube.wav",NULL,SND_ASYNC);
       } 
       /*DISPARO DEL ENEMIGO*/
      if (t==ESPACIO){
        if(EnemyRow02BulletX >=500 && EnemyRow02BulletX <=669){
         EnemyRow02BulletY = n1, EnemyRow02BulletX = EnemyRow02BulletX - (4 + Row02BonusBulletX);
         }  
       }
       if(t=ESPACIO){
         if( EnemyRow02BulletX<=WIDTH && EnemyRow02BulletX>= 0 ){
          EnemyRow02BulletX = EnemyRow02BulletX - (4 + Row02BonusBulletX),  EnemyRow02BulletY = EnemyRow02BulletY+0;
         }
       }
    }
    /*Fin del Enemigo 02*/
    
    /*Movimiento del Men 02*/
    if(EnemyRow02AliveMen){//
    if(RandomRowMen02 == 0){RollRowMen02 = ARRIBA;}
    if(RandomRowMen02 ==1){RollRowMen02 = ABAJO;}
    RandomRowMen02 = rand()%50;
    if(RollRowMen02 == ARRIBA){
       if(EnemyMen02Y >=0){
        EnemyMen02Y = EnemyMen02Y - ( 2 + Row02BonusMenX), EnemyMen02X = EnemyMen02X + 0;}
       }else if (RollRowMen02 == ABAJO){
             if(EnemyMen02Y <300){
               EnemyMen02Y = EnemyMen02Y + ( 2 + Row02BonusMenX), EnemyMen02X = EnemyMen02X + 0;
            }
      }
    if(EnemyMen02BulletX<=0 && t == ESPACIO){
       EnemyMen02BulletX = EnemyMen02X + ( 4 + Row02BonusBulletMenX);
       EnemyMen02BulletY = EnemyMen02Y;
       PlaySound("pistola.wav",NULL,SND_ASYNC);
      }
      /*DISPARO DE LA BALA DE LA PERSONA*/
      if(t==ESPACIO){
       if(EnemyMen02BulletX >=500 && EnemyMen02BulletX<=669){
          EnemyMen02BulletY = EnemyMen02Y, EnemyMen02BulletX = EnemyMen02BulletX - (4+ Row02BonusBulletMenX);
        }
      }
      if(t=ESPACIO){
       if(EnemyMen02BulletX <=WIDTH && EnemyMen02BulletX>=0){
        EnemyMen02BulletX = EnemyMen02BulletX - (4+ Row02BonusBulletMenX), EnemyMen02BulletY = EnemyMen02BulletY+0;
       }
      }
    }
    /*COLISION Y DETECCION */
    /*BALAS DEL JUGADOR AL ENEMIGO 01*/
    if(EnemyRow01Alive){
     if(y1 >= n-20 && y1 <= n+30){
       if(x1>=610 && x1<=720){
        EnemyRow01Alive = false;
        m = -100, n=1000;
        CurrentScoreNumber +=50;
        PlayerLifeCounter += BonusDamage;
        if(PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
        /*Impacto a la  Nube*/
         PlaySound("impacto.wav",NULL,SND_ASYNC);
        }
      }
    }
    /*BALAS DEL JUGADOR AL MEN 01*/
    if(EnemyRow01AliveMen){
     if(y1 >= EnemyMen01Y-20 && y1 <= EnemyMen01Y+30){
       if(x1>=610 && x1<=720){
        EnemyRow01AliveMen = false;
        EnemyMen01X = -100, EnemyMen01Y=1000;
        CurrentScoreNumber +=50;
        PlayerLifeCounter += BonusDamage;
        if(PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
         PlaySound("impacto.wav",NULL,SND_ASYNC);
        }
      }
    }
    /*BALAS DEL JUGADOR AL JEFE 01*/
    if(EnemyRow01AliveJefe){
     if(y1 >= EnemyJefe01Y-20 && y1 <= EnemyJefe01Y+30){
       if(x1>=610 && x1<=720){
        EnemyRow01AliveJefe = false;
        EnemyJefe01X = -100, EnemyJefe01Y=1000;
        CurrentScoreNumber +=50;
        PlayerLifeCounter += BonusDamage;     
        if(PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
        PlaySound("impacto.wav",NULL,SND_ASYNC);
        }
      }
    }
    /*Balas del Jugador al Enemigo 02*/
    if(EnemyRow02Alive){
     if(y1 >= n1-20 && y1 <= n1+30){
       if(x1>=560 && x1<=670){
        EnemyRow02Alive = false;
        m1 = -100, n1=1000;
        CurrentScoreNumber +=50;
        PlayerLifeCounter += BonusDamage;
        if(PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
        PlaySound("impacto.wav",NULL,SND_ASYNC);
        }
      }
    }
    /*BALAS DEL JUGADOR AL MEN 02*/
    if(EnemyRow02AliveMen){
     if(y1 >= EnemyMen02Y-20 && y1 <= EnemyMen02Y+30){
       if(x1>=610 && x1<=720){
        EnemyRow02AliveMen = false;
        EnemyMen02X = -100, EnemyMen02Y=1000;
        CurrentScoreNumber +=50;
        PlayerLifeCounter += BonusDamage;
        if(PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
        PlaySound("impacto.wav",NULL,SND_ASYNC);
        }
      }
    }
    /*FIN DE BALAS AL ENEMIGO*/
    /*Enemigo 01 Balas daño al jugador*/
    if(PlayerAlive){
       if(EnemyRow01BulletY >= y - 20 && EnemyRow01BulletY <= y+20){
          if(EnemyRow01BulletX>=50 && EnemyRow01BulletX<=100){
          /*COLOCAR EL SONIDO*/
          PlaySound("danio.wav",NULL,SND_ASYNC);
          PlayerLifeCounter -= 1 + BonusDamage;
          }
        }
    }
    /*Enemigo Men 01 Daño al jugador*/
    if(PlayerAlive){
       if(EnemyMen01BulletY >= y - 20 && EnemyMen01BulletY <= y+20){
          if(EnemyMen01BulletX>=50 && EnemyMen01BulletX<=100){
          /*COLOCAR EL SONIDO*/
          PlaySound("danio.wav",NULL,SND_ASYNC);
          PlayerLifeCounter -= 1 + BonusDamage;
          }
        }
    }
    /*Enemigo JEFE Daño al jugador*/
    if(PlayerAlive){
       if(EnemyJefe01BulletY >= y - 20 && EnemyJefe01BulletY <= y+20){
          if(EnemyJefe01BulletX>=50 && EnemyJefe01BulletX<=100){
          /*COLOCAR EL SONIDO*/
          PlaySound("danio.wav",NULL,SND_ASYNC);
          PlayerLifeCounter -= 1 + BonusDamage;
          }
        }
    }
    /*Enemigo 02 balas daño al jugador*/
    if(PlayerAlive){
       if(EnemyRow02BulletY >= y - 20 && EnemyRow02BulletY <= y+20){
          if(EnemyRow02BulletX>=50 && EnemyRow02BulletX<=100){
          /*COLOCAR EL SONIDO*/
          PlaySound("danio.wav",NULL,SND_ASYNC);
          PlayerLifeCounter -= 1 + BonusDamage;
          }
        }
    }
    /*Enemigo Men 02 Daño al jugador*/
    if(PlayerAlive){
       if(EnemyMen02BulletY >= y - 20 && EnemyMen02BulletY <= y+20){
          if(EnemyMen02BulletX>=50 && EnemyMen02BulletX<=100){
          /*COLOCAR EL SONIDO*/
          PlaySound("danio.wav",NULL,SND_ASYNC);
          PlayerLifeCounter -= 1 + BonusDamage;
          }
        }
    }
    borra();
    /*Verificar la vida del jugador y Dibujar*/
    if(PlayerLifeCounter <= 0){
                         flecha(0,0);
                         PlayerAlive = false;
                         }
    //fondo();
    if(PlayerAlive){personaje(x,y);}
    if(PlayerAlive){flecha(x1,y1);}
    /*Dibujando Enemigo 1*/
    if(EnemyRow01Alive){enemigo(m,n,Row01R,Row01G,Row01B,aiR,aiG,aiB,fr,fg,fb,tp);}/*agregar mas cosas*/
    if(EnemyRow01Alive){EnemyRow01Bullet(EnemyRow01BulletX,EnemyRow01BulletY);}
    /*Dibujando Enemigo 2*/
    if(EnemyRow02Alive){enemigo(m1,n1,Row01R,Row01G,Row01B,aiR,aiG,aiB,fr,fg,fb,tp);}
    if(EnemyRow02Alive){EnemyRow02Bullet(EnemyRow02BulletX,EnemyRow02BulletY);}
    /*Dibujando Enemigo Men 01*/
    if(EnemyRow01AliveMen){EnemyMen(EnemyMen01X, EnemyMen01Y,cr,cg,cb,tr,tg,tb,tp);}/*agregar mas cosas*/
    if(EnemyRow01AliveMen){BalaHombre01(EnemyMen01BulletX,EnemyMen01BulletY);}/*aqui*/
    /*Dibujando Enemigo Men 01*/
    if(EnemyRow02AliveMen){EnemyMen(EnemyMen02X, EnemyMen02Y,cr,cg,cb,tr,tg,tb,tp);}/*agregar mas cosas*/
    if(EnemyRow02AliveMen){BalaHombre01(EnemyMen02BulletX,EnemyMen02BulletY);}/*aqui*/
    /*Dibujando Enemigo JEFE*/
    if(EnemyRow01AliveJefe){jefe(EnemyJefe01X, EnemyJefe01Y);}/*agregar mas cosas*/
    if(EnemyRow01AliveJefe){BalaJefe(EnemyJefe01BulletX,EnemyJefe01BulletY);}/*aqui*/
    /*Responear el Enemigo 01*/
    if(!EnemyRow01Alive){
                         RNGSpawn01 = rand()%3;
                         switch(RNGSpawn01) {
                           case 0: m = 500; break;
                           case 1: m = 460; break;
                           case 2: m = 340; break;
                           case 3: m = 220; break;
                           }
                           n = 50;
                           EnemyRow01BulletX = m, EnemyRow01BulletY = 50;
                           EnemyRow01Counter +=5;}
    if (EnemyRow01Counter == 1000){
                          EnemyRow01Counter =0;
                          EnemyRow01Alive = true;}
      /*Responear el Enemigo Men 01*/
    if(!EnemyRow01AliveMen){
                         RNGSpawnMen01 = rand()%3;
                         switch(RNGSpawnMen01) {
                           case 0: EnemyMen01X = 500; break;
                           case 1: EnemyMen01X = 460; break;
                           case 2: EnemyMen01X = 340; break;
                           case 3: EnemyMen01X = 220; break;
                           }
                           EnemyMen01Y = 50;
                           EnemyMen01BulletX = EnemyMen01X, EnemyMen01BulletY = 50;
                           EnemyRow01CounterMen +=5;}
    if (EnemyRow01CounterMen == 1000){
                          EnemyRow01CounterMen =0;
                          EnemyRow01AliveMen = true;}                     
    /*Respownear Enemigo 02*/
    if(!EnemyRow02Alive){
                         RNGSpawn02 = rand()%3;
                         switch(RNGSpawn02) {
                           case 0: m1 = 500; break;
                           case 1: m1 = 460; break;
                           case 2: m1 = 340; break;
                           case 3: m1 = 220; break;
                           }
                           n1 = 100;
                           EnemyRow02BulletX = m, EnemyRow02BulletY = 50;
                           EnemyRow02Counter +=5;}
    if (EnemyRow02Counter == 1000){
                          EnemyRow02Counter =0;
                          EnemyRow02Alive = true;}
      /*Responear el Enemigo Men 02*/
    if(!EnemyRow02AliveMen){
                         RNGSpawnMen02 = rand()%3;
                         switch(RNGSpawnMen02) {
                           case 0: EnemyMen02X = 500; break;
                           case 1: EnemyMen02X = 460; break;
                           case 2: EnemyMen02X = 340; break;
                           case 3: EnemyMen02X = 220; break;
                           }
                           EnemyMen02Y = 100;
                           EnemyMen02BulletX = EnemyMen02X, EnemyMen02BulletY = 50;
                           EnemyRow02CounterMen +=5;}
    if (EnemyRow02CounterMen == 1000){
                          EnemyRow02CounterMen =0;
                          EnemyRow02AliveMen = true;}                          
    /*Screem de puntaje*/
    if (PlayerAlive){
     //Pantalla de puntaje
     color_rgb(69,30,16);//Caja de puntaje
     rectangulo_lleno(0,430,700,480);
     color_rgb(219,151,31);//Barra de vida de fondo amarillo
     rectangulo_lleno(30,440,230,460);
     color_rgb(255,255,255);//letras del texto
     texto(300,446,ShowScore("Nivel  " , NivelNumber));
     texto(545,20,ShowScore("Score : ", CurrentScoreNumber));
     texto(480,446, ShowScore(BestScoreText,BestScoreNumber));
     
     if (BestScoreNumber < CurrentScoreNumber){BestScoreNumber = CurrentScoreNumber;}
    }
    else {
     /*Juego terminado*/
     color_rgb(250,250,250);
     if (BestScoreNumber < CurrentScoreNumber) {BestScoreNumber = CurrentScoreNumber;}
     texto(230, 240, ShowScore(GameOverText,CurrentScoreNumber));
     texto(230, 260, RestartText);
     texto(270, 280, ShowScore(BestScoreText,BestScoreNumber));
    }
    if(PlayerLifeCounter > 0) {
      PlayerHeart(30,440,PlayerLifeCounter*5);
    }
    else if (PlayerLifeCounter <= 0 ){
         } 
    /*Dificulad de nivel*/
    if(CurrentScoreNumber < 100){
       tp = 1;
       aiR=84, aiG=44, aiB=62;
       Row01R = 186, Row01G = 187, Row01B = 182;
       fr= 216, fg= 87, fb=144;
       EnemyRow02Alive = false;
       EnemyRow01AliveMen = false;
       EnemyRow02AliveMen = false;
       EnemyRow01AliveJefe = false;
       Row01BonusX = 0;
       Row02BonusX=0;
       Row01BonusBulletX=0;
       Row02BonusBulletX=0;
       BonusDamage = 0;
       NivelNumber = 1;
     }else
     if(CurrentScoreNumber < 200){
      tp=2;
      aiR=48,aiG=101,aiB=42;
      Row01R=139,Row01G=0, Row01B=255;
      fr= 55, fg= 230, fb=36;
      EnemyRow02Alive = true;
      EnemyRow01AliveMen = false;
      EnemyRow02AliveMen = false;
      EnemyRow01AliveJefe = false;
      Row01BonusX = 1;
      Row02BonusX=1;
      Row01BonusBulletX = 2;
      Row02BonusBulletX= 2;
      BonusDamage = 0;
      NivelNumber = 2;   
     }else
     if (CurrentScoreNumber < 300){
       tp=3;
       aiR=220,aiG=43,aiB=49;
       Row01R=93,Row01G=97, Row01B=73;
       cr = 187, cg= 119,cb=118;
       tr = 69, tg=64,tb=62;
       EnemyRow02Alive = false;
       EnemyRow01Alive = false;
       EnemyRow01AliveMen = true;
       EnemyRow02AliveMen = true;
       EnemyRow01AliveJefe = false;
       Row01BonusX = 2;
       Row02BonusX=3;
       Row01BonusBulletX = 3;
       Row02BonusBulletX=3;
       BonusDamage = 1;
       NivelNumber = 3; 
      }else if(CurrentScoreNumber < 400){
       tp=4;
       aiR=47,aiG=127,aiB=224;
       Row01R=187,Row01G=36, Row01B=36;
       cr = 115, cg= 115,cb=115;
       tr = 7, tg=64,tb=105;
       EnemyRow02Alive = false;
       EnemyRow01Alive = false;
       EnemyRow01AliveJefe = false;
       Row01BonusX = 4;
       Row02BonusX=4;
       Row01BonusBulletX = 5;
       Row02BonusBulletX=5;
       BonusDamage = 2; 
       NivelNumber = 4; 
      }else{
      tp=4;
       aiR=47,aiG=127,aiB=224;
       Row01R=187,Row01G=36, Row01B=36;
       cr = 115, cg= 115,cb=115;
       tr = 7, tg=64,tb=105;
       EnemyRow01Alive = true;
       EnemyRow02Alive = false;
       EnemyRow01AliveMen = false;
       EnemyRow01AliveJefe = true;
       Row01BonusX = 4;
       Row02BonusX=4;
       Row01BonusBulletX = 5;
       Row02BonusBulletX=5;
       BonusDamage = 2; 
       NivelNumber = 5; 
      }
    
    //flecha(x1,y1);
    //personaje(x,y);//0,510
    //EnemyRow01Bullet(EnemyRow01BulletX,EnemyRow01BulletY);
    //enemigo(m,n);
    refresca();
    espera(1);
    t = tecla();
    }
    return 0;
}
