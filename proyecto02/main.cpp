#include "miniwin.h"
#include<stdlib.h>
/*
	Autor:  Cristian Rojas
	Fecha:  22/09/2021
*/

using namespace miniwin;

void nave_ejemplo(int x, int y);
void nave_enemigo(int v, int z);
void bala_prota(int xx, int yy);

int main(){
	
	int di, dii;
	int r,rr;
	
	int x=85;
	int y=80;
	
	//Posición del enemigo
	int v=100;
	int z=10;
	
	
	//variables coordenadas de las balas avion
	int xx, yy;

	vredimensiona(500,500);
	
	// Movimiento de las nave
	int t=tecla();
	while(t!= ESCAPE){
		
		//Movimiento aleatorio del enemigo
		r= rand()%50;
		if(r==0){
			di=IZQUIERDA;
		}else if (r==1){
			di=DERECHA;
		}
		
		if(di==IZQUIERDA){
			if(v>=20){
				v-=5;
			}
		}else if(di==DERECHA){
			if(v<344){
				v+=5;
			}
		}
		
		
		//mov. de nuestra nave
		if(t==IZQUIERDA){
			x-=5;
		}else if(t==DERECHA){
			x+=5;
		} else if(t==ARRIBA){
			y-=5;
		}else if(t==ABAJO){
			y+=5;
		}
		
		
		//Movimiento bala avion
		if(yy<=0 && t==ESPACIO){
			xx=250+x;
			yy=250+y;
		}
		
		if(t==ESPACIO){
			if(yy>=390 && yy<=400 ){
				xx=x, yy-=10;
			}
		}
		
		if(t=ESPACIO){
			if(yy<=391 && yy>=0){
				xx=xx+0 , yy-=10;
			}
		}
		//Colision con el Enemigo
		
		if(xx>v-30 && xx<=v){
			if(yy>=10 && yy<=45){
				v=-30, z=-55;
			}
		}
		
		
		color_rgb(0,0,0);
		rectangulo_lleno(0,0,500,500);
		nave_ejemplo(x,y);
		bala_prota(xx,yy);
		nave_enemigo(v,z);
		
		
		
		refresca();
		espera(10);
		t=tecla();
		borra();
	}
	
	return 0;
}

void bala_prota(int xx, int yy){
	if (yy==400 || yy==0){
		color_rgb(0,0,0);
	}else{
		color_rgb(255,242,0);
		rectangulo_lleno(0+xx,0+yy,4+xx,10+yy);
	}
}

void nave_ejemplo(int x, int y){
	//Contorno
	
		color_rgb(217,217,217);
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
		rectangulo_lleno(252+x,305+y,258+x,325+y);
	
	
	//color naranja
		color_rgb(255,100,0);
		rectangulo_lleno(225+x,325+y,240+x,330+y);
		rectangulo_lleno(230+x,330+y,235+x,345+y);
		//	simetría naranja
		rectangulo_lleno(225+45+x,325+y,240+45+x,330+y);
		rectangulo_lleno(230+45+x,330+y,235+45+x,345+y);
	
	//color Rojo
		color_rgb(255,0,0);
		rectangulo_lleno(225+x,330+y,230+x,345+y);
		rectangulo_lleno(235+x,330+y,240+x,345+y);
		rectangulo_lleno(230+x,345+y,235+x,350+y);
		//simetria rojo
		rectangulo_lleno(225+45+x,330+y,230+45+x,345+y);
		rectangulo_lleno(235+45+x,330+y,240+45+x,345+y);
		rectangulo_lleno(230+45+x,345+y,235+45+x,350+y);
	
	
}

void nave_enemigo(int v, int z){
	color_rgb(199,0,57);
	rectangulo_lleno(8+v,30+z,42+v,40+z);
	rectangulo_lleno(2+v,25+z,6+v,50+z);
	rectangulo_lleno(44+v,25+z,48+v,50+z);
	
	rectangulo_lleno(0+v,20+z,2+v,37+z);
	rectangulo_lleno(6+v,20+z,8+v,37+z);
	rectangulo_lleno(42+v,20+z,44+v,37+z);
	rectangulo_lleno(48+v,20+z,50+v,37+z);
	//centro
	color_rgb(130+v,224,170);
	rectangulo_lleno(15+v,25+z,35+v,50+z);
	//frente
	rectangulo_lleno(18+v,10+z,32+v,25+z);
	
	//Frente medio
	color_rgb(199,0,57);
	rectangulo_lleno(23+v,3+z,27+v,20+z);
	
	//Frente medio izquierdo
	color_rgb(46+v,134,193);
	rectangulo_lleno(17+v,3+z,21+v,15+z);
	rectangulo_lleno(17+v,2+z,19+v,3+z);
	rectangulo_lleno(19+v,1+z,21+v,2+z);
	rectangulo_lleno(21+v,0+z,23+v,1+z);
	
	//Frente medio derecho
	rectangulo_lleno(29+v,3+z,33+v,15+z);
	rectangulo_lleno(31+v,2+z,33+v,3+z);
	rectangulo_lleno(29+v,1+z,31+v,2+z);
	rectangulo_lleno(27+v,0+z,29+v,1+z);
	
	rectangulo_lleno(15+v,25+z,19+v,45+z);
	rectangulo_lleno(19+v,30+z,23+v,50+z);
	rectangulo_lleno(31+v,25+z,35+v,45+z);
	rectangulo_lleno(27+v,30+z,31+v,50+z);
	
	color_rgb(253,254,254);
	rectangulo_lleno(20+v,35+z,30+v,38+z);
	
	
}

