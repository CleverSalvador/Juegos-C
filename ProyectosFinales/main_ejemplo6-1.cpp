#include "miniwin.h"
#include <sstream>
using namespace miniwin;


void Iu(int x, int y){
/*
* FILA 1
*/     
color_rgb(212, 39, 0);
rectangulo_lleno(40+x,0+y,60+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(60+x,0+y,80+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(80+x,0+y,100+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(100+x,0+y,120+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(120+x,0+y,140+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(140+x,0+y,160+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(160+x,0+y,180+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(180+x,0+y,200+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(200+x,0+y,220+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(220+x,0+y,240+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(240+x,0+y,260+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(260+x,0+y,280+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(280+x,0+y,300+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(300+x,0+y,320+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(320+x,0+y,340+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(340+x,0+y,360+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(360+x,0+y,380+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(380+x,0+y,400+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(400+x,0+y,420+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(420+x,0+y,440+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(440+x,0+y,460+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(460+x,0+y,480+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(480+x,0+y,500+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(500+x,0+y,520+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(520+x,0+y,540+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(540+x,0+y,560+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(560+x,0+y,580+x,10+y);
color_rgb(212, 39, 0);
rectangulo_lleno(580+x,0+y,600+x,10+y);

color_rgb(212, 39, 0);
rectangulo_lleno(20+x,10+y,40+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(40+x,10+y,60+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(60+x,10+y,80+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(80+x,10+y,100+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(100+x,10+y,120+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(120+x,10+y,140+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(140+x,10+y,160+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(160+x,10+y,180+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(180+x,10+y,200+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(200+x,10+y,220+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(220+x,10+y,240+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(240+x,10+y,260+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(260+x,10+y,280+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(280+x,10+y,300+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(300+x,10+y,320+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(320+x,10+y,340+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(340+x,10+y,360+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(360+x,10+y,380+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(380+x,10+y,400+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(400+x,10+y,420+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(420+x,10+y,440+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(440+x,10+y,460+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(460+x,10+y,480+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(480+x,10+y,500+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(500+x,10+y,520+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(520+x,10+y,540+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(540+x,10+y,560+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(560+x,10+y,580+x,20+y);
color_rgb(200, 200, 200);
rectangulo_lleno(580+x,10+y,600+x,20+y);
color_rgb(212, 39, 0);
rectangulo_lleno(600+x,10+y,620+x,20+y);





//FILA 3

color_rgb(212, 39, 0);
rectangulo_lleno(0+x,20+y,20+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(20+x,20+y,40+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(40+x,20+y,60+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(60+x,20+y,80+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(80+x,20+y,100+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(100+x,20+y,120+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(120+x,20+y,140+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(140+x,20+y,160+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(160+x,20+y,180+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(180+x,20+y,200+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(200+x,20+y,220+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(220+x,20+y,240+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(240+x,20+y,260+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(260+x,20+y,280+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(280+x,20+y,300+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(300+x,20+y,320+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(320+x,20+y,340+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(340+x,20+y,360+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(360+x,20+y,380+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(380+x,20+y,400+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(400+x,20+y,420+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(420+x,20+y,440+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(440+x,20+y,460+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(460+x,20+y,480+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(480+x,20+y,500+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(500+x,20+y,520+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(520+x,20+y,540+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(540+x,20+y,560+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(560+x,20+y,580+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(580+x,20+y,600+x,30+y);
color_rgb(200, 200, 200);
rectangulo_lleno(600+x,20+y,620+x,30+y);
color_rgb(212, 39, 0);
rectangulo_lleno(620+x,20+y,640+x,30+y);


//FILA 4

color_rgb(212, 39, 0);
rectangulo_lleno(0+x,30+y,20+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(20+x,30+y,40+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(40+x,30+y,60+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(60+x,30+y,80+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(80+x,30+y,100+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(100+x,30+y,120+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(120+x,30+y,140+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(140+x,30+y,160+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(160+x,30+y,180+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(180+x,30+y,200+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(200+x,30+y,220+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(220+x,30+y,240+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(240+x,30+y,260+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(260+x,30+y,280+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(280+x,30+y,300+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(300+x,30+y,320+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(320+x,30+y,340+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(340+x,30+y,360+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(360+x,30+y,380+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(380+x,30+y,400+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(400+x,30+y,420+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(420+x,30+y,440+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(440+x,30+y,460+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(460+x,30+y,480+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(480+x,30+y,500+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(500+x,30+y,520+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(520+x,30+y,540+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(540+x,30+y,560+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(560+x,30+y,580+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(580+x,30+y,600+x,40+y);
color_rgb(200, 200, 200);
rectangulo_lleno(600+x,30+y,620+x,40+y);
color_rgb(212, 39, 0);
rectangulo_lleno(620+x,30+y,640+x,40+y);


//FILA 5

color_rgb(212, 39, 0);
rectangulo_lleno(0+x,40+y,20+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(20+x,40+y,40+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(40+x,40+y,60+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(60+x,40+y,80+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(80+x,40+y,100+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(100+x,40+y,120+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(120+x,40+y,140+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(140+x,40+y,160+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(160+x,40+y,180+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(180+x,40+y,200+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(200+x,40+y,220+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(220+x,40+y,240+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(240+x,40+y,260+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(260+x,40+y,280+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(280+x,40+y,300+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(300+x,40+y,320+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(320+x,40+y,340+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(340+x,40+y,360+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(360+x,40+y,380+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(380+x,40+y,400+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(400+x,40+y,420+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(420+x,40+y,440+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(440+x,40+y,460+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(460+x,40+y,480+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(480+x,40+y,500+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(500+x,40+y,520+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(520+x,40+y,540+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(540+x,40+y,560+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(560+x,40+y,580+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(580+x,40+y,600+x,50+y);
color_rgb(200, 200, 200);
rectangulo_lleno(600+x,40+y,620+x,50+y);
color_rgb(212, 39, 0);
rectangulo_lleno(620+x,40+y,640+x,50+y);


//FILA 6

color_rgb(212, 39, 0);
rectangulo_lleno(0+x,50+y,20+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(20+x,50+y,40+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(40+x,50+y,60+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(60+x,50+y,80+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(80+x,50+y,100+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(100+x,50+y,120+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(120+x,50+y,140+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(140+x,50+y,160+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(160+x,50+y,180+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(180+x,50+y,200+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(200+x,50+y,220+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(220+x,50+y,240+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(240+x,50+y,260+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(260+x,50+y,280+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(280+x,50+y,300+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(300+x,50+y,320+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(320+x,50+y,340+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(340+x,50+y,360+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(360+x,50+y,380+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(380+x,50+y,400+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(400+x,50+y,420+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(420+x,50+y,440+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(440+x,50+y,460+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(460+x,50+y,480+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(480+x,50+y,500+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(500+x,50+y,520+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(520+x,50+y,540+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(540+x,50+y,560+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(560+x,50+y,580+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(580+x,50+y,600+x,60+y);
color_rgb(200, 200, 200);
rectangulo_lleno(600+x,50+y,620+x,60+y);
color_rgb(212, 39, 0);
rectangulo_lleno(620+x,50+y,640+x,60+y);


//FILA 7


color_rgb(212, 39, 0);
rectangulo_lleno(20+x,60+y,40+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(40+x,60+y,60+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(60+x,60+y,80+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(80+x,60+y,100+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(100+x,60+y,120+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(120+x,60+y,140+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(140+x,60+y,160+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(160+x,60+y,180+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(180+x,60+y,200+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(200+x,60+y,220+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(220+x,60+y,240+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(240+x,60+y,260+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(260+x,60+y,280+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(280+x,60+y,300+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(300+x,60+y,320+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(320+x,60+y,340+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(340+x,60+y,360+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(360+x,60+y,380+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(380+x,60+y,400+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(400+x,60+y,420+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(420+x,60+y,440+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(440+x,60+y,460+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(460+x,60+y,480+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(480+x,60+y,500+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(500+x,60+y,520+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(520+x,60+y,540+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(540+x,60+y,560+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(560+x,60+y,580+x,70+y);
color_rgb(200, 200, 200);
rectangulo_lleno(580+x,60+y,600+x,70+y);
color_rgb(212, 39, 0);
rectangulo_lleno(600+x,60+y,620+x,70+y);



// FILA 8


color_rgb(212, 39, 0);
rectangulo_lleno(40+x,70+y,60+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(60+x,70+y,80+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(80+x,70+y,100+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(100+x,70+y,120+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(120+x,70+y,140+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(140+x,70+y,160+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(160+x,70+y,180+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(180+x,70+y,200+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(200+x,70+y,220+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(220+x,70+y,240+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(240+x,70+y,260+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(260+x,70+y,280+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(280+x,70+y,300+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(300+x,70+y,320+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(320+x,70+y,340+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(340+x,70+y,360+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(360+x,70+y,380+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(380+x,70+y,400+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(400+x,70+y,420+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(420+x,70+y,440+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(440+x,70+y,460+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(460+x,70+y,480+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(480+x,70+y,500+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(500+x,70+y,520+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(520+x,70+y,540+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(540+x,70+y,560+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(560+x,70+y,580+x,80+y);
color_rgb(212, 39, 0);
rectangulo_lleno(580+x,70+y,600+x,80+y);     
     
     
     
 
     
     
     
     
     
   //////////////  
     }





void Player(int x, int y){
    /////// 
/*
* FILA 1
*/

color_rgb(0, 80, 155);
rectangulo_lleno(32+x,0+y,36+x,4+y);


/*
* FILA 2
*/


color_rgb(0, 80, 155);
rectangulo_lleno(28+x,4+y,32+x,8+y);
color_rgb(0, 80, 155);
rectangulo_lleno(32+x,4+y,36+x,8+y);
color_rgb(0, 80, 155);
rectangulo_lleno(36+x,4+y,40+x,8+y);


/*
* FILA 3
*/

color_rgb(0, 80, 155);
rectangulo_lleno(28+x,8+y,32+x,12+y);
color_rgb(0, 0, 0);
rectangulo_lleno(32+x,8+y,36+x,12+y);
color_rgb(0, 80, 155);
rectangulo_lleno(36+x,8+y,40+x,12+y);


/*
* FILA 4
*/

color_rgb(0, 80, 155);
rectangulo_lleno(24+x,12+y,28+x,16+y);
color_rgb(78, 140, 255);
rectangulo_lleno(28+x,12+y,32+x,16+y);
color_rgb(163, 195, 255);
rectangulo_lleno(32+x,12+y,36+x,16+y);
color_rgb(78, 140, 255);
rectangulo_lleno(36+x,12+y,40+x,16+y);
color_rgb(0, 80, 155);
rectangulo_lleno(40+x,12+y,44+x,16+y);


/*
* FILA 5
*/


color_rgb(163, 195, 255);
rectangulo_lleno(16+x,16+y,20+x,20+y);
color_rgb(0, 0, 0);
rectangulo_lleno(20+x,16+y,24+x,20+y);
color_rgb(0, 80, 155);
rectangulo_lleno(24+x,16+y,28+x,20+y);
color_rgb(78, 140, 255);
rectangulo_lleno(28+x,16+y,32+x,20+y);
color_rgb(0, 80, 155);
rectangulo_lleno(32+x,16+y,36+x,20+y);
color_rgb(78, 140, 255);
rectangulo_lleno(36+x,16+y,40+x,20+y);
color_rgb(0, 80, 155);
rectangulo_lleno(40+x,16+y,44+x,20+y);
color_rgb(0, 0, 0);
rectangulo_lleno(44+x,16+y,48+x,20+y);
color_rgb(163, 195, 255);
rectangulo_lleno(48+x,16+y,52+x,20+y);



/*
* FILA 6
*/


color_rgb(78, 140, 255);
rectangulo_lleno(16+x,20+y,20+x,24+y);
color_rgb(0, 0, 0);
rectangulo_lleno(20+x,20+y,24+x,24+y);
color_rgb(0, 80, 155);
rectangulo_lleno(24+x,20+y,28+x,24+y);
color_rgb(0, 80, 155);
rectangulo_lleno(28+x,20+y,32+x,24+y);
color_rgb(163, 195, 255);
rectangulo_lleno(32+x,20+y,36+x,24+y);
color_rgb(0, 80, 155);
rectangulo_lleno(36+x,20+y,40+x,24+y);
color_rgb(0, 80, 155);
rectangulo_lleno(40+x,20+y,44+x,24+y);
color_rgb(0, 0, 0);
rectangulo_lleno(44+x,20+y,48+x,24+y);
color_rgb(78, 140, 255);
rectangulo_lleno(48+x,20+y,52+x,24+y);


/*
* FILA 7
*/


color_rgb(0, 80, 155);
rectangulo_lleno(16+x,24+y,20+x,28+y);
color_rgb(0, 0, 0);
rectangulo_lleno(20+x,24+y,24+x,28+y);
color_rgb(0, 80, 155);
rectangulo_lleno(24+x,24+y,28+x,28+y);
color_rgb(0, 80, 155);
rectangulo_lleno(28+x,24+y,32+x,28+y);
color_rgb(0, 80, 155);
rectangulo_lleno(32+x,24+y,36+x,28+y);
color_rgb(0, 80, 155);
rectangulo_lleno(36+x,24+y,40+x,28+y);
color_rgb(0, 80, 155);
rectangulo_lleno(40+x,24+y,44+x,28+y);
color_rgb(0, 0, 0);
rectangulo_lleno(44+x,24+y,48+x,28+y);
color_rgb(0, 80, 155);
rectangulo_lleno(48+x,24+y,52+x,28+y);


/*
* FILA 8
*/


color_rgb(0, 0, 0);
rectangulo_lleno(16+x,28+y,20+x,32+y);
color_rgb(156, 156,156);
rectangulo_lleno(20+x,28+y,24+x,32+y);
color_rgb(226, 226,226);
rectangulo_lleno(24+x,28+y,28+x,32+y);
color_rgb(0, 80, 155);
rectangulo_lleno(28+x,28+y,32+x,32+y);
color_rgb(0, 80, 155);
rectangulo_lleno(32+x,28+y,36+x,32+y);
color_rgb(0, 80, 155);
rectangulo_lleno(36+x,28+y,40+x,32+y);
color_rgb(226, 226,226);
rectangulo_lleno(40+x,28+y,44+x,32+y);
color_rgb(156, 156,156);
rectangulo_lleno(44+x,28+y,48+x,32+y);
color_rgb(0, 0, 0);
rectangulo_lleno(48+x,28+y,52+x,32+y);


/*
* FILA 9
*/


color_rgb(0, 0, 0);
rectangulo_lleno(16+x,32+y,20+x,36+y);
color_rgb(156, 156,156);
rectangulo_lleno(20+x,32+y,24+x,36+y);
color_rgb(226, 226,226);
rectangulo_lleno(24+x,32+y,28+x,36+y);
color_rgb(0, 80, 155);
rectangulo_lleno(28+x,32+y,32+x,36+y);
color_rgb(0, 80, 155);
rectangulo_lleno(32+x,32+y,36+x,36+y);
color_rgb(0, 80, 155);
rectangulo_lleno(36+x,32+y,40+x,36+y);
color_rgb(226, 226,226);
rectangulo_lleno(40+x,32+y,44+x,36+y);
color_rgb(156, 156,156);
rectangulo_lleno(44+x,32+y,48+x,36+y);
color_rgb(0, 0, 0);
rectangulo_lleno(48+x,32+y,52+x,36+y);


/*
* FILA 10
*/


color_rgb(0, 0, 0);
rectangulo_lleno(16+x,36+y,20+x,40+y);
color_rgb(156, 156,156);
rectangulo_lleno(20+x,36+y,24+x,40+y);
color_rgb(0, 0, 0);
rectangulo_lleno(24+x,36+y,28+x,40+y);
color_rgb(156, 156,156);
rectangulo_lleno(28+x,36+y,32+x,40+y);
color_rgb(0, 80, 155);
rectangulo_lleno(32+x,36+y,36+x,40+y);
color_rgb(156, 156,156);
rectangulo_lleno(36+x,36+y,40+x,40+y);
color_rgb(0, 0, 0);
rectangulo_lleno(40+x,36+y,44+x,40+y);
color_rgb(156, 156,156);
rectangulo_lleno(44+x,36+y,48+x,40+y);
color_rgb(0, 0, 0);
rectangulo_lleno(48+x,36+y,52+x,40+y);



/*
* FILA 11
*/


color_rgb(0, 0, 0);
rectangulo_lleno(20+x,40+y,24+x,44+y);
color_rgb(0, 0, 0);
rectangulo_lleno(24+x,40+y,28+x,44+y);
color_rgb(156, 156,156);
rectangulo_lleno(28+x,40+y,32+x,44+y);
color_rgb(78, 140, 255);
rectangulo_lleno(32+x,40+y,36+x,44+y);
color_rgb(156, 156,156);
rectangulo_lleno(36+x,40+y,40+x,44+y);
color_rgb(0, 0, 0);
rectangulo_lleno(40+x,40+y,44+x,44+y);
color_rgb(0, 0, 0);
rectangulo_lleno(44+x,40+y,48+x,44+y);



/*
* FILA 12
*/


color_rgb(0, 0, 0);
rectangulo_lleno(24+x,44+y,28+x,48+y);
color_rgb(0, 80, 155);
rectangulo_lleno(28+x,44+y,32+x,48+y);
color_rgb(0, 0, 0);
rectangulo_lleno(32+x,44+y,36+x,48+y);
color_rgb(0, 80, 155);
rectangulo_lleno(36+x,44+y,40+x,48+y);
color_rgb(0, 0, 0);
rectangulo_lleno(40+x,44+y,44+x,48+y);



/*
* FILA 13
*/


color_rgb(0, 0, 0);
rectangulo_lleno(20+x,48+y,24+x,52+y);
color_rgb(226, 226,226);
rectangulo_lleno(24+x,48+y,28+x,52+y);
color_rgb(0, 0, 0);
rectangulo_lleno(28+x,48+y,32+x,52+y);
color_rgb(242, 242, 242);
rectangulo_lleno(32+x,48+y,36+x,52+y);
color_rgb(0, 0, 0);
rectangulo_lleno(36+x,48+y,40+x,52+y);
color_rgb(226, 226,226);
rectangulo_lleno(40+x,48+y,44+x,52+y);
color_rgb(0, 0, 0);
rectangulo_lleno(44+x,48+y,48+x,52+y);



/*
* FILA 14
*/


color_rgb(0, 80, 155);
rectangulo_lleno(20+x,52+y,24+x,56+y);
color_rgb(226, 226,226);
rectangulo_lleno(24+x,52+y,28+x,56+y);
color_rgb(226, 226,226);
rectangulo_lleno(28+x,52+y,32+x,56+y);
color_rgb(0, 0, 0);
rectangulo_lleno(32+x,52+y,36+x,56+y);
color_rgb(226, 226,226);
rectangulo_lleno(36+x,52+y,40+x,56+y);
color_rgb(226, 226,226);
rectangulo_lleno(40+x,52+y,44+x,56+y);
color_rgb(0, 80, 155);
rectangulo_lleno(44+x,52+y,48+x,56+y);


/*
* FILA 15
*/


color_rgb(78, 140, 255);
rectangulo_lleno(16+x,56+y,20+x,60+y);
color_rgb(156, 156,156);
rectangulo_lleno(20+x,56+y,24+x,60+y);
color_rgb(226, 226,226);
rectangulo_lleno(24+x,56+y,28+x,60+y);
color_rgb(0, 0, 0);
rectangulo_lleno(28+x,56+y,32+x,60+y);
color_rgb(0, 0, 0);
rectangulo_lleno(32+x,56+y,36+x,60+y);
color_rgb(0, 0, 0);
rectangulo_lleno(36+x,56+y,40+x,60+y);
color_rgb(226, 226,226);
rectangulo_lleno(40+x,56+y,44+x,60+y);
color_rgb(156, 156,156);
rectangulo_lleno(44+x,56+y,48+x,60+y);
color_rgb(0, 80, 155);
rectangulo_lleno(48+x,56+y,52+x,60+y);



/*
* FILA 16
*/


color_rgb(0, 80, 155);
rectangulo_lleno(12+x,60+y,16+x,64+y);
color_rgb(156, 156,156);
rectangulo_lleno(16+x,60+y,20+x,64+y);
color_rgb(226, 226,226);
rectangulo_lleno(20+x,60+y,24+x,64+y);
color_rgb(0, 0, 0);
rectangulo_lleno(24+x,60+y,28+x,64+y);
color_rgb(163, 195, 255);
rectangulo_lleno(28+x,60+y,32+x ,64+y);
color_rgb(0, 80, 155);
rectangulo_lleno(32+x,60+y,36+x,64+y);
color_rgb(163, 195, 255);
rectangulo_lleno(36+x,60+y,40+x,64+y);
color_rgb(0, 0, 0);
rectangulo_lleno(40+x,60+y,44+x,64+y);
color_rgb(226, 226,226);
rectangulo_lleno(44+x,60+y,48+x,64+y);
color_rgb(156, 156,156);
rectangulo_lleno(48+x,60+y,52+x,64+y);
color_rgb(0, 80, 155);
rectangulo_lleno(52+x,60+y,56+x,64+y);



/*
* FILA 17
*/


color_rgb(78, 140, 255);
rectangulo_lleno(8+x,64+y,12+x,68+y);
color_rgb(156, 156,156);
rectangulo_lleno(12+x,64+y,16+x,68+y);
color_rgb(226, 226,226);
rectangulo_lleno(16+x,64+y,20+x,68+y);
color_rgb(0, 0, 0);
rectangulo_lleno(20+x,64+y,24+x,68+y);
color_rgb(0, 0, 0);
rectangulo_lleno(24+x,64+y,28+x,68+y);
color_rgb(163, 195, 255);
rectangulo_lleno(28+x,64+y,32+x,68+y);
color_rgb(163, 195, 255);
rectangulo_lleno(32+x,64+y,36+x,68+y);
color_rgb(163, 195, 255);
rectangulo_lleno(36+x,64+y,40+x,68+y);
color_rgb(0, 0, 0);
rectangulo_lleno(40+x,64+y,44+x,68+y);
color_rgb(0, 0, 0);
rectangulo_lleno(44+x,64+y,48+x,68+y);
color_rgb(226, 226,226);
rectangulo_lleno(48+x,64+y,52+x,68+y);
color_rgb(156, 156,156);
rectangulo_lleno(52+x,64+y,56+x,68+y);
color_rgb(78, 140, 255);
rectangulo_lleno(56+x,64+y,60+x,68+y);



/*
* FILA 18
*/


color_rgb(0, 80, 155);
rectangulo_lleno(4+x,68+y,8+x,72+y);
color_rgb(156, 156,156);
rectangulo_lleno(8+x,68+y,12+x,72+y);
color_rgb(226, 226,226);
rectangulo_lleno(12+x,68+y,16+x,72+y);
color_rgb(0, 0, 0);
rectangulo_lleno(16+x,68+y,20+x,72+y);
color_rgb(226, 226,226);
rectangulo_lleno(20+x,68+y,24+x,72+y);
color_rgb(156, 156,156);
rectangulo_lleno(24+x,68+y,28+x,72+y);
color_rgb(163, 195, 255);
rectangulo_lleno(28+x,68+y,32+x,72+y);
color_rgb(0, 80, 155);
rectangulo_lleno(32+x,68+y,36+x,72+y);
color_rgb(163, 195, 255);
rectangulo_lleno(36+x,68+y,40+x,72+y);
color_rgb(156, 156,156);
rectangulo_lleno(40+x,68+y,44+x,72+y);
color_rgb(226, 226,226);
rectangulo_lleno(44+x,68+y,48+x,72+y);
color_rgb(0, 0, 0);
rectangulo_lleno(48+x,68+y,52+x,72+y);
color_rgb(226, 226,226);
rectangulo_lleno(52+x,68+y,56+x,72+y);
color_rgb(156, 156,156);
rectangulo_lleno(56+x,68+y,60+x,72+y);
color_rgb(0, 80, 155);
rectangulo_lleno(60+x,68+y,64+x,72+y);



/*
* FILA 19
*/
color_rgb(163, 195, 255);
rectangulo_lleno(0+x,72+y,4+x,76+y);
color_rgb(156, 156,156);
rectangulo_lleno(4+x,72+y,8+x,76+y);
color_rgb(226, 226,226);
rectangulo_lleno(8+x,72+y,12+x,76+y);
color_rgb(0, 0, 0);
rectangulo_lleno(12+x,72+y,16+x,76+y);
color_rgb(226, 226,226);
rectangulo_lleno(16+x,72+y,20+x,76+y);
color_rgb(156, 156,156);
rectangulo_lleno(20+x,72+y,24+x,76+y);
color_rgb(156, 156,156);
rectangulo_lleno(24+x,72+y,28+x,76+y);
color_rgb(163, 195, 255);
rectangulo_lleno(28+x,72+y,32+x,76+y);
color_rgb(163, 195, 255);
rectangulo_lleno(32+x,72+y,36+x,76+y);
color_rgb(163, 195, 255);
rectangulo_lleno(36+x,72+y,40+x,76+y);
color_rgb(156, 156,156);
rectangulo_lleno(40+x,72+y,44+x,76+y);
color_rgb(156, 156,156);
rectangulo_lleno(44+x,72+y,48+x,76+y);
color_rgb(226, 226,226);
rectangulo_lleno(48+x,72+y,52+x,76+y);
color_rgb(0, 0, 0);
rectangulo_lleno(52+x,72+y,56+x,76+y);
color_rgb(226, 226,226);
rectangulo_lleno(56+x,72+y,60+x,76+y);
color_rgb(156, 156,156);
rectangulo_lleno(60+x,72+y,64+x,76+y);
color_rgb(163, 195, 255);
rectangulo_lleno(64+x,72+y,68+x,76+y);

/*
* FILA 20
*/
color_rgb(78, 140, 255);
rectangulo_lleno(0+x,76+y,4+x,80+y);
color_rgb(226, 226,226);
rectangulo_lleno(4+x,76+y,8+x,80+y);
color_rgb(156, 156,156);
rectangulo_lleno(8+x,76+y,12+x,80+y);
color_rgb(0, 0, 0);
rectangulo_lleno(12+x,76+y,16+x,80+y);
color_rgb(163, 195, 255);
rectangulo_lleno(16+x,76+y,20+x,80+y);
color_rgb(156, 156,156);
rectangulo_lleno(20+x,76+y,24+x,80+y);
color_rgb(226, 226,226);
rectangulo_lleno(24+x,76+y,28+x,80+y);
color_rgb(156, 156,156);
rectangulo_lleno(28+x,76+y,32+x,80+y);
color_rgb(0, 0, 0);
rectangulo_lleno(32+x,76+y,36+x,80+y);
color_rgb(156, 156,156);
rectangulo_lleno(36+x,76+y,40+x,80+y);
color_rgb(226, 226,226);
rectangulo_lleno(40+x,76+y,44+x,80+y);
color_rgb(156, 156,156);
rectangulo_lleno(44+x,76+y,48+x,80+y);
color_rgb(163, 195, 255);
rectangulo_lleno(48+x,76+y,52+x,80+y);
color_rgb(0, 0, 0);
rectangulo_lleno(52+x,76+y,56+x,80+y);
color_rgb(156, 156,156);
rectangulo_lleno(56+x,76+y,60+x,80+y);
color_rgb(226, 226,226);
rectangulo_lleno(60+x,76+y,64+x,80+y);
color_rgb(78, 140, 255);
rectangulo_lleno(64+x,76+y,68+x,80+y);

/*
* FILA 21
*/


color_rgb(0, 80, 155);
rectangulo_lleno(4+x,80+y,8+x,84+y);
color_rgb(226, 226,226);
rectangulo_lleno(8+x,80+y,12+x,84+y);
color_rgb(156, 156,156);
rectangulo_lleno(12+x,80+y,16+x,84+y);
color_rgb(0, 0, 0);
rectangulo_lleno(16+x,80+y,20+x,84+y);
color_rgb(163, 195, 255);
rectangulo_lleno(20+x,80+y,24+x,84+y);
color_rgb(156, 156,156);
rectangulo_lleno(24+x,80+y,28+x,84+y);
color_rgb(226, 226,226);
rectangulo_lleno(28+x,80+y,32+x,84+y);
color_rgb(0, 0, 0);
rectangulo_lleno(32+x,80+y,36+x,84+y);
color_rgb(226, 226,226);
rectangulo_lleno(36+x,80+y,40+x,84+y);
color_rgb(156, 156,156);
rectangulo_lleno(40+x,80+y,44+x,84+y);
color_rgb(163, 195, 255);
rectangulo_lleno(44+x,80+y,48+x,84+y);
color_rgb(0, 0, 0);
rectangulo_lleno(48+x,80+y,52+x,84+y);
color_rgb(156, 156,156);
rectangulo_lleno(52+x,80+y,56+x,84+y);
color_rgb(226, 226,226);
rectangulo_lleno(56+x,80+y,60+x,84+y);
color_rgb(0, 80, 155);
rectangulo_lleno(60+x,80+y,64+x,84+y);


/*
* FILA 22
*/


color_rgb(0, 80, 155);
rectangulo_lleno(8+x,84+y,12+x,88+y);
color_rgb(78, 140, 255);
rectangulo_lleno(12+x,84+y,16+x,88+y);
color_rgb(0, 80, 155);
rectangulo_lleno(16+x,84+y,20+x,88+y);
color_rgb(0, 0, 0);
rectangulo_lleno(20+x,84+y,24+x,88+y);
color_rgb(0, 80, 155);
rectangulo_lleno(24+x,84+y,28+x,88+y);
color_rgb(0, 80, 155);
rectangulo_lleno(28+x,84+y,32+x,88+y);
color_rgb(0, 0, 0);
rectangulo_lleno(32+x,84+y,36+x,88+y);
color_rgb(0, 80, 155);
rectangulo_lleno(36+x,84+y,40+x,88+y);
color_rgb(0, 80, 155);
rectangulo_lleno(40+x,84+y,44+x,88+y);
color_rgb(0, 0, 0);
rectangulo_lleno(44+x,84+y,48+x,88+y);
color_rgb(0, 80, 155);
rectangulo_lleno(48+x,84+y,52+x,88+y);
color_rgb(78, 140, 255);
rectangulo_lleno(52+x,84+y,56+x,88+y);
color_rgb(0, 80, 155);
rectangulo_lleno(56+x,84+y,60+x,88+y);


/*
* FILA 23
*/


color_rgb(0, 0, 0);
rectangulo_lleno(20+x,88+y,24+x,92+y);
color_rgb(202, 3, 0);
rectangulo_lleno(24+x,88+y,28+x,92+y);
color_rgb(0, 0, 0);
rectangulo_lleno(28+x,88+y,32+x,92+y);
color_rgb(0, 0, 0);
rectangulo_lleno(32+x,88+y,36+x,92+y);
color_rgb(0, 0, 0);
rectangulo_lleno(36+x,88+y,40+x,92+y);
color_rgb(202, 3, 0);
rectangulo_lleno(40+x,88+y,44+x,92+y);
color_rgb(0, 0, 0);
rectangulo_lleno(44+x,88+y,44+x,92+y);
  //////   
}


void PlayerBullet(int xx, int yy){
     if(yy==400 | yy==0){
       color_rgb(0,0,0);          
     }
     else{
       color_rgb(255,242,0);
       rectangulo_lleno(18+xx,0+yy,22+xx,10+yy);  
                                           }
     }
     
     
     
     

void Enemy(int x, int y){
     
    /*
* FILA 1
*/


color_rgb(49,49, 49);
rectangulo_lleno(6+x,0+y,8+x,2+y);
color_rgb(49,49, 49);
rectangulo_lleno(34+x,0+y,36+x,2+y);

/*
* FILA 2
*/

color_rgb(49,49, 49);
rectangulo_lleno(4+x,2+y,6+x,4+y);
color_rgb(255, 116, 0);
rectangulo_lleno(6+x,2+y,8+x,4+y);
color_rgb(49,49, 49);
rectangulo_lleno(8+x,2+y,10+x,4+y);
color_rgb(49,49, 49);
rectangulo_lleno(32+x,2+y,34+x,4+y);
color_rgb(255, 116, 0);
rectangulo_lleno(34+x,2+y,36+x,4+y);
color_rgb(49,49, 49);
rectangulo_lleno(36+x,2+y,38+x,4+y);

/*
* FILA 3
*/

color_rgb(49,49, 49);
rectangulo_lleno(2+x,4+y,4+x,6+y);
color_rgb(255, 116, 0);
rectangulo_lleno(4+x,4+y,6+x,6+y);
color_rgb(201, 0, 0);
rectangulo_lleno(6+x,4+y,8+x,6+y);
color_rgb(255, 116, 0);
rectangulo_lleno(8+x,4+y,10+x,6+y);
color_rgb(49,49, 49);
rectangulo_lleno(10+x,4+y,12+x,6+y);
color_rgb(49,49, 49);
rectangulo_lleno(30+x,4+y,32+x,6+y);
color_rgb(255, 116, 0);
rectangulo_lleno(32+x,4+y,34+x,6+y);
color_rgb(201, 0, 0);
rectangulo_lleno(34+x,4+y,36+x,6+y);
color_rgb(255, 116, 0);
rectangulo_lleno(36+x,4+y,38+x,6+y);
color_rgb(49,49, 49);
rectangulo_lleno(38+x,4+y,40+x,6+y);

/*
* FILA 4
*/
color_rgb(49,49, 49);
rectangulo_lleno(0+x,6+y,2+x,8+y);
color_rgb(255, 116, 0);
rectangulo_lleno(2+x,6+y,4+x,8+y);
color_rgb(201, 0, 0);
rectangulo_lleno(4+x,6+y,6+x,8+y);
color_rgb(255, 231, 33);
rectangulo_lleno(6+x,6+y,8+x,8+y);
color_rgb(255, 116, 0);
rectangulo_lleno(8+x,6+y,10+x,8+y);
color_rgb(49,49, 49);
rectangulo_lleno(10+x,6+y,12+x,8+y);
color_rgb(49,49, 49);
rectangulo_lleno(16+x,6+y,18+x,8+y);
color_rgb(49,49, 49);
rectangulo_lleno(24+x,6+y,26+x,8+y);
color_rgb(49,49, 49);
rectangulo_lleno(30+x,6+y,32+x,8+y);
color_rgb(255, 116, 0);
rectangulo_lleno(32+x,6+y,34+x,8+y);
color_rgb(255, 231, 33);
rectangulo_lleno(34+x,6+y,36+x,8+y);
color_rgb(201, 0, 0);
rectangulo_lleno(36+x,6+y,38+x,8+y);
color_rgb(255, 116, 0);
rectangulo_lleno(38+x,6+y,40+x,8+y);
color_rgb(49,49, 49);
rectangulo_lleno(40+x,6+y,42+x,8+y);

/*
* FILA 5
*/

color_rgb(49,49, 49);
rectangulo_lleno(2+x,8+y,4+x,10+y);
color_rgb(255, 116, 0);
rectangulo_lleno(4+x,8+y,6+x,10+y);
color_rgb(201, 0, 0);
rectangulo_lleno(6+x,8+y,8+x,10+y);
color_rgb(201, 0, 0);
rectangulo_lleno(8+x,8+y,10+x,10+y);
color_rgb(255, 116, 0);
rectangulo_lleno(10+x,8+y,12+x,10+y);
color_rgb(49,49, 49);
rectangulo_lleno(12+x,8+y,14+x,10+y);
color_rgb(49,49, 49);
rectangulo_lleno(14+x,8+y,16+x,10+y);
color_rgb(201, 0, 0);
rectangulo_lleno(16+x,8+y,18+x,10+y);
color_rgb(49,49, 49);
rectangulo_lleno(18+x,8+y,20+x,10+y);
color_rgb(49,49, 49);
rectangulo_lleno(22+x,8+y,24+x,10+y);
color_rgb(201, 0, 0);
rectangulo_lleno(24+x,8+y,26+x,10+y);
color_rgb(49,49, 49);
rectangulo_lleno(26+x,8+y,28+x,10+y);
color_rgb(49,49, 49);
rectangulo_lleno(28+x,8+y,30+x,10+y);
color_rgb(255, 116, 0);
rectangulo_lleno(30+x,8+y,32+x,10+y);
color_rgb(201, 0, 0);
rectangulo_lleno(32+x,8+y,34+x,10+y);
color_rgb(201, 0, 0);
rectangulo_lleno(34+x,8+y,36+x,10+y);
color_rgb(255, 116, 0);
rectangulo_lleno(36+x,8+y,38+x,10+y);
color_rgb(49,49, 49);
rectangulo_lleno(38+x,8+y,40+x,10+y);


/*
* FILA 6
*/

color_rgb(49,49, 49);
rectangulo_lleno(4+x,10+y,6+x,12+y);
color_rgb(255, 116, 0);
rectangulo_lleno(6+x,10+y,8+x,12+y);
color_rgb(201, 0, 0);
rectangulo_lleno(8+x,10+y,10+x,12+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,10+y,12+x,12+y);
color_rgb(255, 116, 0);
rectangulo_lleno(12+x,10+y,14+x,12+y);
color_rgb(49,49, 49);
rectangulo_lleno(14+x,10+y,16+x,12+y);
color_rgb(201, 0, 0);
rectangulo_lleno(16+x,10+y,18+x,12+y);
color_rgb(49,49, 49);
rectangulo_lleno(18+x,10+y,20+x,12+y);
color_rgb(49,49, 49);
rectangulo_lleno(22+x,10+y,24+x,12+y);
color_rgb(201, 0, 0);
rectangulo_lleno(24+x,10+y,26+x,12+y);
color_rgb(49,49, 49);
rectangulo_lleno(26+x,10+y,28+x,12+y);
color_rgb(255, 116, 0);
rectangulo_lleno(28+x,10+y,30+x,12+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,10+y,32+x,12+y);
color_rgb(201, 0, 0);
rectangulo_lleno(32+x,10+y,34+x,12+y);
color_rgb(255, 116, 0);
rectangulo_lleno(34+x,10+y,36+x,12+y);
color_rgb(49,49, 49);
rectangulo_lleno(36+x,10+y,38+x,12+y);


/*
* FILA 7
*/
color_rgb(49,49, 49);
rectangulo_lleno(6+x,12+y,8+x,14+y);
color_rgb(255, 116, 0);
rectangulo_lleno(8+x,12+y,10+x,14+y);
color_rgb(255, 116, 0);
rectangulo_lleno(10+x,12+y,12+x,14+y);
color_rgb(49,49, 49);
rectangulo_lleno(12+x,12+y,14+x,14+y);
color_rgb(255, 116, 0);
rectangulo_lleno(14+x,12+y,16+x,14+y);
color_rgb(201, 0, 0);
rectangulo_lleno(16+x,12+y,18+x,14+y);
color_rgb(201, 0, 0);
rectangulo_lleno(18+x,12+y,20+x,14+y);
color_rgb(49,49, 49);
rectangulo_lleno(20+x,12+y,22+x,14+y);
color_rgb(201, 0, 0);
rectangulo_lleno(22+x,12+y,24+x,14+y);
color_rgb(201, 0, 0);
rectangulo_lleno(24+x,12+y,26+x,14+y);
color_rgb(255, 116, 0);
rectangulo_lleno(26+x,12+y,28+x,14+y);
color_rgb(49,49, 49);
rectangulo_lleno(28+x,12+y,30+x,14+y);
color_rgb(255, 116, 0);
rectangulo_lleno(30+x,12+y,32+x,14+y);
color_rgb(255, 116, 0);
rectangulo_lleno(32+x,12+y,34+x,14+y);
color_rgb(49,49, 49);
rectangulo_lleno(34+x,12+y,36+x,14+y);


/*
* FILA 8
*/

color_rgb(49,49, 49);
rectangulo_lleno(8+x,14+y,10+x,16+y);
color_rgb(49,49, 49);
rectangulo_lleno(10+x,14+y,12+x,16+y);
color_rgb(255, 116, 0);
rectangulo_lleno(12+x,14+y,14+x,16+y);
color_rgb(201, 0, 0);
rectangulo_lleno(14+x,14+y,16+x,16+y);
color_rgb(49,49, 49);
rectangulo_lleno(16+x,14+y,18+x,16+y);
color_rgb(255, 231, 33);
rectangulo_lleno(18+x,14+y,20+x,16+y);
color_rgb(49,49, 49);
rectangulo_lleno(20+x,14+y,22+x,16+y);
color_rgb(255, 231, 33);
rectangulo_lleno(22+x,14+y,24+x,16+y);
color_rgb(49,49, 49);
rectangulo_lleno(24+x,14+y,26+x,16+y);
color_rgb(201, 0, 0);
rectangulo_lleno(26+x,14+y,28+x,16+y);
color_rgb(255, 116, 0);
rectangulo_lleno(28+x,14+y,30+x,16+y);
color_rgb(49,49, 49);
rectangulo_lleno(30+x,14+y,32+x,16+y);
color_rgb(49,49, 49);
rectangulo_lleno(32+x,14+y,34+x,16+y);


/*
* FILA 9
*/

color_rgb(49,49, 49);
rectangulo_lleno(8+x,16+y,10+x,18+y);
color_rgb(255, 116, 0);
rectangulo_lleno(10+x,16+y,12+x,18+y);
color_rgb(201, 0, 0);
rectangulo_lleno(12+x,16+y,14+x,18+y);
color_rgb(201, 0, 0);
rectangulo_lleno(14+x,16+y,16+x,18+y);
color_rgb(49,49, 49);
rectangulo_lleno(16+x,16+y,18+x,18+y);
color_rgb(0, 249, 245);
rectangulo_lleno(18+x,16+y,20+x,18+y);
color_rgb(0, 249, 245);
rectangulo_lleno(20+x,16+y,22+x,18+y);
color_rgb(0, 249, 245);
rectangulo_lleno(22+x,16+y,24+x,18+y);
color_rgb(49,49, 49);
rectangulo_lleno(24+x,16+y,26+x,18+y);
color_rgb(201, 0, 0);
rectangulo_lleno(26+x,16+y,28+x,18+y);
color_rgb(201, 0, 0);
rectangulo_lleno(28+x,16+y,30+x,18+y);
color_rgb(255, 116, 0);
rectangulo_lleno(30+x,16+y,32+x,18+y);
color_rgb(49,49, 49);
rectangulo_lleno(32+x,16+y,34+x,18+y);


/*
* FILA 10
*/
color_rgb(49,49, 49);
rectangulo_lleno(6+x,18+y,8+x,20+y);
color_rgb(255, 116, 0);
rectangulo_lleno(8+x,18+y,10+x,20+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,18+y,12+x,20+y);
color_rgb(201, 0, 0);
rectangulo_lleno(12+x,18+y,14+x,20+y);
color_rgb(49,49, 49);
rectangulo_lleno(14+x,18+y,16+x,20+y);
color_rgb(0, 144, 176);
rectangulo_lleno(16+x,18+y,18+x,20+y);
color_rgb(0, 249, 245);
rectangulo_lleno(18+x,18+y,20+x,20+y);
color_rgb(0, 249, 245);
rectangulo_lleno(20+x,18+y,22+x,20+y);
color_rgb(0, 249, 245);
rectangulo_lleno(22+x,18+y,24+x,20+y);
color_rgb(0, 144, 176);
rectangulo_lleno(24+x,18+y,26+x,20+y);
color_rgb(49,49, 49);
rectangulo_lleno(26+x,18+y,28+x,20+y);
color_rgb(201, 0, 0);
rectangulo_lleno(28+x,18+y,30+x,20+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,18+y,32+x,20+y);
color_rgb(255, 116, 0);
rectangulo_lleno(32+x,18+y,34+x,20+y);
color_rgb(49,49, 49);
rectangulo_lleno(34+x,18+y,36+x,20+y);

/*
* FILA 11
*/
color_rgb(49,49, 49);
rectangulo_lleno(4+x,20+y,6+x,22+y);
color_rgb(255, 116, 0);
rectangulo_lleno(6+x,20+y,8+x,22+y);
color_rgb(201, 0, 0);
rectangulo_lleno(8+x,20+y,10+x,22+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,20+y,12+x,22+y);
color_rgb(201, 0, 0);
rectangulo_lleno(12+x,20+y,14+x,22+y);
color_rgb(201, 0, 0);
rectangulo_lleno(14+x,20+y,16+x,22+y);
color_rgb(49,49, 49);
rectangulo_lleno(16+x,20+y,18+x,22+y);
color_rgb(0, 144, 176);
rectangulo_lleno(18+x,20+y,20+x,22+y);
color_rgb(0, 144, 176);
rectangulo_lleno(20+x,20+y,22+x,22+y);
color_rgb(0, 144, 176);
rectangulo_lleno(22+x,20+y,24+x,22+y);
color_rgb(49,49, 49);
rectangulo_lleno(24+x,20+y,26+x,22+y);
color_rgb(255, 116, 0);
rectangulo_lleno(26+x,20+y,28+x,22+y);
color_rgb(201, 0, 0);
rectangulo_lleno(28+x,20+y,30+x,22+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,20+y,32+x,22+y);
color_rgb(201, 0, 0);
rectangulo_lleno(32+x,20+y,34+x,22+y);
color_rgb(255, 116, 0);
rectangulo_lleno(34+x,20+y,36+x,22+y);
color_rgb(49,49, 49);
rectangulo_lleno(36+x,20+y,38+x,22+y);

/*
* FILA 12
*/

color_rgb(49,49, 49);
rectangulo_lleno(2+x,22+y,4+x,24+y);
color_rgb(255, 116, 0);
rectangulo_lleno(4+x,22+y,6+x,24+y);
color_rgb(201, 0, 0);
rectangulo_lleno(6+x,22+y,8+x,24+y);
color_rgb(255, 231, 33);
rectangulo_lleno(8+x,22+y,10+x,24+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,22+y,12+x,24+y);
color_rgb(201, 0, 0);
rectangulo_lleno(12+x,22+y,14+x,24+y);
color_rgb(201, 0, 0);
rectangulo_lleno(14+x,22+y,16+x,24+y);
color_rgb(201, 0, 0);
rectangulo_lleno(16+x,22+y,18+x,24+y);
color_rgb(49,49, 49);
rectangulo_lleno(18+x,22+y,20+x,24+y);
color_rgb(49,49, 49);
rectangulo_lleno(20+x,22+y,22+x,24+y);
color_rgb(49,49, 49);
rectangulo_lleno(22+x,22+y,24+x,24+y);
color_rgb(255, 116, 0);
rectangulo_lleno(24+x,22+y,26+x,24+y);
color_rgb(201, 0, 0);
rectangulo_lleno(26+x,22+y,28+x,24+y);
color_rgb(201, 0, 0);
rectangulo_lleno(28+x,22+y,30+x,24+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,22+y,32+x,24+y);
color_rgb(255, 231, 33);
rectangulo_lleno(32+x,22+y,34+x,24+y);
color_rgb(201, 0, 0);
rectangulo_lleno(34+x,22+y,36+x,24+y);
color_rgb(255, 116, 0);
rectangulo_lleno(36+x,22+y,38+x,24+y);
color_rgb(49,49, 49);
rectangulo_lleno(38+x,22+y,40+x,24+y);

/*
* FILA 13
*/
color_rgb(49,49, 49);
rectangulo_lleno(2+x,24+y,4+x,26+y);
color_rgb(255, 116, 0);
rectangulo_lleno(4+x,24+y,6+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(6+x,24+y,8+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(8+x,24+y,10+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,24+y,12+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(12+x,24+y,14+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(14+x,24+y,16+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(16+x,24+y,18+x,26+y);
color_rgb(49,49, 49);
rectangulo_lleno(18+x,24+y,20+x,26+y);
color_rgb(255, 231, 33);
rectangulo_lleno(20+x,24+y,22+x,26+y);
color_rgb(49,49, 49);
rectangulo_lleno(22+x,24+y,24+x,26+y);
color_rgb(255, 116, 0);
rectangulo_lleno(24+x,24+y,26+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(26+x,24+y,28+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(28+x,24+y,30+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,24+y,32+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(32+x,24+y,34+x,26+y);
color_rgb(201, 0, 0);
rectangulo_lleno(34+x,24+y,36+x,26+y);
color_rgb(255, 116, 0);
rectangulo_lleno(36+x,24+y,38+x,26+y);
color_rgb(49,49, 49);
rectangulo_lleno(38+x,24+y,40+x,26+y);

/*
* FILA 14
*/
color_rgb(49,49, 49);
rectangulo_lleno(4+x,26+y,6+x,28+y);
color_rgb(255, 116, 0);
rectangulo_lleno(6+x,26+y,8+x,28+y);
color_rgb(201, 0, 0);
rectangulo_lleno(8+x,26+y,10+x,28+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,26+y,12+x,28+y);
color_rgb(255, 231, 33);
rectangulo_lleno(12+x,26+y,14+x,28+y);
color_rgb(201, 0, 0);
rectangulo_lleno(14+x,26+y,16+x,28+y);
color_rgb(201, 0, 0);
rectangulo_lleno(16+x,26+y,18+x,28+y);
color_rgb(49,49, 49);
rectangulo_lleno(18+x,26+y,20+x,28+y);
color_rgb(49,49, 49);
rectangulo_lleno(20+x,26+y,22+x,28+y);
color_rgb(49,49, 49);
rectangulo_lleno(22+x,26+y,24+x,28+y);
color_rgb(255, 116, 0);
rectangulo_lleno(24+x,26+y,26+x,28+y);
color_rgb(201, 0, 0);
rectangulo_lleno(26+x,26+y,28+x,28+y);
color_rgb(255, 231, 33);
rectangulo_lleno(28+x,26+y,30+x,28+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,26+y,32+x,28+y);
color_rgb(201, 0, 0);
rectangulo_lleno(32+x,26+y,34+x,28+y);
color_rgb(255, 116, 0);
rectangulo_lleno(34+x,26+y,36+x,28+y);
color_rgb(49,49, 49);
rectangulo_lleno(36+x,26+y,38+x,28+y);

/*
* FILA 15
*/
color_rgb(49,49, 49);
rectangulo_lleno(6+x,28+y,8+x,30+y);
color_rgb(255, 116, 0);
rectangulo_lleno(8+x,28+y,10+x,30+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,28+y,12+x,30+y);
color_rgb(201, 0, 0);
rectangulo_lleno(12+x,28+y,14+x,30+y);
color_rgb(201, 0, 0);
rectangulo_lleno(14+x,28+y,16+x,30+y);
color_rgb(49,49, 49);
rectangulo_lleno(16+x,28+y,18+x,30+y);
color_rgb(0, 249, 245);
rectangulo_lleno(18+x,28+y,20+x,30+y);
color_rgb(49,49, 49);
rectangulo_lleno(20+x,28+y,22+x,30+y);
color_rgb(0, 249, 245);
rectangulo_lleno(22+x,28+y,24+x,30+y);
color_rgb(49,49, 49);
rectangulo_lleno(24+x,28+y,26+x,30+y);
color_rgb(201, 0, 0);
rectangulo_lleno(26+x,28+y,28+x,30+y);
color_rgb(201, 0, 0);
rectangulo_lleno(28+x,28+y,30+x,30+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,28+y,32+x,30+y);
color_rgb(255, 116, 0);
rectangulo_lleno(32+x,28+y,34+x,30+y);
color_rgb(49,49, 49);
rectangulo_lleno(34+x,28+y,36+x,30+y);

/*
* FILA 16
*/
color_rgb(49,49, 49);
rectangulo_lleno(8+x,30+y,10+x,32+y);
color_rgb(255, 116, 0);
rectangulo_lleno(10+x,30+y,12+x,32+y);
color_rgb(201, 0, 0);
rectangulo_lleno(12+x,30+y,14+x,32+y);
color_rgb(49,49, 49);
rectangulo_lleno(14+x,30+y,16+x,32+y);
color_rgb(255, 231, 33);
rectangulo_lleno(16+x,30+y,18+x,32+y);
color_rgb(49,49, 49);
rectangulo_lleno(18+x,30+y,20+x,32+y);
color_rgb(0, 249, 245);
rectangulo_lleno(20+x,30+y,22+x,32+y);
color_rgb(49,49, 49);
rectangulo_lleno(22+x,30+y,24+x,32+y);
color_rgb(255, 231, 33);
rectangulo_lleno(24+x,30+y,26+x,32+y);
color_rgb(49,49, 49);
rectangulo_lleno(26+x,30+y,28+x,32+y);
color_rgb(201, 0, 0);
rectangulo_lleno(28+x,30+y,30+x,32+y);
color_rgb(255, 116, 0);
rectangulo_lleno(30+x,30+y,32+x,32+y);
color_rgb(49,49, 49);
rectangulo_lleno(32+x,30+y,34+x,32+y);

/*
* FILA 17
*/
color_rgb(49,49, 49);
rectangulo_lleno(6+x,32+y,8+x,34+y);
color_rgb(255, 116, 0);
rectangulo_lleno(8+x,32+y,10+x,34+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,32+y,12+x,34+y);
color_rgb(49,49, 49);
rectangulo_lleno(12+x,32+y,14+x,34+y);
color_rgb(0, 144, 176);
rectangulo_lleno(14+x,32+y,16+x,34+y);
color_rgb(49,49, 49);
rectangulo_lleno(16+x,32+y,18+x,34+y);
color_rgb(0, 249, 245);
rectangulo_lleno(18+x,32+y,20+x,34+y);
color_rgb(201, 0, 0);
rectangulo_lleno(20+x,32+y,22+x,34+y);
color_rgb(0, 249, 245);
rectangulo_lleno(22+x,32+y,24+x,34+y);
color_rgb(49,49, 49);
rectangulo_lleno(24+x,32+y,26+x,34+y);
color_rgb(0, 144, 176);
rectangulo_lleno(26+x,32+y,28+x,34+y);
color_rgb(49,49, 49);
rectangulo_lleno(28+x,32+y,30+x,34+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,32+y,32+x,34+y);
color_rgb(255, 116, 0);
rectangulo_lleno(32+x,32+y,34+x,34+y);
color_rgb(49,49, 49);
rectangulo_lleno(34+x,32+y,36+x,34+y);


//* FILA 18

color_rgb(49,49, 49);
rectangulo_lleno(4+x,34+y,6+x,36+y);
color_rgb(255, 116, 0);
rectangulo_lleno(6+x,34+y,8+x,36+y);
color_rgb(201, 0, 0);
rectangulo_lleno(8+x,34+y,10+x,36+y);
color_rgb(49,49, 49);
rectangulo_lleno(10+x,34+y,12+x,36+y);
color_rgb(255, 231, 33);
rectangulo_lleno(12+x,34+y,14+x,36+y);
color_rgb(49,49, 49);
rectangulo_lleno(14+x,34+y,16+x,36+y);
color_rgb(201, 0, 0);
rectangulo_lleno(16+x,34+y,18+x,36+y);
color_rgb(201, 0, 0);
rectangulo_lleno(18+x,34+y,20+x,36+y);
color_rgb(201, 0, 0);
rectangulo_lleno(20+x,34+y,22+x,36+y);
color_rgb(201, 0, 0);
rectangulo_lleno(22+x,34+y,24+x,36+y);
color_rgb(201, 0, 0);
rectangulo_lleno(24+x,34+y,26+x,36+y);
color_rgb(49,49, 49);
rectangulo_lleno(26+x,34+y,28+x,36+y);
color_rgb(255, 231, 33);
rectangulo_lleno(28+x,34+y,30+x,36+y);
color_rgb(49,49, 49);
rectangulo_lleno(30+x,34+y,32+x,36+y);
color_rgb(201, 0, 0);
rectangulo_lleno(32+x,34+y,34+x,36+y);
color_rgb(255, 116, 0);
rectangulo_lleno(34+x,34+y,36+x,36+y);
color_rgb(49,49, 49);
rectangulo_lleno(36+x,34+y,38+x,36+y);


//* FILA 19

color_rgb(49,49, 49);
rectangulo_lleno(2+x,36+y,4+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(4+x,36+y,6+x,38+y);
color_rgb(255, 231, 33);
rectangulo_lleno(6+x,36+y,8+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(8+x,36+y,10+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,36+y,12+x,38+y);
color_rgb(49,49, 49);
rectangulo_lleno(12+x,36+y,14+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(14+x,36+y,16+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(16+x,36+y,18+x,38+y);
color_rgb(49,49, 49);
rectangulo_lleno(18+x,36+y,20+x,38+y);
color_rgb(49,49, 49);
rectangulo_lleno(20+x,36+y,22+x,38+y);
color_rgb(49,49, 49);
rectangulo_lleno(22+x,36+y,24+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(24+x,36+y,26+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(26+x,36+y,28+x,38+y);
color_rgb(49,49, 49);
rectangulo_lleno(28+x,36+y,30+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,36+y,32+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(32+x,36+y,34+x,38+y);
color_rgb(255, 231, 33);
rectangulo_lleno(34+x,36+y,36+x,38+y);
color_rgb(201, 0, 0);
rectangulo_lleno(36+x,36+y,38+x,38+y);
color_rgb(49,49, 49);
rectangulo_lleno(38+x,36+y,40+x,38+y);


//* FILA 20

color_rgb(49,49, 49);
rectangulo_lleno(2+x,38+y,4+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(4+x,38+y,6+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(6+x,38+y,8+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(8+x,38+y,10+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,38+y,12+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(12+x,38+y,14+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(14+x,38+y,16+x,40+y);
color_rgb(49,49, 49);
rectangulo_lleno(16+x,38+y,18+x,40+y);
color_rgb(49,49, 49);
rectangulo_lleno(18+x,38+y,20+x,40+y);
color_rgb(49,49, 49);
rectangulo_lleno(22+x,38+y,24+x,40+y);
color_rgb(49,49, 49);
rectangulo_lleno(24+x,38+y,26+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(26+x,38+y,28+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(28+x,38+y,30+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,38+y,32+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(32+x,38+y,34+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(34+x,38+y,36+x,40+y);
color_rgb(201, 0, 0);
rectangulo_lleno(36+x,38+y,38+x,40+y);
color_rgb(49,49, 49);
rectangulo_lleno(38+x,38+y,40+x,40+y);


//* FILA 21

color_rgb(49,49, 49);
rectangulo_lleno(4+x,40+y,6+x,42+y);
color_rgb(255, 116, 0);
rectangulo_lleno(6+x,40+y,8+x,42+y);
color_rgb(201, 0, 0);
rectangulo_lleno(8+x,40+y,10+x,42+y);
color_rgb(255, 231, 33);
rectangulo_lleno(10+x,40+y,12+x,42+y);
color_rgb(201, 0, 0);
rectangulo_lleno(12+x,40+y,14+x,42+y);
color_rgb(49,49, 49);
rectangulo_lleno(14+x,40+y,16+x,42+y);
color_rgb(49,49, 49);
rectangulo_lleno(26+x,40+y,28+x,42+y);
color_rgb(201, 0, 0);
rectangulo_lleno(28+x,40+y,30+x,42+y);
color_rgb(255, 231, 33);
rectangulo_lleno(30+x,40+y,32+x,42+y);
color_rgb(201, 0, 0);
rectangulo_lleno(32+x,40+y,34+x,42+y);
color_rgb(255, 116, 0);
rectangulo_lleno(34+x,40+y,36+x,42+y);
color_rgb(49,49, 49);
rectangulo_lleno(36+x,40+y,38+x,42+y);



//* FILA 22

color_rgb(49,49, 49);
rectangulo_lleno(6+x,42+y,8+x,44+y);
color_rgb(255, 116, 0);
rectangulo_lleno(8+x,42+y,10+x,44+y);
color_rgb(201, 0, 0);
rectangulo_lleno(10+x,42+y,12+x,44+y);
color_rgb(255, 116, 0);
rectangulo_lleno(12+x,42+y,14+x,44+y);
color_rgb(49,49, 49);
rectangulo_lleno(14+x,42+y,16+x,44+y);
color_rgb(49,49, 49);
rectangulo_lleno(26+x,42+y,28+x,44+y);
color_rgb(255, 116, 0);
rectangulo_lleno(28+x,42+y,30+x,44+y);
color_rgb(201, 0, 0);
rectangulo_lleno(30+x,42+y,32+x,44+y);
color_rgb(255, 116, 0);
rectangulo_lleno(32+x,42+y,34+x,44+y);
color_rgb(49,49, 49);
rectangulo_lleno(34+x,42+y,36+x,44+y);



//* FILA 23

color_rgb(49,49, 49);
rectangulo_lleno(8+x,44+y,10+x,46+y);
color_rgb(255, 116, 0);
rectangulo_lleno(10+x,44+y,12+x,46+y);
color_rgb(49,49, 49);
rectangulo_lleno(12+x,44+y,14+x,46+y);
color_rgb(49,49, 49);
rectangulo_lleno(28+x,44+y,30+x,46+y);
color_rgb(255, 116, 0);
rectangulo_lleno(30+x,44+y,32+x,46+y);
color_rgb(49,49, 49);
rectangulo_lleno(32+x,44+y,34+x,46+y);

//* FILA 24


color_rgb(49,49, 49);
rectangulo_lleno(10+x,46+y,12+x,48+y);
color_rgb(49,49, 49);
rectangulo_lleno(30+x,46+y,32+x,48+y);     

     
     //////////////
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
     ////
     ///
     
void PlayerHeart(int x, int y, int xx){
     
         color_rgb(200,20,20);
         rectangulo_lleno(x,y,xx+x,y+20);  
 
 
 
 
   }
   
////
////
std::string ShowScore (std::string text,int number){
         std::stringstream sstm;
         sstm << text << number;
         return sstm.str();    
     }

int main(){
    //Gamebox
    int WIDTH  = 640;
    int HEIGHT = 590;
    vredimensiona(WIDTH,HEIGHT);
    
    //Variables
    int PlayerX = 320, PlayerY = 400; 
    int PlayerBulletX=320, PlayerBulletY=400;
    
    int EnemyRow01X = 160, EnemyRow01Y = 50;
    int EnemyRow01BulletX=160, EnemyRow01BulletY=50;
    
    int EnemyRow02X = 480, EnemyRow02Y = 100;
    int EnemyRow02BulletX=480, EnemyRow02BulletY=100;
    
    int t = tecla();
    int RandomRow01,RollRow01;
    int RandomRow02,RollRow02;
    int RNGSpawn01, RNGSpawn02;
    
    bool PlayerAlive = true;
    bool EnemyRow01Alive = true;
    bool EnemyRow02Alive = true;
    
    int EnemyRow01Counter = 0;
    int EnemyRow02Counter = 0;
    int PlayerLifeCounter = 40;
    
    std::string ScoreText = "Puntos = ";
    std::string BestScoreText = "Mejor Puntaje = ";
    std::string GameOverText = "GAME OVER. Puntaje Final = ";
    std::string RestartText = "Presionar ARRIBA para reiniciar";
    
    int CurrentScoreNumber = 0;
    int BestScoreNumber = 0;

    
    int Row01BonusX = 0;
    int Row02BonusX = 0;
    int Row01BonusBulletY = 0;
    int Row02BonusBulletY = 0;
    int BonusDamage = 0;
    
    //Gameloop & Update Cycle
    while(t != ESCAPE){
        //Player Controls
        if (PlayerAlive){
            if(t == IZQUIERDA){
                if(PlayerX == 0){ }
                else {PlayerX = PlayerX-20, PlayerY = PlayerY+0;}
            } 
            else if(t == DERECHA){
                if(PlayerX == WIDTH-40){ }
                else PlayerX = PlayerX+20, PlayerY = PlayerY+0;
            }
            //Shooting
            if(PlayerBulletY<=0 && t==ESPACIO){
                 PlayerBulletX=PlayerX; PlayerBulletY=PlayerY-30;
                 }
            if(t==ESPACIO){
                 if(PlayerBulletY>=390 && PlayerBulletY<=400 ){
                    PlayerBulletX = PlayerX, PlayerBulletY= PlayerBulletY-10;
                    }  
              
              }
            if(t=ESPACIO){
                 if(PlayerBulletY<=391 && PlayerBulletY>=0){
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
        // Colision Detection 
           // Player Bullets to the Enemy on Row 1    
              if(EnemyRow01Alive){ 
                  if(PlayerBulletX>=EnemyRow01X-20 && PlayerBulletX<=EnemyRow01X+30){
                     if(PlayerBulletY>=50 && PlayerBulletY<=80){
                        EnemyRow01Alive = false;
                        EnemyRow01X = -20, EnemyRow01Y = -20;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                     }
                  }
              }
          // Player Bullets to the Enemy on Row 2        
             if(EnemyRow02Alive){ 
                 if(PlayerBulletX>=EnemyRow02X-20 && PlayerBulletX<=EnemyRow02X+30){
                     if(PlayerBulletY>=100 && PlayerBulletY<=130){
                        EnemyRow02Alive = false;
                        CurrentScoreNumber += 50;
                        PlayerLifeCounter += BonusDamage;
                        if (PlayerLifeCounter > 40){PlayerLifeCounter = 40;}
                     }
                  }
              }
          // Enemy on Row 1 Bullets to the Player
             if(PlayerAlive){  
                 if(EnemyRow01BulletX>=PlayerX-20 && EnemyRow01BulletX<=PlayerX+20){
                    if(EnemyRow01BulletY>=400 && EnemyRow01BulletY<=430){
                        PlayerLifeCounter -= 1+BonusDamage;
                        
                     }
                  }
              }
            
          // Enemy on Row 2 Bullets to the Player
              if(PlayerAlive){ 
                  if(EnemyRow02BulletX>=PlayerX-20 && EnemyRow02BulletX<=PlayerX+20){
                     if(EnemyRow02BulletY>=400 && EnemyRow02BulletY<=430){
                        PlayerLifeCounter -= 1 +BonusDamage;
                      }
                  }
              }
        
        //Delete & Create
        borra();
            //Check Player Alive & Paint if so
            if (PlayerLifeCounter <= 0){
                                  PlayerBullet(0, 0);
                                  PlayerAlive = false;}
            if (PlayerAlive){Player(PlayerX,PlayerY);}
            if (PlayerAlive){PlayerBullet(PlayerBulletX, PlayerBulletY);}
            
            //Paint Enemy Row 01
            if (EnemyRow01Alive){Enemy(EnemyRow01X, EnemyRow01Y);}
            if (EnemyRow01Alive){EnemyRow01Bullet(EnemyRow01BulletX,EnemyRow01BulletY);}
            
            //Paint Enemy Row 01
            if (EnemyRow02Alive){Enemy(EnemyRow02X, EnemyRow02Y);}
            if (EnemyRow02Alive){EnemyRow02Bullet(EnemyRow02BulletX,EnemyRow02BulletY);}
            
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
            //
            //UI
            
            
            
            
            
            
            
           // color_rgb(212, 39, 0);
          // rectangulo_lleno(0,499,700,701);
         
          
           /*  color_rgb(212, 39, 0);
             linea(0, 499, 700, 499);
             color_rgb(212, 39, 0);
             linea(0, 500, 700, 500);
             color_rgb(212, 39, 0);
             linea(0, 501, 700, 501);
             
                     
            color_rgb(255, 247, 90);
            rectangulo_lleno(0,502,700,703);*/
 
            Iu(0,510);
            
            
            //
            //
            color_rgb(20,20,20);
            rectangulo_lleno(30,540,230,563.20);
            texto(440, 532, ShowScore(ScoreText,CurrentScoreNumber));
            texto(440, 547, ShowScore(BestScoreText,BestScoreNumber));
            if (BestScoreNumber < CurrentScoreNumber) {BestScoreNumber = CurrentScoreNumber;}
            } 
            else {
            //Game Over Text 
            //////////
            //EXPLOSION
            color_rgb(255,0,0);
            rectangulo_lleno(0,230,640,314); 
            /////////
            color_rgb(250,250,250);
            if (BestScoreNumber < CurrentScoreNumber) {BestScoreNumber = CurrentScoreNumber;}
            texto(230, 240, ShowScore(GameOverText,CurrentScoreNumber));
            texto(230, 260, RestartText);
            texto(270, 280, ShowScore(BestScoreText,BestScoreNumber));
            }                                           
            //Paint Players Life
            if (PlayerLifeCounter > 0) {
                PlayerHeart(30,540,PlayerLifeCounter*5);
            }
            else if (PlayerLifeCounter <= 0) {  } 
            
            //Difficulty Increase based on Current Score
            if (CurrentScoreNumber < 300){

                Row01BonusX = 0;
                Row02BonusX = 0;
                Row01BonusBulletY = 0;
                Row02BonusBulletY = 0;  
                BonusDamage = 0;                    
            } else
            if (CurrentScoreNumber < 700){

                Row01BonusX = 2;
                Row02BonusX = 2;
                Row01BonusBulletY = 2;
                Row02BonusBulletY = 2; 
                BonusDamage = 0;                        
            } else 
            if (CurrentScoreNumber < 1200){

                Row01BonusX = 4;
                Row02BonusX = 4;
                Row01BonusBulletY = 4;
                Row02BonusBulletY = 4;
                BonusDamage = 1;
            } else {

                Row01BonusX = 6;
                Row02BonusX = 6;
                Row01BonusBulletY = 6;
                Row02BonusBulletY = 6; 
                BonusDamage = 2; 
            }
            
        refresca();
        espera(10);
        t= tecla();
        
    }
    return 0;
}

