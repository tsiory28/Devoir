#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(){
	srand(time(NULL));	
	int n;
	int A=1;
	
	A=1+(int)(100.0*rand()/(RAND_MAX + 1.0));
	printf("Le Jeu consiste a devinner un chiffre entre 0 a 100\n!!!!!!!!!EN 7 TENTATIVES!!!!!!!!\n");		 	
		int i;
		for(i=0;i<7;i++){			
	printf("Entrez un nombre:\n");
///Le joueur entre son chiffre
	scanf("%d",&n);
///Plusieurs cas possibles s'imposent avec des conditions bien Distinctes  				
	if(n==A){						//Si le joueur trouve le chiffre en 7 tentatives
			printf("***(:(:*Bravo*:):)*** !!\nVous avez trouvé le chiffre en %d tentatives",i); 
			}
			else if(n>A){			//Si le nombre entrée est plus grand que le nombre Aléaoire
					printf("Trop grand !!\n");    	
					}
				if(n<A){		//Si le nombre entrée est plus petit que le nombre Aléaoire 
					printf("Trop petit!!\n");
					  }
				    }
																	
	if((i=6) && (n!=A)){				//Si le joueur ne reussit pas a trouver le nombre en 7 tentatives	
				printf(":( GAME OVER :(\nVous n'avez pas reussi a trouver le chiffre en 7 Tentatives :(\n");
			       }		

	return 0;
}

