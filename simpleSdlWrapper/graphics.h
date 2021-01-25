#ifndef GRAPHICS_H
#define GRAPHICS_H
#include "SDL.h"



int sgHasieratu();
void sgItxi();//Sin opciones
void arkatzKoloreaEzarri(int red, int green, int blue);
void puntuaMarraztu(int x, int y);
void zuzenaMarraztu(int x1, int y1, int x2, int y2);
void pantailaGarbitu();
void pantailaBerriztu();
int irudiaMarraztu(SDL_Texture* texture, SDL_Rect *pDest);

SDL_Renderer* getRenderer(void);

#endif


