#include <windows.h>
#include "miniwin.h"
#include <sstream>
using namespace miniwin;
void explosion(int x, int y){ 
/*fase 1*/   
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,20);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,15);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,10);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,5);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,20);
refresca();
/*fase 2*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,30);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,25);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,20);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,15);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,30);
refresca();
/*fase 3*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,40);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,35);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,30);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,25);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,40);
refresca();
/*fase 4*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,50);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,45);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,40);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,35);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,50);
refresca();
/*fase 5*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,40);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,35);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,30);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,25);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,40);
refresca();
/*fase 6*/
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,30);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,25);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,20);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,15);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,30);
refresca();
/*fase 7*/   
color_rgb(253,0,6);
circulo_lleno(x+10,y+10,20);
refresca();
color_rgb(255,126,6);
circulo_lleno(x+10,y+10,15);
refresca();
color_rgb(251,255,8);
circulo_lleno(x+10,y+10,10);
refresca();
color_rgb(255,255,255);
circulo_lleno(x+10,y+10,5);
refresca();
espera(75);
//borra();
color_rgb(0,0,0);
circulo_lleno(x+10,y+10,20);
refresca();
}
void Player(int x, int y){
     /*
     color_rgb(2,0,150);
     rectangulo_lleno(x,y,40+x,20+y);  
     rectangulo_lleno(x+5,y-20,35+x,20+y);  
     color_rgb(230,130,60);
     rectangulo_lleno(x+15,y-30,25+x,20+y);
     pixeles de 3 en 3
     */
     /*Cabeza*/
     color_rgb(41,41,53);
     rectangulo_lleno(x+18,y-3,x+21,y+9);
     rectangulo_lleno(x+15,y+3,x+18,y+9);
     rectangulo_lleno(x+21,y+3,x+24,y+9);  
     color_rgb(2,26,55);
     rectangulo_lleno(x+9,y-3,x+12,y+6);
     rectangulo_lleno(x+12,y+6,x+15,y+9);
     rectangulo_lleno(x+27,y-3,x+30,y+6);
     rectangulo_lleno(x+24,y+6,x+27,y+9);
     /*Cuerpo*/
     color_rgb(62,63,58);
     rectangulo_lleno(x+12,y+9,x+27,y+12);
     color_rgb(41,41,53);
     rectangulo_lleno(x+15,y+12,x+24,y+21);
     color_rgb(29,56,75); 
     rectangulo_lleno(x+12,y+15,x+15,y+21);
     rectangulo_lleno(x+24,y+15,x+27,y+21);
     color_rgb(2,26,55); 
     rectangulo_lleno(x+15,y+21,x+24,y+27);
     rectangulo_lleno(x+12,y+27,x+27,y+30);
     rectangulo_lleno(x+9,y+30,x+30,y+33);
     /*Propulsores*/
     color_rgb(62,63,58);
     rectangulo_lleno(x+9,y+33,x+30,y+36);
     rectangulo_lleno(x+12,y+36,x+27,y+39);
     rectangulo_lleno(x+15,y+39,x+24,y+42);
     color_rgb(12,10,32);
     rectangulo_lleno(x+15,y+42,x+24,y+54);
     color_rgb(2,26,55);
     rectangulo_lleno(x+9,y+36,x+12,y+54);
     rectangulo_lleno(x+12,y+39,x+15,y+54);
     rectangulo_lleno(x+24,y+39,x+27,y+54);
     rectangulo_lleno(x+27,y+36,x+30,y+54);
     color_rgb(17,50,68);
     rectangulo_lleno(x+9,y+54,x+15,y+57);
     rectangulo_lleno(x+24,y+54,x+30,y+57);
     color_rgb(169,167,142);
     rectangulo_lleno(x+15,y+54,x+24,y+57);
     color_rgb(33,34,39);
     rectangulo_lleno(x+9,y+57,x+30,y+60);
     rectangulo_lleno(x+12,y+60,x+27,y+63);
     color_rgb(244,247,227);
     rectangulo_lleno(x+12,y+63,x+27,y+66);
     rectangulo_lleno(x+15,y+66,x+24,y+69);
     rectangulo_lleno(x+18,y+69,x+21,y+72);
     color_rgb(95,156,219);
     rectangulo_lleno(x+9,y+63,x+12,y+66);
     rectangulo_lleno(x+27,y+63,x+30,y+66);
     rectangulo_lleno(x+12,y+66,x+15,y+69);
     rectangulo_lleno(x+24,y+66,x+27,y+69);
     rectangulo_lleno(x+15,y+69,x+18,y+72);
     rectangulo_lleno(x+21,y+69,x+24,y+72);
     rectangulo_lleno(x+18,y+72,x+21,y+75);
     /*Alas*/
     /*Ala izquierda*/
     color_rgb(25,23,45);
     rectangulo_lleno(x-9,y+33,x+9,y+39);
     color_rgb(12,10,32);
     rectangulo_lleno(x-9,y+15,x-3,y+51);
     color_rgb(2,26,55);
     rectangulo_lleno(x-12,y+0,x-9,y+63);
     rectangulo_lleno(x-9,y-6,x-6,y+15);
     rectangulo_lleno(x-15,y+9,x-12,y+57);
     rectangulo_lleno(x-9,y+51,x-6,y+69);
     color_rgb(33,34,39);
     rectangulo_lleno(x-3,y+21,x+0,y+33);
     rectangulo_lleno(x+0,y+27,x+3,y+33);
     rectangulo_lleno(x+3,y+27,x+6,y+33);
     rectangulo_lleno(x+6,y+30,x+9,y+33);
     rectangulo_lleno(x+6,y+39,x+9,y+42);
     rectangulo_lleno(x+3,y+39,x+6,y+45);
     rectangulo_lleno(x+0,y+39,x+3,y+45);
     rectangulo_lleno(x-3,y+39,x+0,y+48);
     /*Ala derecha*/
     color_rgb(25,23,45);
     rectangulo_lleno(x+30,y+33,x+48,y+39);
     color_rgb(12,10,32);
     rectangulo_lleno(x+42,y+15,x+48,y+51);
     color_rgb(2,26,55);
     rectangulo_lleno(x+48,y+0,x+51,y+63);
     rectangulo_lleno(x+45,y-6,x+48,y+15);
     rectangulo_lleno(x+51,y+9,x+54,y+57);
     rectangulo_lleno(x+45,y+51,x+48,y+69);
     color_rgb(33,34,39);
     rectangulo_lleno(x+39,y+21,x+42,y+33);
     rectangulo_lleno(x+36,y+27,x+39,y+33);
     rectangulo_lleno(x+33,y+27,x+36,y+33);
     rectangulo_lleno(x+30,y+30,x+33,y+33);
     
     
     
     rectangulo_lleno(x+30,y+39,x+33,y+42);
	 rectangulo_lleno(x+33,y+39,x+36,y+45);
     rectangulo_lleno(x+36,y+39,x+39,y+45);
     rectangulo_lleno(x+39,y+39,x+42,y+48);


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

void Enemy(int x, int y, int r, int g, int b){
     /*color_rgb(r,g,b);
     rectangulo_lleno(x   ,y   ,40+x,20+y);
     rectangulo_lleno(x   ,y-10,10+x,30+y); 
     rectangulo_lleno(x+40,y-10,50+x,30+y);*/
	 	color_rgb(r,g,b);
	rectangulo_lleno(x+15,y,x+21,y+3);
	rectangulo_lleno(x+9,y+3,x+27,y+6);
	rectangulo_lleno(x+3,y+6,x+9,y+12);
	rectangulo_lleno(x+15,y+6,x+21,y+12);
	rectangulo_lleno(x+27,y+6,x+33,y+12);
	color_rgb(240, 15, 4); //color permanente
	rectangulo_lleno(x-9,y+12,x+45,y+18);
	color_rgb(r,g,b); //color cambiante
	rectangulo_lleno(x-15,y+18,x-9,y+24);
    rectangulo_lleno(x-3,y+18,x+3,y+24);
    rectangulo_lleno(x+9,y+18,x+15,y+24);
    rectangulo_lleno(x+21,y+18,x+27,y+24);
    rectangulo_lleno(x+33,y+18,x+39,y+24);
    rectangulo_lleno(x+45,y+18,x+51,y+24);
    rectangulo_lleno(x-9,y+24,x+45,y+30);
    color_rgb(240, 15, 4);
    rectangulo_lleno(x-3,y+30,x+39,y+36);
    rectangulo_lleno(x+3,y+36,x+33,y+41);
    rectangulo_lleno(x-21,y+9,x-15,y+39);
    rectangulo_lleno(x+51,y+9,x+57,y+39);
    color_rgb(r,g,b);
     rectangulo_lleno(x+9,y+41,x+27,y+46); 
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
std::string LifePercent(std::string text,int PlayerLifeCounter){
	 double num=(double)PlayerLifeCounter;
	 //int num=(PlayerLifeCounter/40)*100;
	 std::stringstream sstm;
	  sstm<<text<<(num/40)*100;
	  return sstm.str();
}     

int main(){
    //Gamebox
    int WIDTH  = 640;
    int HEIGHT = 480;
    vredimensiona(WIDTH,HEIGHT);
    
    //Variables
    int ex=400, ey=320;
     int ex1=500, ey1=320;
    int PlayerX = 320, PlayerY = 350; 
    int PlayerBulletX=320, PlayerBulletY=350;
    
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
    
    std::string ScoreText = "Current Score = ";
    std::string BestScoreText = "Best Score = ";
    std::string GameOverText = "Game Over. Final Score = ";
    std::string RestartText = "Press UP to restart the game";
    std::string Percent="Pts.    ";
    int CurrentScoreNumber = 0;
    int BestScoreNumber = 0;
    
    int Row01R,Row01G, Row01B;
    int Row02R,Row02G, Row02B;
    
    int Row01BonusX = 0;
    int Row02BonusX = 0;
    int Row01BonusBulletY = 0;
    int Row02BonusBulletY = 0;
    int BonusDamage = 0;

    //Gameloop & Update Cycle
    while(PlayerAlive){
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
                                  PlayerAlive = false;
                                   explosion(PlayerX,PlayerY); //falta colocar correctamente
								  }
            if (PlayerAlive){Player(PlayerX,PlayerY);}
            if (PlayerAlive){PlayerBullet(PlayerBulletX, PlayerBulletY);}
            
			
            
            //Paint Enemy Row 01
            if (EnemyRow01Alive){Enemy(EnemyRow01X, EnemyRow01Y,Row01R,Row01G, Row01B);}
            if (EnemyRow01Alive){EnemyRow01Bullet(EnemyRow01BulletX,EnemyRow01BulletY);}
            
            //Paint Enemy Row 02
            if (EnemyRow02Alive){Enemy(EnemyRow02X, EnemyRow02Y,Row02R,Row02G, Row02B);}
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
            color_rgb(111,111,111);
            rectangulo_lleno(0,430,640,480);
            color_rgb(20,20,20);
            rectangulo_lleno(30,440,230,460);
            texto(440, 440, ShowScore(ScoreText,CurrentScoreNumber));
            texto(440, 455, ShowScore(BestScoreText,BestScoreNumber));
            texto(250,440,LifePercent(Percent,PlayerLifeCounter));
            texto(310,440,"   %");
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
	                                       
            //Paint Players Life
            if (PlayerLifeCounter > 0) {
                PlayerHeart(30,440,PlayerLifeCounter*5);
                color_rgb(0,0,0);
                texto(250,440,LifePercent(Percent,PlayerLifeCounter));
           // texto(300,440,"  %");
            }
            else if (PlayerLifeCounter <= 0) { 
		
			 } else{}
			 
            
            //Difficulty Increase based on Current Score
            if (CurrentScoreNumber < 300){
                Row01R=22,Row01G=143, Row01B=140;
                Row02R=29,Row02G=32, Row02B=150; 
                Row01BonusX = 0;
                Row02BonusX = 0;
                Row01BonusBulletY = 0;
                Row02BonusBulletY = 0;  
                BonusDamage = 0;                    
            } else
            if (CurrentScoreNumber < 700){
                Row01R=50,Row01G=163, Row01B=84;
                Row02R=14,Row02G=126, Row02B=34;
                Row01BonusX = 2;
                Row02BonusX = 2;
                Row01BonusBulletY = 2;
                Row02BonusBulletY = 2; 
                BonusDamage = 0;                        
            } else 
            if (CurrentScoreNumber < 1200){
                Row01R=224,Row01G=220, Row01B=71;
                Row02R=234,Row02G=183, Row02B=23;
                Row01BonusX = 4;
                Row02BonusX = 4;
                Row01BonusBulletY = 4;
                Row02BonusBulletY = 4;
                BonusDamage = 1;
            } else {
                Row01R=187,Row01G=36, Row01B=36;
                Row02R=150,Row02G=14, Row02B=14;
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

