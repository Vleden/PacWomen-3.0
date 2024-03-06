/**
  ******************************************************************************************************************
  * @file    ImagesBMP.h 
  * @author  IUT Informatique La Rochelle
  * @version v1.0
  * @date    2023
  * @modification	
  * @brief   d?finition des images bmp pour l'affichage LCD
  ******************************************************************************************************************/


#ifndef __IMAGES_BMP_H
#define __IMAGES_BMP_H
#include "GLCD_Config.h"

#define HEIGHT_SPACE_SHIP	30
#define WIDTH_SPACE_SHIP	32
extern const unsigned short bmpSpaceShip[HEIGHT_SPACE_SHIP*WIDTH_SPACE_SHIP*2];

#define HEIGHT_ENNEMI1 18
#define WIDTH_ENNEMI1 18
#define HEIGHT_ENNEMI2 18
#define WIDTH_ENNEMI2 24
#define HEIGHT_ENNEMI3 18
#define WIDTH_ENNEMI3 26
#define HEIGHT_BOSS 32
#define WIDTH_BOSS 34

//d?finition des matrices d'affichage des ennemis
extern const unsigned short bmpEnnemi1[HEIGHT_ENNEMI1*WIDTH_ENNEMI1*2];
extern const unsigned short bmpEnnemi2White[HEIGHT_ENNEMI2*WIDTH_ENNEMI2*2];
extern const unsigned short bmpEnnemi2Red[HEIGHT_ENNEMI2*WIDTH_ENNEMI2*2];
extern const unsigned short bmpEnnemi3White[HEIGHT_ENNEMI3*WIDTH_ENNEMI3*2];
extern const unsigned short bmpEnnemi3Green[HEIGHT_ENNEMI3*WIDTH_ENNEMI3*2];
extern const unsigned short bmpEnnemi3Red[HEIGHT_ENNEMI3*WIDTH_ENNEMI3*2];
extern const unsigned short bmpBoss[HEIGHT_BOSS*WIDTH_BOSS*2];

#define HEIGHT_ROCKET	10
#define WIDTH_ROCKET 2

#endif
