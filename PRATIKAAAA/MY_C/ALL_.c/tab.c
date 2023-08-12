#include <stdio.h>
void tableau(int*tab, int n);
int main(){
	printf("somme des nombres a l'interieur de tableau\nEntrer les chiffres du tab:\n");
	int tab[10];
	int n=5;
	tableau(tab,n);
	*tab =*(tab+1)+*(tab+3);
	
	printf("Le nouveau chiffre dans le tab0 est %d",*tab);
	
	return 0;
}

void tableau(int*tab, int n){
	for(int i=0;i<n;i++){
		scanf("%d",(tab+i));
	}
	
	
	}
