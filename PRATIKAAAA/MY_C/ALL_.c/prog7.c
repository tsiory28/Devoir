#include <stdio.h>
#include <math.h>
int main(){
	printf("Somme des n premiers entiers non nuls\n"); 
///Entrée des données
	int i=988,		//l'entier a cumuler
		s=123,		//la somme a calculer
		n=9;		//la limite de la somme
		
	while(n!=0){
		printf("entrer n non nul: ");
		scanf("%d",&n);
///Traitement

		for(i=1, s=0; i<=n; i++){
	     s += i;
	     printf("i=%d s = %d\n dans la boucle \n",i,s);
}
		printf("i=%d en dehors de la boucle\n",i);	
///sortie des résultats
		printf("la somme des %d premiers entiers est = %d\n",n,s);
	}
	return 0;
}
