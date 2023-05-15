#include <windows.h>
#include <stdio.h>
#include "miniwin.h"
#include <sstream>
using namespace miniwin;

void fondo()
{
    color_rgb(25,41,26); // verde 
rectangulo_lleno(0,0,10,10);
color_rgb(25,41,26); // verde 
rectangulo_lleno(10,0,20,10);
color_rgb(25,41,26); // verde 
rectangulo_lleno(20,0,30,10);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,0,40,10);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,0,50,10);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,0,60,10);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,0,70,10);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,0,80,10);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,0,90,10);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,0,100,10);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,0,110,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(110,0,120,10);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(120,0,130,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(130,0,140,10);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(140,0,150,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(150,0,160,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(160,0,170,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(170,0,180,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(180,0,190,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(190,0,200,10);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,0,210,10);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(210,0,220,10);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,0,230,10);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(230,0,240,10);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(240,0,250,10);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(250,0,260,10);
color_rgb(242, 247, 247); // celeste claro;
rectangulo_lleno(260,0,270,10);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(270,0,280,10);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(280,0,290,10);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(290,0,300,10);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(300,0,310,10);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(310,0,320,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(320,0,330,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(330,0,340,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(340,0,350,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(350,0,360,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(360,0,370,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(370,0,380,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(380,0,390,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(390,0,400,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(400,0,410,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(410,0,420,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(420,0,430,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(430,0,440,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(440,0,450,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(450,0,460,10);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(460,0,470,10);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(470,0,480,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(480,0,490,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(490,0,500,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(500,0,510,10);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,0,520,10);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(520,0,530,10);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,0,540,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(540,0,550,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(550,0,560,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(560,0,570,10);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(570,0,580,10);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(580,0,590,10);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(590,0,600,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(600,0,610,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(610,0,620,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(620,0,630,10);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(630,0,640,10);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(640,0,650,10);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(650,0,660,10);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,0,670,10);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(670,0,680,10);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(680,0,690,10);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(690,0,700,10);

/*
* FILA 2
*/
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(0,10,10,20);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,10,20,20);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,10,30,20);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,10,40,20);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,10,50,20);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,10,60,20);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,10,70,20);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,10,80,20);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,10,90,20);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,10,100,20);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,10,110,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(110,10,120,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(120,10,130,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(130,10,140,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(140,10,150,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(150,10,160,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(160,10,170,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(170,10,180,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(180,10,190,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(190,10,200,20);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,10,210,20);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(210,10,220,20);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,10,230,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(230,10,240,20);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(240,10,250,20);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(250,10,260,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(260,10,270,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(270,10,280,20);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(280,10,290,20);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(290,10,300,20);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(300,10,310,20);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(310,10,320,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(320,10,330,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(330,10,340,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(340,10,350,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(350,10,360,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(360,10,370,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(370,10,380,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(380,10,390,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(390,10,400,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(400,10,410,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(410,10,420,20);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(420,10,430,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(430,10,440,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(440,10,450,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(450,10,460,20);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(460,10,470,20);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(470,10,480,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(480,10,490,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(490,10,500,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(500,10,510,20);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,10,520,20);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(520,10,530,20);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,10,540,20);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(540,10,550,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(550,10,560,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(560,10,570,20);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(570,10,580,20);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(580,10,590,20);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(590,10,600,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(600,10,610,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(610,10,620,20);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(620,10,630,20);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(630,10,640,20);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(640,10,650,20);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(650,10,660,20);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,10,670,20);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(670,10,680,20);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(680,10,690,20);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,10,700,20);

/*
* FILA 3
*/
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(0,20,10,30);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,20,20,30);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,20,30,30);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,20,40,30);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,20,50,30);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,20,60,30);
color_rgb(25,41,26); // verde 
rectangulo_lleno(60,20,70,30);
color_rgb(25,41,26); // verde 
rectangulo_lleno(70,20,80,30);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,20,90,30);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,20,100,30);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,20,110,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(110,20,120,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(120,20,130,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(130,20,140,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(140,20,150,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(150,20,160,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(160,20,170,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(170,20,180,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(180,20,190,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(190,20,200,30);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,20,210,30);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(210,20,220,30);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,20,230,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(230,20,240,30);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(240,20,250,30);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(250,20,260,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(260,20,270,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(270,20,280,30);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(280,20,290,30);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(290,20,300,30);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(300,20,310,30);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(310,20,320,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(320,20,330,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(330,20,340,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(340,20,350,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(350,20,360,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(360,20,370,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(370,20,380,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(380,20,390,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(390,20,400,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(400,20,410,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(410,20,420,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(420,20,430,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(430,20,440,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(440,20,450,30);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(450,20,460,30);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(460,20,470,30);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(470,20,480,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(480,20,490,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(490,20,500,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(500,20,510,30);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,20,520,30);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(520,20,530,30);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,20,540,30);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(540,20,550,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(550,20,560,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(560,20,570,30);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(570,20,580,30);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(580,20,590,30);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(590,20,600,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(600,20,610,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(610,20,620,30);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(620,20,630,30);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(630,20,640,30);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(640,20,650,30);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(650,20,660,30);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(660,20,670,30);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(670,20,680,30);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(680,20,690,30);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,20,700,30);

/*
* FILA 4
*/
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(0,30,10,40);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,30,20,40);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,30,30,40);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,30,40,40);
color_rgb(25,41,26); // verde 
rectangulo_lleno(40,30,50,40);
color_rgb(25,41,26); // verde 
rectangulo_lleno(50,30,60,40);
color_rgb(25,41,26); // verde 
rectangulo_lleno(60,30,70,40);
color_rgb(25,41,26); // verde 
rectangulo_lleno(70,30,80,40);
color_rgb(25,41,26); // verde 
rectangulo_lleno(80,30,90,40);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,30,100,40);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,30,110,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(110,30,120,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(120,30,130,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(130,30,140,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(140,30,150,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(150,30,160,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(160,30,170,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(170,30,180,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(180,30,190,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(190,30,200,40);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,30,210,40);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(210,30,220,40);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,30,230,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(230,30,240,40);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(240,30,250,40);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(250,30,260,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(260,30,270,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(270,30,280,40);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(280,30,290,40);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(290,30,300,40);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(300,30,310,40);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(310,30,320,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(320,30,330,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(330,30,340,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(340,30,350,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(350,30,360,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(360,30,370,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(370,30,380,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(380,30,390,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(390,30,400,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(400,30,410,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(410,30,420,40);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(420,30,430,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(430,30,440,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(440,30,450,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(450,30,460,40);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(460,30,470,40);
color_rgb(32, 26, 20); // marron 
rectangulo_lleno(470,30,480,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(480,30,490,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(490,30,500,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(500,30,510,40);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,30,520,40);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(520,30,530,40);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,30,540,40);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(540,30,550,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(550,30,560,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(560,30,570,40);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(570,30,580,40);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(580,30,590,40);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(590,30,600,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(600,30,610,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(610,30,620,40);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(620,30,630,40);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(630,30,640,40);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(640,30,650,40);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(650,30,660,40);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(660,30,670,40);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(670,30,680,40);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(680,30,690,40);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,30,700,40);

/*
* FILA 5
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,40,10,50);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,40,20,50);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(20,40,30,50);
color_rgb(25,41,26); // verde 
rectangulo_lleno(30,40,40,50);
color_rgb(25,41,26); // verde 
rectangulo_lleno(40,40,50,50);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,40,60,50);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,40,70,50);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,40,80,50);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,40,90,50);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,40,100,50);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,40,110,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(110,40,120,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(120,40,130,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(130,40,140,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(140,40,150,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(150,40,160,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(160,40,170,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(170,40,180,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(180,40,190,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(190,40,200,50);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,40,210,50);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(210,40,220,50);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,40,230,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(230,40,240,50);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(240,40,250,50);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(250,40,260,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(260,40,270,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(270,40,280,50);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(280,40,290,50);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(290,40,300,50);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(300,40,310,50);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(310,40,320,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(320,40,330,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(330,40,340,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(340,40,350,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(350,40,360,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(360,40,370,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(370,40,380,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(380,40,390,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(390,40,400,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(400,40,410,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(410,40,420,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(420,40,430,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(430,40,440,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(440,40,450,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(450,40,460,50);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(460,40,470,50);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(470,40,480,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(480,40,490,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(490,40,500,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(500,40,510,50);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,40,520,50);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(520,40,530,50);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,40,540,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(540,40,550,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(550,40,560,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(560,40,570,50);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(570,40,580,50);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(580,40,590,50);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(590,40,600,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(600,40,610,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(610,40,620,50);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(620,40,630,50);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(630,40,640,50);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(640,40,650,50);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(650,40,660,50);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(660,40,670,50);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(670,40,680,50);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(680,40,690,50);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,40,700,50);

/*
* FILA 6
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,50,10,60);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,50,20,60);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,50,30,60);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,50,40,60);
color_rgb(25,41,26); // verde 
rectangulo_lleno(40,50,50,60);
color_rgb(25,41,26); // verde 
rectangulo_lleno(50,50,60,60);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,50,70,60);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,50,80,60);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,50,90,60);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,50,100,60);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,50,110,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(110,50,120,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(120,50,130,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(130,50,140,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(140,50,150,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(150,50,160,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(160,50,170,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(170,50,180,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(180,50,190,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(190,50,200,60);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,50,210,60);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(210,50,220,60);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,50,230,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(230,50,240,60);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(240,50,250,60);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(250,50,260,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(260,50,270,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(270,50,280,60);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(280,50,290,60);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(290,50,300,60);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(300,50,310,60);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(310,50,320,60);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(320,50,330,60);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(330,50,340,60);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(340,50,350,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(350,50,360,60);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(360,50,370,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(370,50,380,60);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(380,50,390,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(390,50,400,60);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(400,50,410,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(410,50,420,60);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(420,50,430,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(430,50,440,60);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(440,50,450,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(450,50,460,60);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(460,50,470,60);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(470,50,480,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(480,50,490,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(490,50,500,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(500,50,510,60);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,50,520,60);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(520,50,530,60);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,50,540,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(540,50,550,60);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(550,50,560,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(560,50,570,60);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(570,50,580,60);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(580,50,590,60);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(590,50,600,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(600,50,610,60);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(610,50,620,60);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(620,50,630,60);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(630,50,640,60);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(640,50,650,60);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(650,50,660,60);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(660,50,670,60);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(670,50,680,60);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(680,50,690,60);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,50,700,60);

/*
* FILA 7
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,60,10,70);
color_rgb(25,41,26); // verde 
rectangulo_lleno(10,60,20,70);
color_rgb(25,41,26); // verde 
rectangulo_lleno(20,60,30,70);
color_rgb(25,41,26); // verde 
rectangulo_lleno(30,60,40,70);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,60,50,70);
color_rgb(25,41,26); // verde 
rectangulo_lleno(50,60,60,70);
color_rgb(25,41,26); // verde 
rectangulo_lleno(60,60,70,70);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,60,80,70);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,60,90,70);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,60,100,70);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,60,110,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(110,60,120,70);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(120,60,130,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(130,60,140,70);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(140,60,150,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(150,60,160,70);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(160,60,170,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(170,60,180,70);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(180,60,190,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(190,60,200,70);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,60,210,70);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(210,60,220,70);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,60,230,70);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(230,60,240,70);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(240,60,250,70);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(250,60,260,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,60,270,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,60,280,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(280,60,290,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,60,300,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,60,310,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,60,320,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(320,60,330,70);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(330,60,340,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(340,60,350,70);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(350,60,360,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(360,60,370,70);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(370,60,380,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(380,60,390,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(390,60,400,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(400,60,410,70);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(410,60,420,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(420,60,430,70);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(430,60,440,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(440,60,450,70);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(450,60,460,70);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(460,60,470,70);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(470,60,480,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(480,60,490,70);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(490,60,500,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(500,60,510,70);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,60,520,70);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(520,60,530,70);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,60,540,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(540,60,550,70);
color_rgb(149, 191, 199); // celeste
rectangulo_lleno(550,60,560,70);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(560,60,570,70);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(570,60,580,70);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(580,60,590,70);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(590,60,600,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(600,60,610,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(610,60,620,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(620,60,630,70);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(630,60,640,70);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(640,60,650,70);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(650,60,660,70);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(660,60,670,70);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(670,60,680,70);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(680,60,690,70);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,60,700,70);

/*
* FILA 8
*/
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(0,70,10,80);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,70,20,80);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,70,30,80);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,70,40,80);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,70,50,80);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,70,60,80);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,70,70,80);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,70,80,80);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,70,90,80);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,70,100,80);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,70,110,80);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,70,120,80);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,70,130,80);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,70,140,80);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(140,70,150,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(150,70,160,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(160,70,170,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(170,70,180,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(180,70,190,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(190,70,200,80);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,70,210,80);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(210,70,220,80);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(220,70,230,80);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(230,70,240,80);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,70,250,80);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,70,260,80);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,70,270,80);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,70,280,80);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,70,290,80);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(290,70,300,80);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(300,70,310,80);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(310,70,320,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(320,70,330,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(330,70,340,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(340,70,350,80);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(350,70,360,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(360,70,370,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(370,70,380,80);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(380,70,390,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(390,70,400,80);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(400,70,410,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(410,70,420,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(420,70,430,80);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(430,70,440,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(440,70,450,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(450,70,460,80);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(460,70,470,80);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(470,70,480,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(480,70,490,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(490,70,500,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(500,70,510,80);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,70,520,80);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(520,70,530,80);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,70,540,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(540,70,550,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(550,70,560,80);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(560,70,570,80);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(570,70,580,80);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(580,70,590,80);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(590,70,600,80);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(600,70,610,80);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(610,70,620,80);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(620,70,630,80);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(630,70,640,80);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(640,70,650,80);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(650,70,660,80);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(660,70,670,80);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(670,70,680,80);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(680,70,690,80);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,70,700,80);

/*
* FILA 9
*/
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(0,80,10,90);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,80,20,90);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,80,30,90);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,80,40,90);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,80,50,90);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,80,60,90);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,80,70,90);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,80,80,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,80,90,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,80,100,90);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,80,110,90);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(110,80,120,90);
color_rgb(25,41,26); // verde
rectangulo_lleno(120,80,130,90);
color_rgb(25,41,26); // verde
rectangulo_lleno(130,80,140,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(140,80,150,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(150,80,160,90);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(160,80,170,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(170,80,180,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(180,80,190,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(190,80,200,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(200,80,210,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(210,80,220,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,80,230,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,80,240,90);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(240,80,250,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,80,260,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,80,270,90);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,80,280,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(280,80,290,90);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(290,80,300,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,80,310,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,80,320,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(320,80,330,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(330,80,340,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(340,80,350,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(350,80,360,90);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(360,80,370,90);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(370,80,380,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(380,80,390,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(390,80,400,90);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(400,80,410,90);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(410,80,420,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(420,80,430,90);
color_rgb(218, 232, 234); // celeste oscuro
rectangulo_lleno(430,80,440,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(440,80,450,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(450,80,460,90);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(460,80,470,90);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(470,80,480,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(480,80,490,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(490,80,500,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(500,80,510,90);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,80,520,90);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(520,80,530,90);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,80,540,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(540,80,550,90);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(550,80,560,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,80,570,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(570,80,580,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(580,80,590,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(590,80,600,90);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(600,80,610,90);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(610,80,620,90);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(620,80,630,90);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(630,80,640,90);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(640,80,650,90);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(650,80,660,90);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(660,80,670,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(670,80,680,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,80,690,90);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,80,700,90);

/*
* FILA 10
*/
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(0,90,10,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,90,20,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,90,30,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,90,40,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,90,50,100);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,90,60,100);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,90,70,100);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,90,80,100);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,90,90,100);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,90,100,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,90,110,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(110,90,120,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(120,90,130,100);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,90,140,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(140,90,150,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(150,90,160,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(160,90,170,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(170,90,180,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(180,90,190,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(190,90,200,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,90,210,100);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(210,90,220,100);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(220,90,230,100);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(230,90,240,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(240,90,250,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(250,90,260,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(260,90,270,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(270,90,280,100);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,90,290,100);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(290,90,300,100);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(300,90,310,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,90,320,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(320,90,330,100);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,90,340,100);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,90,350,100);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,90,360,100);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,90,370,100);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,90,380,100);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,90,390,100);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,90,400,100);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,90,410,100);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,90,420,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(420,90,430,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(430,90,440,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(440,90,450,100);
color_rgb(25,41,26); // verde
rectangulo_lleno(450,90,460,100);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(460,90,470,100);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(470,90,480,100);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(480,90,490,100);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(490,90,500,100);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,90,510,100);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(510,90,520,100);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(520,90,530,100);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(530,90,540,100);
color_rgb(242, 247, 247); // celeste claro
rectangulo_lleno(540,90,550,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(550,90,560,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,90,570,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(570,90,580,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(580,90,590,100);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(590,90,600,100);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(600,90,610,100);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(610,90,620,100);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(620,90,630,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(630,90,640,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(640,90,650,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(650,90,660,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(660,90,670,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(670,90,680,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(680,90,690,100);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,90,700,100);

/*
* FILA 11
*/
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(0,100,10,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,100,20,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,100,30,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,100,40,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,100,50,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,100,60,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,100,70,110);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,100,80,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,100,90,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,100,100,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,100,110,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(110,100,120,110);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,100,130,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(130,100,140,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(140,100,150,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(150,100,160,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(160,100,170,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(170,100,180,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(180,100,190,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(190,100,200,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,100,210,110);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(210,100,220,110);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(220,100,230,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(230,100,240,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(240,100,250,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(250,100,260,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(260,100,270,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(270,100,280,110);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,100,290,110);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(290,100,300,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,100,310,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,100,320,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(320,100,330,110);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,100,340,110);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,100,350,110);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,100,360,110);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(360,100,370,110);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,100,380,110);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(380,100,390,110);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,100,400,110);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,100,410,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(410,100,420,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(420,100,430,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(430,100,440,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(440,100,450,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(450,100,460,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(460,100,470,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(470,100,480,110);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,100,490,110);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(490,100,500,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,100,510,110);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,100,520,110);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,100,530,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(530,100,540,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(540,100,550,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(550,100,560,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,100,570,110);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(570,100,580,110);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(580,100,590,110);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(590,100,600,110);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(600,100,610,110);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(610,100,620,110);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(620,100,630,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(630,100,640,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(640,100,650,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(650,100,660,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(660,100,670,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(670,100,680,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(680,100,690,110);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,100,700,110);

/*
* FILA 12
*/
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(0,110,10,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,110,20,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,110,30,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,110,40,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,110,50,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,110,60,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,110,70,120);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,110,80,120);
color_rgb(25,41,26); // verde
rectangulo_lleno(80,110,90,120);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,110,100,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,110,110,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(110,110,120,120);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,110,130,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(130,110,140,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(140,110,150,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(150,110,160,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(160,110,170,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(170,110,180,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,110,190,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,110,200,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(200,110,210,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(210,110,220,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(220,110,230,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(230,110,240,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(240,110,250,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(250,110,260,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(260,110,270,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,110,280,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,110,290,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(290,110,300,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,110,310,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,110,320,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(320,110,330,120);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,110,340,120);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(340,110,350,120);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(350,110,360,120);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(360,110,370,120);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,110,380,120);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,110,390,120);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,110,400,120);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(400,110,410,120);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(410,110,420,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(420,110,430,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(430,110,440,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(440,110,450,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(450,110,460,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(460,110,470,120);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(470,110,480,120);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,110,490,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(490,110,500,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,110,510,120);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,110,520,120);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,110,530,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(530,110,540,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(540,110,550,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(550,110,560,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,110,570,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(570,110,580,120);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(580,110,590,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(590,110,600,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(600,110,610,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(610,110,620,120);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(620,110,630,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(630,110,640,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(640,110,650,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(650,110,660,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(660,110,670,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(670,110,680,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(680,110,690,120);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,110,700,120);

/*
* FILA 13
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,120,10,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,120,20,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,120,30,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,120,40,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,120,50,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,120,60,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,120,70,130);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,120,80,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,120,90,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,120,100,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,120,110,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,120,120,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(120,120,130,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(130,120,140,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(140,120,150,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(150,120,160,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(160,120,170,130);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,120,180,130);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,120,190,130);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,120,200,130);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(200,120,210,130);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(210,120,220,130);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(220,120,230,130);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(230,120,240,130);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(240,120,250,130);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(250,120,260,130);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(260,120,270,130);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,120,280,130);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,120,290,130);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(290,120,300,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,120,310,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,120,320,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(320,120,330,130);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,120,340,130);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(340,120,350,130);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(350,120,360,130);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(360,120,370,130);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(370,120,380,130);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,120,390,130);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,120,400,130);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,120,410,130);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,120,420,130);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,120,430,130);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(430,120,440,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(440,120,450,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(450,120,460,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(460,120,470,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(470,120,480,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,120,490,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(490,120,500,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,120,510,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,120,520,130);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,120,530,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(530,120,540,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(540,120,550,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(550,120,560,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,120,570,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(570,120,580,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(580,120,590,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(590,120,600,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(600,120,610,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(610,120,620,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(620,120,630,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(630,120,640,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(640,120,650,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(650,120,660,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(660,120,670,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(670,120,680,130);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(680,120,690,130);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,120,700,130);

/*
* FILA 14
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,130,10,140);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,130,20,140);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(20,130,30,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,130,40,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,130,50,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,130,60,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,130,70,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,130,80,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,130,90,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,130,100,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(100,130,110,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(110,130,120,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(120,130,130,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(130,130,140,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(140,130,150,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(150,130,160,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(160,130,170,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(170,130,180,140);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,130,190,140);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,130,200,140);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(200,130,210,140);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(210,130,220,140);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(220,130,230,140);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(230,130,240,140);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(240,130,250,140);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(250,130,260,140);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(260,130,270,140);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,130,280,140);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,130,290,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,130,300,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,130,310,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,130,320,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(320,130,330,140);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,130,340,140);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,130,350,140);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(350,130,360,140);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(360,130,370,140);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,130,380,140);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,130,390,140);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,130,400,140);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,130,410,140);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(410,130,420,140);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,130,430,140);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,130,440,140);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,130,450,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(450,130,460,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(460,130,470,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(470,130,480,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,130,490,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(490,130,500,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,130,510,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,130,520,140);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,130,530,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(530,130,540,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(540,130,550,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(550,130,560,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,130,570,140);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(570,130,580,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(580,130,590,140);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,130,600,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(600,130,610,140);
color_rgb(25,41,26); // verde
rectangulo_lleno(610,130,620,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(620,130,630,140);
color_rgb(25,41,26); // verde
rectangulo_lleno(630,130,640,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(640,130,650,140);
color_rgb(25,41,26); // verde
rectangulo_lleno(650,130,660,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,130,670,140);
color_rgb(25,41,26); // verde
rectangulo_lleno(670,130,680,140);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,130,690,140);
color_rgb(25,41,26); // verde
rectangulo_lleno(690,130,700,140);

/*
* FILA 15
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,140,10,150);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,140,20,150);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(20,140,30,150);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(30,140,40,150);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(40,140,50,150);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,140,60,150);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,140,70,150);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,140,80,150);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,140,90,150);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,140,100,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(100,140,110,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(110,140,120,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(120,140,130,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(130,140,140,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(140,140,150,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(150,140,160,150);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,140,170,150);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,140,180,150);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,140,190,150);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(190,140,200,150);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,140,210,150);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(210,140,220,150);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,140,230,150);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(230,140,240,150);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(240,140,250,150);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(250,140,260,150);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(260,140,270,150);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,140,280,150);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,140,290,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,140,300,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,140,310,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,140,320,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(320,140,330,150);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,140,340,150);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,140,350,150);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,140,360,150);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,140,370,150);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,140,380,150);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,140,390,150);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,140,400,150);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,140,410,150);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(410,140,420,150);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(420,140,430,150);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,140,440,150);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,140,450,150);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(450,140,460,150);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(460,140,470,150);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(470,140,480,150);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,140,490,150);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(490,140,500,150);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,140,510,150);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,140,520,150);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,140,530,150);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(530,140,540,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(540,140,550,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(550,140,560,150);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,140,570,150);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(570,140,580,150);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,140,590,150);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,140,600,150);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,140,610,150);
color_rgb(25,41,26); // verde
rectangulo_lleno(610,140,620,150);
color_rgb(25,41,26); // verde
rectangulo_lleno(620,140,630,150);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,140,640,150);
color_rgb(25,41,26); // verde
rectangulo_lleno(640,140,650,150);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,140,660,150);
color_rgb(25,41,26); // verde
rectangulo_lleno(660,140,670,150);
color_rgb(25,41,26); // verde
rectangulo_lleno(670,140,680,150);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,140,690,150);
color_rgb(25,41,26); // verde
rectangulo_lleno(690,140,700,150);

/*
* FILA 16
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,150,10,160);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,150,20,160);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(20,150,30,160);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(30,150,40,160);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(40,150,50,160);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,150,60,160);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,150,70,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(70,150,80,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(80,150,90,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(90,150,100,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(100,150,110,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(110,150,120,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(120,150,130,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(130,150,140,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(140,150,150,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,150,160,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,150,170,160);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(170,150,180,160);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(180,150,190,160);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(190,150,200,160);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(200,150,210,160);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(210,150,220,160);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(220,150,230,160);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(230,150,240,160);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(240,150,250,160);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(250,150,260,160);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(260,150,270,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,150,280,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,150,290,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,150,300,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,150,310,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,150,320,160);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(320,150,330,160);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,150,340,160);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,150,350,160);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(350,150,360,160);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,150,370,160);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,150,380,160);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,150,390,160);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,150,400,160);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,150,410,160);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,150,420,160);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,150,430,160);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(430,150,440,160);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,150,450,160);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,150,460,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(460,150,470,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(470,150,480,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(480,150,490,160);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,150,500,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(500,150,510,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(510,150,520,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,150,530,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,150,540,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(540,150,550,160);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(550,150,560,160);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(560,150,570,160);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,150,580,160);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(580,150,590,160);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,150,600,160);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,150,610,160);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,150,620,160);
color_rgb(25,41,26); // verde
rectangulo_lleno(620,150,630,160);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,150,640,160);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,150,650,160);
color_rgb(25,41,26); // verde
rectangulo_lleno(650,150,660,160);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,150,670,160);
color_rgb(25,41,26); // verde
rectangulo_lleno(670,150,680,160);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,150,690,160);
color_rgb(25,41,26); // verde
rectangulo_lleno(690,150,700,160);

/*
* FILA 17
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,160,10,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,160,20,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(20,160,30,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(30,160,40,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(40,160,50,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,160,60,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,160,70,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,160,80,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,160,90,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,160,100,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,160,110,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,160,120,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,160,130,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,160,140,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(140,160,150,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(150,160,160,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(160,160,170,170);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(170,160,180,170);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(180,160,190,170);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(190,160,200,170);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(200,160,210,170);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(210,160,220,170);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,160,230,170);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(230,160,240,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(240,160,250,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(250,160,260,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(260,160,270,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(270,160,280,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(280,160,290,170);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,160,300,170);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,160,310,170);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,160,320,170);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,160,330,170);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,160,340,170);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,160,350,170);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,160,360,170);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,160,370,170);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,160,380,170);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(380,160,390,170);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,160,400,170);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,160,410,170);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(410,160,420,170);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(420,160,430,170);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(430,160,440,170);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(440,160,450,170);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,160,460,170);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(460,160,470,170);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(470,160,480,170);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(480,160,490,170);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,160,500,170);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,160,510,170);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(510,160,520,170);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,160,530,170);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,160,540,170);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(540,160,550,170);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,160,560,170);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,160,570,170);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,160,580,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(580,160,590,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,160,600,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,160,610,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,160,620,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,160,630,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,160,640,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,160,650,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,160,660,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,160,670,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,160,680,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,160,690,170);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(690,160,700,170);

/*
* FILA 18
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,170,10,180);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,170,20,180);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(20,170,30,180);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(30,170,40,180);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,170,50,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,170,60,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,170,70,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,170,80,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,170,90,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,170,100,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(100,170,110,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(110,170,120,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(120,170,130,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(130,170,140,180);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(140,170,150,180);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(150,170,160,180);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(160,170,170,180);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(170,170,180,180);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(180,170,190,180);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(190,170,200,180);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(200,170,210,180);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(210,170,220,180);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,170,230,180);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(230,170,240,180);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(240,170,250,180);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(250,170,260,180);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(260,170,270,180);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,170,280,180);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,170,290,180);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(290,170,300,180);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,170,310,180);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(310,170,320,180);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(320,170,330,180);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(330,170,340,180);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,170,350,180);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,170,360,180);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,170,370,180);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,170,380,180);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(380,170,390,180);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,170,400,180);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(400,170,410,180);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,170,420,180);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(420,170,430,180);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(430,170,440,180);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,170,450,180);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,170,460,180);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(460,170,470,180);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(470,170,480,180);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(480,170,490,180);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,170,500,180);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(500,170,510,180);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(510,170,520,180);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(520,170,530,180);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(530,170,540,180);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(540,170,550,180);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,170,560,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,170,570,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,170,580,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,170,590,180);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,170,600,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,170,610,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,170,620,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,170,630,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,170,640,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,170,650,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,170,660,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,170,670,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,170,680,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,170,690,180);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(690,170,700,180);

/*
* FILA 19
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,180,10,190);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,180,20,190);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(20,180,30,190);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,180,40,190);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,180,50,190);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,180,60,190);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,180,70,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,180,80,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,180,90,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,180,100,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,180,110,190);
color_rgb(25,41,26); // verde
rectangulo_lleno(110,180,120,190);
color_rgb(25,41,26); // verde
rectangulo_lleno(120,180,130,190);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,180,140,190);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(140,180,150,190);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(150,180,160,190);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(160,180,170,190);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(170,180,180,190);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(180,180,190,190);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(190,180,200,190);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(200,180,210,190);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(210,180,220,190);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(220,180,230,190);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(230,180,240,190);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(240,180,250,190);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(250,180,260,190);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(260,180,270,190);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,180,280,190);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(280,180,290,190);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,180,300,190);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,180,310,190);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(310,180,320,190);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,180,330,190);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,180,340,190);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,180,350,190);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(350,180,360,190);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(360,180,370,190);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,180,380,190);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(380,180,390,190);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,180,400,190);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,180,410,190);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(410,180,420,190);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(420,180,430,190);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(430,180,440,190);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,180,450,190);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(450,180,460,190);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(460,180,470,190);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(470,180,480,190);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(480,180,490,190);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,180,500,190);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,180,510,190);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(510,180,520,190);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,180,530,190);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,180,540,190);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(540,180,550,190);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,180,560,190);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,180,570,190);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,180,580,190);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,180,590,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,180,600,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,180,610,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,180,620,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,180,630,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,180,640,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,180,650,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,180,660,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,180,670,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,180,680,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,180,690,190);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(690,180,700,190);

/*
* FILA 20
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,190,10,200);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,190,20,200);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(20,190,30,200);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,190,40,200);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,190,50,200);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,190,60,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,190,70,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,190,80,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,190,90,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,190,100,200);
color_rgb(25,41,26); // verde
rectangulo_lleno(100,190,110,200);
color_rgb(25,41,26); // verde
rectangulo_lleno(110,190,120,200);
color_rgb(25,41,26); // verde
rectangulo_lleno(120,190,130,200);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,190,140,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(140,190,150,200);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(150,190,160,200);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(160,190,170,200);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(170,190,180,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,190,190,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,190,200,200);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(200,190,210,200);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(210,190,220,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(220,190,230,200);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(230,190,240,200);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(240,190,250,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(250,190,260,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(260,190,270,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,190,280,200);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(280,190,290,200);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,190,300,200);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,190,310,200);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(310,190,320,200);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,190,330,200);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,190,340,200);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,190,350,200);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,190,360,200);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,190,370,200);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,190,380,200);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,190,390,200);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,190,400,200);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,190,410,200);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(410,190,420,200);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,190,430,200);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,190,440,200);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(440,190,450,200);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(450,190,460,200);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(460,190,470,200);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(470,190,480,200);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(480,190,490,200);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,190,500,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(500,190,510,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(510,190,520,200);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,190,530,200);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(530,190,540,200);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(540,190,550,200);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(550,190,560,200);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(560,190,570,200);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,190,580,200);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,190,590,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,190,600,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,190,610,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,190,620,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,190,630,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,190,640,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,190,650,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,190,660,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,190,670,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,190,680,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,190,690,200);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(690,190,700,200);

/*
* FILA 21
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,200,10,210);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,200,20,210);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,200,30,210);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,200,40,210);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,200,50,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,200,60,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,200,70,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,200,80,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,200,90,210);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,200,100,210);
color_rgb(25,41,26); // verde
rectangulo_lleno(100,200,110,210);
color_rgb(25,41,26); // verde
rectangulo_lleno(110,200,120,210);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,200,130,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(130,200,140,210);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(140,200,150,210);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(150,200,160,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,200,170,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,200,180,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,200,190,210);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(190,200,200,210);
color_rgb(32, 26, 20); // marron
rectangulo_lleno(200,200,210,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(210,200,220,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(220,200,230,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(230,200,240,210);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(240,200,250,210);
color_rgb(39, 32, 25); // marron claro
rectangulo_lleno(250,200,260,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(260,200,270,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(270,200,280,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(280,200,290,210);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,200,300,210);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,200,310,210);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(310,200,320,210);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(320,200,330,210);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,200,340,210);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(340,200,350,210);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(350,200,360,210);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,200,370,210);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,200,380,210);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(380,200,390,210);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,200,400,210);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(400,200,410,210);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,200,420,210);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,200,430,210);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(430,200,440,210);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,200,450,210);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,200,460,210);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(460,200,470,210);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(470,200,480,210);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(480,200,490,210);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,200,500,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(500,200,510,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(510,200,520,210);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,200,530,210);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(530,200,540,210);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(540,200,550,210);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,200,560,210);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,200,570,210);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,200,580,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(580,200,590,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,200,600,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,200,610,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,200,620,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,200,630,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,200,640,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,200,650,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,200,660,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,200,670,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,200,680,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,200,690,210);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(690,200,700,210);

/*
* FILA 22
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,210,10,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,210,20,220);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,210,30,220);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,210,40,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,210,50,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,210,60,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,210,70,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,210,80,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,210,90,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,210,100,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,210,110,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,210,120,220);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(120,210,130,220);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(130,210,140,220);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(140,210,150,220);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(150,210,160,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,210,170,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,210,180,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,210,190,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,210,200,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(200,210,210,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(210,210,220,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(220,210,230,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(230,210,240,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(240,210,250,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(250,210,260,220);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,210,270,220);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,210,280,220);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(280,210,290,220);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,210,300,220);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,210,310,220);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(310,210,320,220);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(320,210,330,220);

rectangulo_lleno(330,210,340,220);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(340,210,350,220);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(350,210,360,220);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,210,370,220);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(370,210,380,220);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,210,390,220);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(390,210,400,220);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(400,210,410,220);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(410,210,420,220);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,210,430,220);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(430,210,440,220);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,210,450,220);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,210,460,220);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(460,210,470,220);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(470,210,480,220);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(480,210,490,220);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,210,500,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(500,210,510,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(510,210,520,220);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,210,530,220);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(530,210,540,220);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(540,210,550,220);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,210,560,220);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,210,570,220);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,210,580,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(580,210,590,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,210,600,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,210,610,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,210,620,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,210,630,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,210,640,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,210,650,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,210,660,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,210,670,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,210,680,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,210,690,220);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(690,210,700,220);

/*
* FILA 23
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,220,10,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,220,20,230);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,220,30,230);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,220,40,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,220,50,230);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(50,220,60,230);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(60,220,70,230);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(70,220,80,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(80,220,90,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(90,220,100,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(100,220,110,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(110,220,120,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(120,220,130,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(130,220,140,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(140,220,150,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,220,160,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,220,170,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,220,180,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(180,220,190,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(190,220,200,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,220,210,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,220,220,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,220,230,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,220,240,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,220,250,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,220,260,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,220,270,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,220,280,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(280,220,290,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(290,220,300,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(300,220,310,230);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(310,220,320,230);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,220,330,230);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(330,220,340,230);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(340,220,350,230);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(350,220,360,230);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,220,370,230);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,220,380,230);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,220,390,230);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,220,400,230);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,220,410,230);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,220,420,230);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,220,430,230);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(430,220,440,230);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(440,220,450,230);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,220,460,230);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(460,220,470,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(470,220,480,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(480,220,490,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,220,500,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(500,220,510,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(510,220,520,230);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,220,530,230);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(530,220,540,230);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(540,220,550,230);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(550,220,560,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(560,220,570,230);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,220,580,230);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,220,590,230);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,220,600,230);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,220,610,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(610,220,620,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(620,220,630,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(630,220,640,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(640,220,650,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(650,220,660,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,220,670,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(670,220,680,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,220,690,230);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,220,700,230);

/*
* FILA 24
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,230,10,240);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,230,20,240);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,230,30,240);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,230,40,240);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,230,50,240);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,230,60,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(60,230,70,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(70,230,80,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(80,230,90,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(90,230,100,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(100,230,110,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(110,230,120,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(120,230,130,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(130,230,140,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(140,230,150,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,230,160,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,230,170,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(170,230,180,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(180,230,190,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(190,230,200,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,230,210,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,230,220,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,230,230,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,230,240,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,230,250,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,230,260,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,230,270,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,230,280,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(280,230,290,240);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(290,230,300,240);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(300,230,310,240);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(310,230,320,240);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,230,330,240);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,230,340,240);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,230,350,240);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,230,360,240);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,230,370,240);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(370,230,380,240);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,230,390,240);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,230,400,240);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(400,230,410,240);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(410,230,420,240);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(420,230,430,240);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,230,440,240);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,230,450,240);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(450,230,460,240);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(460,230,470,240);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(470,230,480,240);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(480,230,490,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,230,500,240);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,230,510,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(510,230,520,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,230,530,240);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,230,540,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(540,230,550,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(550,230,560,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(560,230,570,240);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(570,230,580,240);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,230,590,240);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,230,600,240);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(600,230,610,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(610,230,620,240);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(620,230,630,240);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(630,230,640,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(640,230,650,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(650,230,660,240);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(660,230,670,240);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(670,230,680,240);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(680,230,690,240);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(690,230,700,240);

/*
* FILA 25
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,240,10,250);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,240,20,250);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,240,30,250);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,240,40,250);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,240,50,250);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,240,60,250);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,240,70,250);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,240,80,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(80,240,90,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(90,240,100,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(100,240,110,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(110,240,120,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(120,240,130,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(130,240,140,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(140,240,150,250);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,240,160,250);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,240,170,250);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,240,180,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(180,240,190,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(190,240,200,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,240,210,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,240,220,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,240,230,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,240,240,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,240,250,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,240,260,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,240,270,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,240,280,250);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(280,240,290,250);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(290,240,300,250);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(300,240,310,250);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,240,320,250);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(320,240,330,250);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(330,240,340,250);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,240,350,250);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,240,360,250);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,240,370,250);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,240,380,250);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(380,240,390,250);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,240,400,250);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(400,240,410,250);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,240,420,250);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,240,430,250);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,240,440,250);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(440,240,450,250);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(450,240,460,250);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(460,240,470,250);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(470,240,480,250);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(480,240,490,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,240,500,250);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,240,510,250);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(510,240,520,250);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,240,530,250);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,240,540,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(540,240,550,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(550,240,560,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(560,240,570,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(570,240,580,250);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(580,240,590,250);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(590,240,600,250);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(600,240,610,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(610,240,620,250);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(620,240,630,250);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(630,240,640,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(640,240,650,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(650,240,660,250);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(660,240,670,250);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(670,240,680,250);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(680,240,690,250);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(690,240,700,250);

/*
* FILA 26
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,250,10,260);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,250,20,260);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,250,30,260);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,250,40,260);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,250,50,260);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,250,60,260);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,250,70,260);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,250,80,260);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,250,90,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(90,250,100,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(100,250,110,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(110,250,120,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(120,250,130,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(130,250,140,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(140,250,150,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(150,250,160,260);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,250,170,260);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,250,180,260);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,250,190,260);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,250,200,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,250,210,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,250,220,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,250,230,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,250,240,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,250,250,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,250,260,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,250,270,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,250,280,260);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(280,250,290,260);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(290,250,300,260);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(300,250,310,260);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,250,320,260);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,250,330,260);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,250,340,260);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,250,350,260);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,250,360,260);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,250,370,260);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,250,380,260);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(380,250,390,260);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,250,400,260);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,250,410,260);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,250,420,260);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,250,430,260);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(430,250,440,260);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,250,450,260);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(450,250,460,260);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(460,250,470,260);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(470,250,480,260);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(480,250,490,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,250,500,260);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,250,510,260);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(510,250,520,260);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(520,250,530,260);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,250,540,260);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(540,250,550,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(550,250,560,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(560,250,570,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(570,250,580,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(580,250,590,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(590,250,600,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(600,250,610,260);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(610,250,620,260);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(620,250,630,260);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(630,250,640,260);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(640,250,650,260);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(650,250,660,260);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(660,250,670,260);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(670,250,680,260);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(680,250,690,260);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(690,250,700,260);

/*
* FILA 27
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,260,10,270);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,260,20,270);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,260,30,270);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,260,40,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(40,260,50,270);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,260,60,270);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,260,70,270);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,260,80,270);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,260,90,270);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,260,100,270);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,260,110,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(110,260,120,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(120,260,130,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(130,260,140,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(140,260,150,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(150,260,160,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,260,170,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,260,180,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,260,190,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,260,200,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(200,260,210,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,260,220,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,260,230,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,260,240,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,260,250,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,260,260,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,260,270,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,260,280,270);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(280,260,290,270);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(290,260,300,270);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(300,260,310,270);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(310,260,320,270);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(320,260,330,270);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,260,340,270);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,260,350,270);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,260,360,270);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,260,370,270);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,260,380,270);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,260,390,270);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,260,400,270);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,260,410,270);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(410,260,420,270);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,260,430,270);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(430,260,440,270);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(440,260,450,270);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,260,460,270);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(460,260,470,270);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(470,260,480,270);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(480,260,490,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,260,500,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,260,510,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(510,260,520,270);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(520,260,530,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,260,540,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(540,260,550,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(550,260,560,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(560,260,570,270);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(570,260,580,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(580,260,590,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(590,260,600,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(600,260,610,270);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(610,260,620,270);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(620,260,630,270);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(630,260,640,270);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(640,260,650,270);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(650,260,660,270);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(660,260,670,270);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(670,260,680,270);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(680,260,690,270);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(690,260,700,270);

/*
* FILA 28
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,270,10,280);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,270,20,280);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,270,30,280);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,270,40,280);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(40,270,50,280);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,270,60,280);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,270,70,280);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,270,80,280);
color_rgb(25,41,26); // verde
rectangulo_lleno(80,270,90,280);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,270,100,280);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,270,110,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(110,270,120,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(120,270,130,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(130,270,140,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(140,270,150,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,270,160,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,270,170,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,270,180,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,270,190,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,270,200,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,270,210,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,270,220,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,270,230,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,270,240,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,270,250,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,270,260,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,270,270,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,270,280,280);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(280,270,290,280);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(290,270,300,280);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(300,270,310,280);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,270,320,280);
color_rgb(242, 242, 242);
rectangulo_lleno(320,270,330,280);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(330,270,340,280);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,270,350,280);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(350,270,360,280);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,270,370,280);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,270,380,280);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,270,390,280);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,270,400,280);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,270,410,280);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,270,420,280);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,270,430,280);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,270,440,280);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,270,450,280);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,270,460,280);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(460,270,470,280);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(470,270,480,280);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(480,270,490,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,270,500,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,270,510,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(510,270,520,280);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(520,270,530,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,270,540,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(540,270,550,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(550,270,560,280);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(560,270,570,280);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(570,270,580,280);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(580,270,590,280);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(590,270,600,280);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(600,270,610,280);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(610,270,620,280);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(620,270,630,280);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(630,270,640,280);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(640,270,650,280);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(650,270,660,280);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(660,270,670,280);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(670,270,680,280);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(680,270,690,280);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(690,270,700,280);

/*
* FILA 29
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,280,10,290);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,280,20,290);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,280,30,290);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,280,40,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(40,280,50,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(50,280,60,290);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,280,70,290);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,280,80,290);
color_rgb(25,41,26); // verde
rectangulo_lleno(80,280,90,290);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,280,100,290);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,280,110,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(110,280,120,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(120,280,130,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(130,280,140,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(140,280,150,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,280,160,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,280,170,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,280,180,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,280,190,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,280,200,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,280,210,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,280,220,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,280,230,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,280,240,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,280,250,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,280,260,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,280,270,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,280,280,290);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(280,280,290,290);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(290,280,300,290);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(300,280,310,290);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,280,320,290);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(320,280,330,290);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,280,340,290);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,280,350,290);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,280,360,290);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,280,370,290);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,280,380,290);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,280,390,290);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,280,400,290);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,280,410,290);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,280,420,290);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,280,430,290);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,280,440,290);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(440,280,450,290);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,280,460,290);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(460,280,470,290);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(470,280,480,290);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(480,280,490,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,280,500,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,280,510,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(510,280,520,290);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(520,280,530,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,280,540,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(540,280,550,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(550,280,560,290);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(560,280,570,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(570,280,580,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(580,280,590,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(590,280,600,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(600,280,610,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(610,280,620,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(620,280,630,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(630,280,640,290);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(640,280,650,290);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(650,280,660,290);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(660,280,670,290);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(670,280,680,290);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(680,280,690,290);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,280,700,290);

/*
* FILA 30
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,290,10,300);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,290,20,300);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(20,290,30,300);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,290,40,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(40,290,50,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(50,290,60,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(60,290,70,300);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,290,80,300);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,290,90,300);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,290,100,300);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,290,110,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(110,290,120,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(120,290,130,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(130,290,140,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(140,290,150,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,290,160,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,290,170,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,290,180,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,290,190,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,290,200,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,290,210,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,290,220,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,290,230,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,290,240,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,290,250,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,290,260,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,290,270,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(270,290,280,300);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(280,290,290,300);
color_rgb(242, 242, 242);
rectangulo_lleno(290,290,300,300);
color_rgb(242, 242, 242);
rectangulo_lleno(300,290,310,300);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(310,290,320,300);
color_rgb(242, 242, 242);
rectangulo_lleno(320,290,330,300);
color_rgb(242, 242, 242);
rectangulo_lleno(330,290,340,300);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,290,350,300);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,290,360,300);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,290,370,300);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(370,290,380,300);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,290,390,300);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,290,400,300);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,290,410,300);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,290,420,300);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(420,290,430,300);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(430,290,440,300);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,290,450,300);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,290,460,300);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(460,290,470,300);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(470,290,480,300);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(480,290,490,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(490,290,500,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,290,510,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(510,290,520,300);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(520,290,530,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(530,290,540,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(540,290,550,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(550,290,560,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(560,290,570,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(570,290,580,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(580,290,590,300);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(590,290,600,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(600,290,610,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(610,290,620,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(620,290,630,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(630,290,640,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(640,290,650,300);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(650,290,660,300);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(660,290,670,300);
color_rgb(18, 16, 12); // marron oscuro
rectangulo_lleno(670,290,680,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(680,290,690,300);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(690,290,700,300);

/*
* FILA 31
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,300,10,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,300,20,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(20,300,30,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(30,300,40,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(40,300,50,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(50,300,60,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(60,300,70,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(70,300,80,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(80,300,90,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(90,300,100,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(100,300,110,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(110,300,120,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(120,300,130,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(130,300,140,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(140,300,150,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,300,160,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,300,170,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,300,180,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,300,190,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(190,300,200,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,300,210,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,300,220,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,300,230,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,300,240,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,300,250,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(250,300,260,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(260,300,270,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(270,300,280,310);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(280,300,290,310);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(290,300,300,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(300,300,310,310);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(310,300,320,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,300,330,310);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(330,300,340,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,300,350,310);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,300,360,310);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,300,370,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,300,380,310);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(380,300,390,310);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,300,400,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(400,300,410,310);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(410,300,420,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(420,300,430,310);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(430,300,440,310);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(440,300,450,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,300,460,310);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(460,300,470,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(470,300,480,310);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(480,300,490,310);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(490,300,500,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(500,300,510,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(510,300,520,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(520,300,530,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(530,300,540,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(540,300,550,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(550,300,560,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(560,300,570,310);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(570,300,580,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(580,300,590,310);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(590,300,600,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(600,300,610,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(610,300,620,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(620,300,630,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(630,300,640,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(640,300,650,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(650,300,660,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(660,300,670,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(670,300,680,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(680,300,690,310);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(690,300,700,310);

/*
* FILA 32
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,310,10,320);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,310,20,320);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(20,310,30,320);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(30,310,40,320);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(40,310,50,320);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(50,310,60,320);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(60,310,70,320);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(70,310,80,320);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(80,310,90,320);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(90,310,100,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(100,310,110,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(110,310,120,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(120,310,130,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(130,310,140,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(140,310,150,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,310,160,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,310,170,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,310,180,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,310,190,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(190,310,200,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,310,210,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,310,220,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,310,230,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,310,240,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(240,310,250,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(250,310,260,320);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(260,310,270,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(270,310,280,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(280,310,290,320);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(290,310,300,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(300,310,310,320);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,310,320,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,310,330,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,310,340,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,310,350,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,310,360,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,310,370,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,310,380,320);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,310,390,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,310,400,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,310,410,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(410,310,420,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,310,430,320);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,310,440,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(440,310,450,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(450,310,460,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(460,310,470,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(470,310,480,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(480,310,490,320);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(490,310,500,320);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(500,310,510,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(510,310,520,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(520,310,530,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(530,310,540,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(540,310,550,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(550,310,560,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(560,310,570,320);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(570,310,580,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(580,310,590,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(590,310,600,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(600,310,610,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(610,310,620,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(620,310,630,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(630,310,640,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(640,310,650,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(650,310,660,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(660,310,670,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(670,310,680,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(680,310,690,320);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(690,310,700,320);

/*
* FILA 33
*/
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(0,320,10,330);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(10,320,20,330);
color_rgb(33, 32, 30); // gris oscuro
rectangulo_lleno(20,320,30,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(30,320,40,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(40,320,50,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(50,320,60,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(60,320,70,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(70,320,80,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(80,320,90,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(90,320,100,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(100,320,110,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(110,320,120,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(120,320,130,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(130,320,140,330);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(140,320,150,330);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(150,320,160,330);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(160,320,170,330);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(170,320,180,330);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(180,320,190,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(190,320,200,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(200,320,210,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(210,320,220,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(220,320,230,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(230,320,240,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(240,320,250,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(250,320,260,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(260,320,270,330);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(270,320,280,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(280,320,290,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(290,320,300,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(300,320,310,330);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,320,320,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,320,330,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,320,340,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,320,350,330);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(350,320,360,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(360,320,370,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,320,380,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(380,320,390,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,320,400,330);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(400,320,410,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(410,320,420,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,320,430,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(430,320,440,330);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,320,450,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,320,460,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(460,320,470,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(470,320,480,330);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(480,320,490,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(490,320,500,330);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(500,320,510,330);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(510,320,520,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(520,320,530,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(530,320,540,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(540,320,550,330);
color_rgb(42, 42, 40); // gris
rectangulo_lleno(550,320,560,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,320,570,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(570,320,580,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(580,320,590,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(590,320,600,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(600,320,610,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(610,320,620,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(620,320,630,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(630,320,640,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(640,320,650,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(650,320,660,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(660,320,670,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(670,320,680,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(680,320,690,330);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(690,320,700,330);

/*
* FILA 34
*/
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(0,330,10,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(10,330,20,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(20,330,30,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(30,330,40,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(40,330,50,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(50,330,60,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(60,330,70,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(70,330,80,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(80,330,90,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(90,330,100,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(100,330,110,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(110,330,120,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(120,330,130,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(130,330,140,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(140,330,150,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(150,330,160,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(160,330,170,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(170,330,180,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(180,330,190,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(190,330,200,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(200,330,210,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(210,330,220,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(220,330,230,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(230,330,240,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(240,330,250,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(250,330,260,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(260,330,270,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(270,330,280,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(280,330,290,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(290,330,300,340);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(300,330,310,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(310,330,320,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,330,330,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,330,340,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,330,350,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,330,360,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,330,370,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,330,380,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(380,330,390,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,330,400,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,330,410,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(410,330,420,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,330,430,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,330,440,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(440,330,450,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,330,460,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(460,330,470,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(470,330,480,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(480,330,490,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(490,330,500,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(500,330,510,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(510,330,520,340);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(520,330,530,340);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(530,330,540,340);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(540,330,550,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(550,330,560,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,330,570,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(570,330,580,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(580,330,590,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(590,330,600,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(600,330,610,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(610,330,620,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(620,330,630,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(630,330,640,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(640,330,650,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(650,330,660,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(660,330,670,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(670,330,680,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(680,330,690,340);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(690,330,700,340);

/*
* FILA 35
*/
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(0,340,10,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,340,20,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(20,340,30,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,340,40,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(40,340,50,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,340,60,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(60,340,70,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,340,80,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(80,340,90,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,340,100,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(100,340,110,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,340,120,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(120,340,130,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,340,140,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(140,340,150,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(150,340,160,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(160,340,170,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(170,340,180,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(180,340,190,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(190,340,200,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(200,340,210,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(210,340,220,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(220,340,230,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(230,340,240,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(240,340,250,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(250,340,260,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(260,340,270,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(270,340,280,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(280,340,290,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(290,340,300,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(300,340,310,350);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(310,340,320,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(320,340,330,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,340,340,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(340,340,350,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(350,340,360,350);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(360,340,370,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,340,380,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(380,340,390,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,340,400,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,340,410,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,340,420,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,340,430,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(430,340,440,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,340,450,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(450,340,460,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(460,340,470,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(470,340,480,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(480,340,490,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(490,340,500,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(500,340,510,350);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(510,340,520,350);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(520,340,530,350);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(530,340,540,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(540,340,550,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(550,340,560,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(560,340,570,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(570,340,580,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(580,340,590,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(590,340,600,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(600,340,610,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(610,340,620,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(620,340,630,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(630,340,640,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(640,340,650,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(650,340,660,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,340,670,350);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(670,340,680,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(680,340,690,350);
color_rgb(54, 53, 51); // gris claro
rectangulo_lleno(690,340,700,350);

/*
* FILA 36
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,350,10,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,350,20,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(20,350,30,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,350,40,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,350,50,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,350,60,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,350,70,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,350,80,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,350,90,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,350,100,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,350,110,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,350,120,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,350,130,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,350,140,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(140,350,150,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(150,350,160,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(160,350,170,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(170,350,180,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(180,350,190,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(190,350,200,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(200,350,210,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(210,350,220,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(220,350,230,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(230,350,240,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(240,350,250,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(250,350,260,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(260,350,270,360);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(270,350,280,360);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(280,350,290,360);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(290,350,300,360);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(300,350,310,360);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,350,320,360);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(320,350,330,360);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(330,350,340,360);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(340,350,350,360);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,350,360,360);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,350,370,360);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(370,350,380,360);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,350,390,360);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,350,400,360);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(400,350,410,360);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,350,420,360);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,350,430,360);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(430,350,440,360);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,350,450,360);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(450,350,460,360);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(460,350,470,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(470,350,480,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,350,490,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(490,350,500,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(500,350,510,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,350,520,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(520,350,530,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(530,350,540,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(540,350,550,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,350,560,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(560,350,570,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(570,350,580,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(580,350,590,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(590,350,600,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(600,350,610,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(610,350,620,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(620,350,630,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(630,350,640,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(640,350,650,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(650,350,660,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,350,670,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(670,350,680,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,350,690,360);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,350,700,360);

/*
* FILA 37
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,360,10,370);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,360,20,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,360,30,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,360,40,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,360,50,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,360,60,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,360,70,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,360,80,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(80,360,90,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,360,100,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(100,360,110,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(110,360,120,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(120,360,130,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(130,360,140,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(140,360,150,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(150,360,160,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(160,360,170,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(170,360,180,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(180,360,190,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(190,360,200,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(200,360,210,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(210,360,220,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(220,360,230,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(230,360,240,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(240,360,250,370);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(250,360,260,370);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(260,360,270,370);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(270,360,280,370);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(280,360,290,370);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(290,360,300,370);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(300,360,310,370);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(310,360,320,370);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,360,330,370);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,360,340,370);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,360,350,370);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(350,360,360,370);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(360,360,370,370);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,360,380,370);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(380,360,390,370);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,360,400,370);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,360,410,370);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(410,360,420,370);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(420,360,430,370);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,360,440,370);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(440,360,450,370);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,360,460,370);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(460,360,470,370);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(470,360,480,370);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,360,490,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(490,360,500,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(500,360,510,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(510,360,520,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(520,360,530,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(530,360,540,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(540,360,550,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(550,360,560,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,360,570,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,360,580,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,360,590,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,360,600,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(600,360,610,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(610,360,620,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(620,360,630,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(630,360,640,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(640,360,650,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(650,360,660,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(660,360,670,370);
color_rgb(25,41,26); // verde
rectangulo_lleno(670,360,680,370);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,360,690,370);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,360,700,370);

/*
* FILA 38
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,370,10,380);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,370,20,380);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,370,30,380);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,370,40,380);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,370,50,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,370,60,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,370,70,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,370,80,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,370,90,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,370,100,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,370,110,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(110,370,120,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(120,370,130,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(130,370,140,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(140,370,150,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(150,370,160,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(160,370,170,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(170,370,180,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(180,370,190,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(190,370,200,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(200,370,210,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(210,370,220,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(220,370,230,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(230,370,240,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(240,370,250,380);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(250,370,260,380);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(260,370,270,380);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(270,370,280,380);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(280,370,290,380);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(290,370,300,380);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(300,370,310,380);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(310,370,320,380);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,370,330,380);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,370,340,380);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,370,350,380);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(350,370,360,380);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(360,370,370,380);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,370,380,380);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,370,390,380);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,370,400,380);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,370,410,380);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,370,420,380);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,370,430,380);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,370,440,380);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(440,370,450,380);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(450,370,460,380);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(460,370,470,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(470,370,480,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(480,370,490,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(490,370,500,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,370,510,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(510,370,520,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,370,530,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(530,370,540,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(540,370,550,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(550,370,560,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(560,370,570,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(570,370,580,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(580,370,590,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,370,600,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,370,610,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,370,620,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,370,630,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,370,640,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,370,650,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,370,660,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,370,670,380);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,370,680,380);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,370,690,380);
color_rgb(16, 27, 17); // verde oscuro 
rectangulo_lleno(690,370,700,380);

/*
* FILA 39
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,380,10,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,380,20,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,380,30,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,380,40,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,380,50,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,380,60,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,380,70,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,380,80,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,380,90,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,380,100,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,380,110,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(110,380,120,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(120,380,130,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(130,380,140,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(140,380,150,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(150,380,160,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(160,380,170,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(170,380,180,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(180,380,190,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(190,380,200,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(200,380,210,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(210,380,220,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(220,380,230,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(230,380,240,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(240,380,250,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(250,380,260,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(260,380,270,390);
color_rgb(242, 242, 242);
rectangulo_lleno(270,380,280,390);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(280,380,290,390);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(290,380,300,390);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(300,380,310,390);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,380,320,390);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(320,380,330,390);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(330,380,340,390);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,380,350,390);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,380,360,390);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,380,370,390);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,380,380,390);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(380,380,390,390);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,380,400,390);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(400,380,410,390);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(410,380,420,390);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,380,430,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(430,380,440,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(440,380,450,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(450,380,460,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(460,380,470,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(470,380,480,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(480,380,490,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(490,380,500,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,380,510,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(510,380,520,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,380,530,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(530,380,540,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(540,380,550,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(550,380,560,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(560,380,570,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(570,380,580,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(580,380,590,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,380,600,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,380,610,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,380,620,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,380,630,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,380,640,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,380,650,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,380,660,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,380,670,390);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,380,680,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,380,690,390);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,380,700,390);

/*
* FILA 40
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,390,10,400);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,390,20,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,390,30,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,390,40,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,390,50,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,390,60,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,390,70,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,390,80,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,390,90,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,390,100,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,390,110,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(110,390,120,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(120,390,130,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(130,390,140,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(140,390,150,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(150,390,160,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(160,390,170,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(170,390,180,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(180,390,190,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(190,390,200,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(200,390,210,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(210,390,220,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(220,390,230,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(230,390,240,400);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(240,390,250,400);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(250,390,260,400);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(260,390,270,400);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(270,390,280,400);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(280,390,290,400);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(290,390,300,400);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(300,390,310,400);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(310,390,320,400);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,390,330,400);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,390,340,400);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,390,350,400);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,390,360,400);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,390,370,400);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(370,390,380,400);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,390,390,400);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,390,400,400);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(400,390,410,400);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(410,390,420,400);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(420,390,430,400);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(430,390,440,400);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(440,390,450,400);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(450,390,460,400);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(460,390,470,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(470,390,480,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(480,390,490,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(490,390,500,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,390,510,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(510,390,520,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,390,530,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(530,390,540,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(540,390,550,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(550,390,560,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(560,390,570,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(570,390,580,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(580,390,590,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,390,600,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,390,610,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,390,620,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,390,630,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,390,640,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,390,650,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,390,660,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,390,670,400);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,390,680,400);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,390,690,400);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,390,700,400);

/*
* FILA 41
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,400,10,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,400,20,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,400,30,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,400,40,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,400,50,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,400,60,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,400,70,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,400,80,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,400,90,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,400,100,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,400,110,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(110,400,120,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(120,400,130,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(130,400,140,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(140,400,150,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(150,400,160,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(160,400,170,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(170,400,180,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(180,400,190,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(190,400,200,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(200,400,210,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(210,400,220,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(220,400,230,410);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(230,400,240,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(240,400,250,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(250,400,260,410);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(260,400,270,410);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(270,400,280,410);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(280,400,290,410);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(290,400,300,410);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(300,400,310,410);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(310,400,320,410);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,400,330,410);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,400,340,410);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(340,400,350,410);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(350,400,360,410);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,400,370,410);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(370,400,380,410);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,400,390,410);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(390,400,400,410);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(400,400,410,410);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(410,400,420,410);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(420,400,430,410);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,400,440,410);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(440,400,450,410);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,400,460,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(460,400,470,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(470,400,480,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,400,490,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(490,400,500,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(500,400,510,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,400,520,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(520,400,530,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(530,400,540,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(540,400,550,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,400,560,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(560,400,570,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(570,400,580,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(580,400,590,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(590,400,600,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(600,400,610,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(610,400,620,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(620,400,630,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(630,400,640,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(640,400,650,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(650,400,660,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,400,670,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(670,400,680,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,400,690,410);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,400,700,410);

/*
* FILA 42
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,410,10,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,410,20,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(20,410,30,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,410,40,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,410,50,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,410,60,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,410,70,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,410,80,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,410,90,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,410,100,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,410,110,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,410,120,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,410,130,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,410,140,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(140,410,150,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(150,410,160,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(160,410,170,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(170,410,180,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(180,410,190,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(190,410,200,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(200,410,210,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(210,410,220,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(220,410,230,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(230,410,240,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(240,410,250,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(250,410,260,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(260,410,270,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(270,410,280,420);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(280,410,290,420);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(290,410,300,420);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(300,410,310,420);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(310,410,320,420);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,410,330,420);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,410,340,420);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,410,350,420);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(350,410,360,420);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(360,410,370,420);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,410,380,420);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,410,390,420);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(390,410,400,420);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,410,410,420);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,410,420,420);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(420,410,430,420);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(430,410,440,420);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(440,410,450,420);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(450,410,460,420);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(460,410,470,420);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(470,410,480,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,410,490,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(490,410,500,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(500,410,510,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,410,520,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(520,410,530,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(530,410,540,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(540,410,550,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,410,560,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(560,410,570,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(570,410,580,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(580,410,590,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(590,410,600,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(600,410,610,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(610,410,620,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(620,410,630,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(630,410,640,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(640,410,650,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(650,410,660,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,410,670,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(670,410,680,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,410,690,420);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,410,700,420);

/*
* FILA 43
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,420,10,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,420,20,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(20,420,30,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,420,40,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,420,50,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,420,60,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,420,70,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,420,80,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,420,90,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,420,100,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,420,110,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,420,120,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,420,130,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,420,140,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(140,420,150,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(150,420,160,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(160,420,170,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(170,420,180,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(180,420,190,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(190,420,200,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(200,420,210,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(210,420,220,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(220,420,230,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(230,420,240,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(240,420,250,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(250,420,260,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(260,420,270,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(270,420,280,430);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(280,420,290,430);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(290,420,300,430);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(300,420,310,430);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,420,320,430);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,420,330,430);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,420,340,430);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(340,420,350,430);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(350,420,360,430);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,420,370,430);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,420,380,430);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,420,390,430);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,420,400,430);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,420,410,430);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,420,420,430);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,420,430,430);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,420,440,430);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(440,420,450,430);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(450,420,460,430);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(460,420,470,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(470,420,480,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(480,420,490,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(490,420,500,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(500,420,510,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(510,420,520,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(520,420,530,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(530,420,540,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(540,420,550,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(550,420,560,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,420,570,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,420,580,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,420,590,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,420,600,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(600,420,610,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(610,420,620,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(620,420,630,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(630,420,640,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(640,420,650,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(650,420,660,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(660,420,670,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(670,420,680,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(680,420,690,430);
color_rgb(25,41,26); // verde
rectangulo_lleno(690,420,700,430);

/*
* FILA 44
*/
color_rgb(25,41,26); // verde
rectangulo_lleno(0,430,10,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(10,430,20,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,430,30,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,430,40,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,430,50,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,430,60,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,430,70,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,430,80,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(80,430,90,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,430,100,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(100,430,110,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(110,430,120,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(120,430,130,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(130,430,140,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(140,430,150,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(150,430,160,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(160,430,170,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(170,430,180,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(180,430,190,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(190,430,200,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(200,430,210,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(210,430,220,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(220,430,230,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(230,430,240,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(240,430,250,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(250,430,260,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(260,430,270,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(270,430,280,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(280,430,290,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(290,430,300,440);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(300,430,310,440);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(310,430,320,440);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,430,330,440);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,430,340,440);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,430,350,440);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,430,360,440);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,430,370,440);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(370,430,380,440);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(380,430,390,440);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,430,400,440);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,430,410,440);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,430,420,440);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,430,430,440);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,430,440,440);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(440,430,450,440);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,430,460,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(460,430,470,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(470,430,480,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(480,430,490,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(490,430,500,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(500,430,510,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(510,430,520,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(520,430,530,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(530,430,540,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(540,430,550,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(550,430,560,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,430,570,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,430,580,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,430,590,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,430,600,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(600,430,610,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(610,430,620,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(620,430,630,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(630,430,640,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(640,430,650,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(650,430,660,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(660,430,670,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(670,430,680,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(680,430,690,440);
color_rgb(25,41,26); // verde
rectangulo_lleno(690,430,700,440);

/*
* FILA 45
*/
color_rgb(25,41,26); // verde
rectangulo_lleno(0,440,10,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(10,440,20,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,440,30,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,440,40,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,440,50,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,440,60,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,440,70,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,440,80,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(80,440,90,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,440,100,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(100,440,110,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(110,440,120,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(120,440,130,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(130,440,140,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(140,440,150,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(150,440,160,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(160,440,170,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(170,440,180,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(180,440,190,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(190,440,200,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(200,440,210,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(210,440,220,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(220,440,230,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(230,440,240,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(240,440,250,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(250,440,260,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(260,440,270,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(270,440,280,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(280,440,290,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(290,440,300,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(300,440,310,450);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(310,440,320,450);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,440,330,450);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(330,440,340,450);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,440,350,450);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,440,360,450);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(360,440,370,450);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,440,380,450);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(380,440,390,450);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,440,400,450);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(400,440,410,450);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(410,440,420,450);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(420,440,430,450);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(430,440,440,450);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(440,440,450,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(450,440,460,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(460,440,470,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(470,440,480,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(480,440,490,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(490,440,500,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(500,440,510,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(510,440,520,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(520,440,530,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(530,440,540,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(540,440,550,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(550,440,560,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,440,570,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,440,580,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,440,590,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,440,600,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(600,440,610,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(610,440,620,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(620,440,630,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(630,440,640,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(640,440,650,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(650,440,660,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(660,440,670,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(670,440,680,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(680,440,690,450);
color_rgb(25,41,26); // verde
rectangulo_lleno(690,440,700,450);

/*
* FILA 46
*/
color_rgb(25,41,26); // verde
rectangulo_lleno(0,450,10,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(10,450,20,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,450,30,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,450,40,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,450,50,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,450,60,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,450,70,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,450,80,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(80,450,90,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,450,100,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(100,450,110,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(110,450,120,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(120,450,130,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(130,450,140,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(140,450,150,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(150,450,160,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(160,450,170,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(170,450,180,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(180,450,190,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(190,450,200,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(200,450,210,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(210,450,220,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(220,450,230,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(230,450,240,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(240,450,250,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(250,450,260,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(260,450,270,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(270,450,280,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(280,450,290,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(290,450,300,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(300,450,310,460);
color_rgb(25,41,26); // verde
rectangulo_lleno(310,450,320,460);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(320,450,330,460);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,450,340,460);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(340,450,350,460);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,450,360,460);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,450,370,460);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,450,380,460);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(380,450,390,460);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(390,450,400,460);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,450,410,460);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(410,450,420,460);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(420,450,430,460);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(430,450,440,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(440,450,450,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(450,450,460,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(460,450,470,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(470,450,480,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(480,450,490,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(490,450,500,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,450,510,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(510,450,520,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,450,530,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(530,450,540,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(540,450,550,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(550,450,560,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(560,450,570,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(570,450,580,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(580,450,590,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,450,600,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,450,610,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,450,620,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,450,630,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,450,640,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,450,650,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,450,660,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,450,670,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,450,680,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,450,690,460);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(690,450,700,460);

/*
* FILA 47
*/
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(0,460,10,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(10,460,20,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(20,460,30,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(30,460,40,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(40,460,50,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(50,460,60,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(60,460,70,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(70,460,80,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(80,460,90,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(90,460,100,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(100,460,110,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(110,460,120,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(120,460,130,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(130,460,140,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(140,460,150,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(150,460,160,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(160,460,170,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(170,460,180,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(180,460,190,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(190,460,200,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(200,460,210,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(210,460,220,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(220,460,230,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(230,460,240,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(240,460,250,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(250,460,260,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(260,460,270,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(270,460,280,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(280,460,290,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(290,460,300,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(300,460,310,470);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(310,460,320,470);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(320,460,330,470);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(330,460,340,470);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,460,350,470);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(350,460,360,470);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,460,370,470);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,460,380,470);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,460,390,470);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,460,400,470);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(400,460,410,470);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(410,460,420,470);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(420,460,430,470);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(430,460,440,470);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(440,460,450,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(450,460,460,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(460,460,470,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(470,460,480,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(480,460,490,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(490,460,500,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(500,460,510,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(510,460,520,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(520,460,530,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(530,460,540,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(540,460,550,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(550,460,560,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(560,460,570,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(570,460,580,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(580,460,590,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(590,460,600,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(600,460,610,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(610,460,620,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(620,460,630,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(630,460,640,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(640,460,650,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(650,460,660,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(660,460,670,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(670,460,680,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(680,460,690,470);
color_rgb(31, 46, 32); // verde claro
rectangulo_lleno(690,460,700,470);

/*
* FILA 48
*/
color_rgb(25,41,26); // verde
rectangulo_lleno(0,470,10,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(10,470,20,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(20,470,30,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(30,470,40,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(40,470,50,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(50,470,60,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(60,470,70,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(70,470,80,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(80,470,90,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(90,470,100,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(100,470,110,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(110,470,120,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(120,470,130,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(130,470,140,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(140,470,150,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(150,470,160,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(160,470,170,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(170,470,180,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(180,470,190,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(190,470,200,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(200,470,210,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(210,470,220,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(220,470,230,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(230,470,240,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(240,470,250,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(250,470,260,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(260,470,270,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(270,470,280,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(280,470,290,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(290,470,300,480);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(300,470,310,480);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(310,470,320,480);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(320,470,330,480);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,470,340,480);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(340,470,350,480);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(350,470,360,480);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(360,470,370,480);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,470,380,480);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(380,470,390,480);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(390,470,400,480);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,470,410,480);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(410,470,420,480);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(420,470,430,480);
color_rgb(223, 233, 234); // celeste rio blanco
rectangulo_lleno(430,470,440,480);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(440,470,450,480);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,470,460,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(460,470,470,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(470,470,480,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(480,470,490,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(490,470,500,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(500,470,510,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(510,470,520,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(520,470,530,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(530,470,540,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(540,470,550,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(550,470,560,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(560,470,570,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(570,470,580,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(580,470,590,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(590,470,600,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(600,470,610,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(610,470,620,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(620,470,630,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(630,470,640,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(640,470,650,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(650,470,660,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(660,470,670,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(670,470,680,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(680,470,690,480);
color_rgb(25,41,26); // verde
rectangulo_lleno(690,470,700,480);

/*
* FILA 49
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,480,10,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,480,20,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(20,480,30,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,480,40,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,480,50,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,480,60,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,480,70,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,480,80,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,480,90,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,480,100,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,480,110,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,480,120,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,480,130,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,480,140,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(140,480,150,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(150,480,160,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(160,480,170,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(170,480,180,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(180,480,190,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(190,480,200,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(200,480,210,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(210,480,220,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(220,480,230,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(230,480,240,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(240,480,250,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(250,480,260,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(260,480,270,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(270,480,280,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(280,480,290,490);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(290,480,300,490);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(300,480,310,490);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(310,480,320,490);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(320,480,330,490);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,480,340,490);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(340,480,350,490);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(350,480,360,490);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(360,480,370,490);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(370,480,380,490);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,480,390,490);
color_rgb(132, 169, 173); // celeste rio oscuro
rectangulo_lleno(390,480,400,490);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(400,480,410,490);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,480,420,490);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,480,430,490);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,480,440,490);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(440,480,450,490);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,480,460,490);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(460,480,470,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(470,480,480,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,480,490,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(490,480,500,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(500,480,510,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,480,520,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(520,480,530,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(530,480,540,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(540,480,550,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,480,560,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(560,480,570,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(570,480,580,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(580,480,590,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(590,480,600,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(600,480,610,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(610,480,620,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(620,480,630,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(630,480,640,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(640,480,650,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(650,480,660,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,480,670,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(670,480,680,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,480,690,490);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,480,700,490);

/*
* FILA 50
*/
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(0,490,10,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(10,490,20,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(20,490,30,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(30,490,40,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(40,490,50,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(50,490,60,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(60,490,70,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(70,490,80,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(80,490,90,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(90,490,100,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(100,490,110,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(110,490,120,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(120,490,130,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(130,490,140,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(140,490,150,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(150,490,160,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(160,490,170,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(170,490,180,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(180,490,190,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(190,490,200,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(200,490,210,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(210,490,220,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(220,490,230,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(230,490,240,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(240,490,250,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(250,490,260,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(260,490,270,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(270,490,280,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(280,490,290,500);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(290,490,300,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(300,490,310,500);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(310,490,320,500);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(320,490,330,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(330,490,340,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(340,490,350,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(350,490,360,500);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(360,490,370,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(370,490,380,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(380,490,390,500);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(390,490,400,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(400,490,410,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(410,490,420,500);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(420,490,430,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(430,490,440,500);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(440,490,450,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(450,490,460,500);
color_rgb(139, 174, 177); // celeste rio poco oscuro
rectangulo_lleno(460,490,470,500);
color_rgb(189, 210, 213); // celeste rio claro
rectangulo_lleno(470,490,480,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(480,490,490,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(490,490,500,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(500,490,510,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(510,490,520,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(520,490,530,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(530,490,540,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(540,490,550,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(550,490,560,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(560,490,570,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(570,490,580,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(580,490,590,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(590,490,600,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(600,490,610,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(610,490,620,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(620,490,630,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(630,490,640,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(640,490,650,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(650,490,660,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(660,490,670,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(670,490,680,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(680,490,690,500);
color_rgb(16, 27, 17); // verde oscuro
rectangulo_lleno(690,490,700,500);
 
}

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
    int PlayerLifeCounter = 50;/*cantidad de vida*/
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
        }else(PlayerAlive==false);
        //fondoIni();
        //musica
        
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
     texto(375,460,"CLEVER SALVADOR QUISPE");
     texto(545,20,ShowScore("Score : ", CurrentScoreNumber));
     texto(480,446, ShowScore(BestScoreText,BestScoreNumber));
     
     if (BestScoreNumber < CurrentScoreNumber){BestScoreNumber = CurrentScoreNumber;}
    }
    else {
     /*Juego terminado*/
     color_rgb(156, 103, 191);//color fondo 
     rectangulo_lleno(0,230,700,300);// dimension
     color_rgb(0,0,0);//color letra
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
       mciSendString("play selva1.wav",NULL,0,0);
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
      mciSendString("play selva2.wav",NULL,0,0);
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
       mciSendString("play selva3.wav",NULL,0,0);
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
       mciSendString("play selva4.wav",NULL,0,0);
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
       mciSendString("play shironi.wav",NULL,0,0);   
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
