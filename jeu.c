#include "jeu.h"

void jouer(SDL_Surface *ecran){
	SDL_Surface *mario[] = {NULL};
	SDL_Surface *mur = NULL, *caisse = NULL, *caisseOk = NULL, *marioActuel = NULL, *objectif = NULL;
	SDL_Rect position, positionJoueur;
	SDL_Event event;
	int continuer = 1, objectifsRestants = 0, i = 0, j = 0;
	int carte[NB_BLOC_LARGEUR][NB_BLOC_HAUTEUR] = {0};

	marioActuel = BAS;
}
