#include <stdio.h>

int main(int argc, char **argv)
{
	int tab1[5];
	int tab2[5];
	int tab3[5];
	int n=1;
	while(n==1){
	printf("Entrer 5nombres\n");
	for(int i=0;i<5;i++){
		scanf("%d",&tab1[i]);}
	
	printf("Entrer 5 nombres\n");
	for(int i=0;i<5;i++){
		scanf("%d",&tab2[i]);}
		
		printf("les doublants sont:");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(tab1[i]==tab2[j]){
				tab3[i]=tab2[j];}
			}
			if(tab3[i]==tab1[i]){
				printf("%d " ,tab3[i]);}
	
			}
			printf("\nvoulez vous continuer?1(continuer)/0(Quitter)\n");
			scanf("%d",&n);
		}
		
			; 
	return 0;}		
