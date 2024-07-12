#include <stdlib.h>
#include <stdio.h>
#include "commande.h"
#include "commande.c"
int main(int argc,char *argv[]){

	char *chaine=NULL;
	FILE *fichier=NULL;
	int nbr;
	
	chaine=allocation();
	nbr=compteur(argv[1]);
	commande(fichier,chaine,argv[1],nbr);
	free(chaine);
	
	return 0;

}





