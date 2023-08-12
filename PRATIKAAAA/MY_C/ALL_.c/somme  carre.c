#include <stdio.h>

int main()
{
	printf("La somme des carres :\n");
	int n=2;
	int i;
	
	printf("Entrer n:\n");
	scanf("%d",&n);
	int s=0;
		
	for(i=0;i<n;i++){
		int c;
		s+=i;
		printf("%d\n",s);
		c=s*s;
		printf("somme des carre est %d\t",c);
		
	}
	
	
	
	
	
	for(i=0;i<n;i++){
		printf("la somme des cubes est :\n");
			int d;
			d=s*s*s;
			printf("%d\n",d);
					
	}
	
	return 0;
}
