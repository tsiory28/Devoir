#include <stdio.h>
int main(){
	printf("Programme de tableau a 2 dimension \n");
	int tab[2][3];
	printf("Entrez les elements de votre tableau a deux dimension:\n");
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			
				scanf("%d",tab[i][j]);				
			}
		}
	printf("Les élements de votre tableau sont %d\n",&tab[i][j]); 
	
	
	return 0;
}
