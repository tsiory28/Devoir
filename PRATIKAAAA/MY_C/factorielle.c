#include <stdio.h>
int main(){
	int factorielle=0,chiffre;
	scanf("%d",&chiffre);
	 for(int i=1;i<chiffre;i++){
			//factorielle=(chiffre*(i*2));
			factorielle=chiffre*i;
			printf("%d\n",factorielle);
		 }
		 printf("la nombre factorielle est %d\n",factorielle);
		return 0;
	}
