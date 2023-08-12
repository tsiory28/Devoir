#include <stdio.h>
int mifamadika(int a,int b);
int main(){
	printf("Inversement des nombres\n");
	int a,b;
	printf("Entrer a et b:\n");
	scanf("%d\n%d\n",&a ,&b);
	a=mifamadika;
	
	return 0;
}
int mifamadika(int a,int b)
{
	int x=0;
	x = a;
	a = b;
	b = x;
	return a;
}
