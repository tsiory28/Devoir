#include <stdio.h>

int main(){
	printf("Premier test\n");
	float x=0,   		// la variable x
		  y=0;		   // la variable y
 // Entrée de données
	printf("Entrer x:\n");
	scanf("%f",&x);
 // Traitement
 /*
	x += 5;
*/
	y = 2*x + 3;
 // Sortie des résultats
	printf("x = %f\ny = %f\n", x, y);
 
	return 0;
}
