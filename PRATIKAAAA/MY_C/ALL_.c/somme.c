#include <stdio.h>
#include <math.h>
int main(){
	printf("Somme des entiers\n");
	
	int n=1;
	int i=0;
	while ( n!=0){
		int s=0;
	printf("entrez ls entiers n:\n");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		s =s+i;
	}
	printf("%d\n",s);	
}	
	return 0;
}


