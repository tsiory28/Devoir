#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(){
	
	///Initialisation du générateur de nombre aléatoire
	srand(time(NULL));
	///Générer 10 nombres pseudos-aléatoire < RAND_MAX
	printf("\nRAND_MAX = %d \ttime = %d\n",RAND_MAX,time(NULL));
	
	for(int i=0; i<10;i++)
	printf("%d\t",rand());
	printf("Nombres entre 1 et 100\n\n");
	for(int i=0; i<10; i++)
		{printf("%d\t",1+(int)(100.0*rand()/(RAND_MAX + 1.0)));}
	
	return 0;
}
