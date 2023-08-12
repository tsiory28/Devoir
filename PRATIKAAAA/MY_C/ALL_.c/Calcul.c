#include<stdio.h>
int main(){
	printf("calcul de ax^2+bx+c=0\n");
	float a,b,c,delta,x1,x2,x;
	printf("Entrer a,b et c\n");
	scanf("%f %f %f\n")&a,&b,&c);
	delta=b*b-4*a*c;
	if delta < 0{
		printf("Pas de solutions\n");
	}
	else if delta==0{x = -b/2*a;
		printf("solution unique %f\n",x)
		else if delta>0{
			x1 = -b+sqrt(delta)/2*a;
			x2 = -b-sqrt(delta)/2*a;
			printf("deux solutions %f et %f");
		
		
	return 0; 
}
