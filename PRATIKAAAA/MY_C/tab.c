/*
 */


#include <stdio.h>
void tableau(int  *tab);
void moyenne_v(int moyenne,int somme,int *tab);
int main(int argc, char **argv)
{
	printf("Tableau\n");
	
	int somme=0;
	int moyenne=0;
	int tab[4];
	
	tableau (tab);
	moyenne_v(moyenne,somme ,tab);
	
	
	return 0;
}
void tableau(int *tab){
		printf("tapez les chiffres du tableau :\n");
		for(int i=0;i<3;i+=1){		
		scanf("%d",&tab[i]);
	}
		
}
void moyenne_v(int moyenne,int somme,int *tab){
	
	
	for(int i=0;i<3;i++){
	
			somme+=tab[i];
	}
			moyenne=somme/3;
			printf("La somme des chiffres du tableau est %d\n",somme);
			printf("la moyenne du tableau est %d",moyenne);
			
}
