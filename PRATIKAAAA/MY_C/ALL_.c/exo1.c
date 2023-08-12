#include <stdio.h>
#include <math.h>
void resolveAndResult (float a, float b,float c,float* delta,float* x1 ,float* x2);
void fonctionData (int* fonction);
void getData (float* a, float* b, float* c);
	int main(){
	printf("resolution de ax^2+bx+c=0 dans C\n");
	float a=1,b=1,c=1,delta=0,x1=0,x2=0;
	int fonction=1;
	getData(&a,&b,&c);								//entrer des données
	resolveAndResult(a,b,c,&delta,&x1,&x2); 		//calculs et sortie de resultat
	fonctionData(&fonction);
	while(fonction==1){
		printf("voulez vous continuer?\n1:continuer\t0:quitter\n");
		scanf("%d",&fonction);
		switch (fonction) { 
			case 1 :getData(&a,&b,&c);
					resolveAndResult(a,b,c,&delta,&x1,&x2); 
					break;
			case 0 : break ;
			default : break;
		}
	}
	return 0;
}
void fonctionData (int* fonction){
	
		printf("voulez vous continuer?\n1:continuer\t0:quitter\n");
		scanf("%d",fonction);
	}
void resolveAndResult (float a, float b,float c,float* delta,float* x1 ,float* x2){
	*delta = b*b-4*a*c;
	if (*delta>=0){
		*x1 = (-b-sqrt(*delta))/(2*a);
		*x2 = (-b+sqrt(*delta))/(2*a);
		printf("les solution sont :\nx1=%.2f\nx2=%.2f\n",*x1,*x2);
	}
	else{
		*x1 = -b/(2*a);
		*x2 = sqrt(-*delta)/(2*a);
		printf("les solution sont :\nx1=%.2f+i%.2f\nx2=%.2f-i%.2f\n",*x1,*x2,*x1,*x2);
	}
}
void getData (float* a, float* b, float* c){
	printf("entrer a : ");scanf("%f",a);
	printf("entrer b : ");scanf("%f",b);
	printf("entrer c : ");scanf("%f",c);
}
