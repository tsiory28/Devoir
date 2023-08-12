#include <stdio.h>
int main(){
	int n;
	int p;
	int k=1;
	printf("Entrez n:\n");
	scanf("%d",&n);
	printf("Entrez p:\n");
	scanf("%d",&p);
	for(int i;i<=n;i++){
		k=i*k;
		
	}
	printf("la valeur de la puissance est %d\n",k);
	
	
	return 0;
}
