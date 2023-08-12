#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y;
		scanf("%d",&y);
		scanf("%d",&x);
		puissance(x,y);
		return 0;
	}
int puissance(int avo,int iva){
	int puissance=1;
	for(int i=1;i<avo;i++){
		puissance*=avo;
	}	 
		printf("%d",&puissance);
		return puissance;
	}
