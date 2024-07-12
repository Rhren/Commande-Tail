#include <stdio.h>
#include <stdlib.h>
void commande(FILE *fichier,char *chaine,char *file,int nbr)
{
	int i;
	int j;
	int a;
	int l=0;
	int b; 
	fichier=fopen(file,"r");
	if(fichier == NULL)
	{
		printf("Erreur d'ouverture du fichier\n");
		exit(1);
	}
	else
	{
		for(i=0 ; i<nbr;i++)
		{
			fscanf(fichier,"%c",&chaine[i]);
		}
		for(i=0 ; i<nbr; i++)
		{
			if(chaine[i] == '\n')
			{
				j++;
			}
		}
		
		for (a=0; a<nbr; a++)
		{
			if(chaine[a] == '\n')
			{
				l++;
			}
			if(j-l==10) 
				break;
		}	
		
		for(b=a ; b<nbr; b++)
		{
			printf("%c",chaine[b]);
		}
			
	}
		fclose(fichier);
	}
char *allocation()
{
	char *tab=NULL;
	tab=(char*)malloc(20000*sizeof(char));
	return (tab);
}
int compteur (char *file){
	int nbr=1;
	FILE *fichier=fopen(file,"r");
	while(fgetc(fichier) != EOF)
	{
		nbr++;
	}
	fclose(fichier);
	return nbr;
}



