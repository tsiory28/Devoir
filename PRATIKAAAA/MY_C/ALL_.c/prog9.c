#include <stdio.h>
#include <math.h>
void displayResult(int n,int s);
int sumOdd (int n);
int main(){
	printf("Somme des n premiers entiers non nuls\n"); 
///Entrée des données
	int i=988,		//l'entier a cumuler
		s=123,		//la somme a calculer
		n=9;		//la limite de la somme
		
	while(n!=0){
		printf("entrer n non nul: ");
		scanf("%d",&n);
		s = sumOdd(n);
///Traitement

		for(i=1, s=0; i<=(2*n-1); i+=2){
	     s += i;
	    
	     printf("i=%d s = %d\n dans la boucle \n",i,s);
}
		printf("i=%d en dehors de la boucle\n",i);	
///sortie des résultats
		printf("la somme des %d premiers entiers est = %d\n",n,s);
		displayResult(n,s);
		s = sumOdd(n);
	}
	return 0;
}
void displayResult(int n,int s){
	printf("la somme des %d premiers entiers = %d\n",n,s);

}
int sumOdd (int n){
	int i=0 ,s=0;
	for(i=1, s=0; i<=n; i++){
	     s += i;
	     printf("i=%d s = %d\n dans la boucle \n",i,s);
			}return s;
}
