#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include <stdio.h>
#include "OurTypes.h"
#include <time.h>
#include <stdlib.h>
#include"hasierako pantailak.h"
#include"testua.h"
#include"musika.h"





int main(int argc, char* str[])
{
	pos = saguarenPosizioa();
    pantailak = MENUA;

    if (sgHasieratu() == -1)
    {
        fprintf(stderr, "Unable to set 640x480 video: %s\n", SDL_GetError());
        return 1;
    }
	musikahasi(".\\sound\\friends.wav");
	soinuakkargatu();

    letratamaina(30);

    while (pantailak != IRTEN)
    {
        if (pantailak == MENUA) {
            menua();
            while (pantailak == MENUA) {

                ebentu = ebentuaJasoGertatuBada();
                if (ebentu == SAGU_BOTOIA_EZKERRA)

                {

					pos = saguarenPosizioa();
					if ((pos.x >=50) && (pos.x <=400) && (pos.y >= 300) && (pos.y <=350)) { pantailak = JOKOA; }
					else if ((pos.x >=20) && (pos.x <= 450) && (pos.y >= 430) && (pos.y <= 500)) { pantailak = KREDITUAK; }
					else if ((pos.x >= 15) && (pos.x <= 670) && (pos.y >= 410) && (pos.y <=720)) { pantailak = IRTEN; }
                }
				itxi();
				
            }
            toggleMusic();
			
			soinua(".\\sound\\botoia.wav", 4);
        }

		
        if (pantailak == JOKOA) {
			jokua();
        }
        if (pantailak == KREDITUAK) {
			kreditos();
			while (pantailak == KREDITUAK) {
				itxi();
			}
        }
		if (pantailak == IRTEN) {
			sgItxi();
		}
        //toggleMusic();
    }
	return 0;
}





