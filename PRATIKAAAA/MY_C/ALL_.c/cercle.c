#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main(){
	printf("Calculer la circonférence d'un cercle \n");
	float  rayon=1,circonference=1;	        
			
/// Entrée de données
	printf("Entrez le rayon du cercle: \n");
	scanf("%f", &rayon);
	
/// Traitement
	circonference = 2*PI*rayon;
	

/// sortie des résultats
	printf("rayon = %f \ncirconférence = %f\n", rayon,circonference);
	
	return 0;
}
