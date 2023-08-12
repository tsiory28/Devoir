
#include <stdio.h>
int sais(int n);
void addition (int n);
void multipl(int* n,int* z);
int main(){
	printf("calcul des nombres:\n");
	int z;
	int n=0;
	int j;
	printf("Pour faire multiplication tapez 1\n");
	printf("Pour faire addition tapez 2\n");
	printf("Pour faire division tapez 3\n");
	printf("Pour faire soustraction tapez 4\n");
	printf("Pour calculer la racine des nbrs entiers positifs <n tapez 5\n");
	scanf("%d",&j);
	if (j==1){
		multipl(&n,&z);
	}
	
	if(j==2){
		addition(n);
	}
	
	/*if(j==3){
		division(n);
	}
	if(j==4){
		soustraction(n);
	}
	if(j==5){
		racine(n);
	}*/
	
	return 0;
}
int sais(int n){
	printf("saisir n:\n");
	scanf("%d",&n);
	return n;
}
void multipl(int* n,int* z){
	int a;
	printf("saisir n:\n");
	scanf("%d",&a);
	n=&a;
	int i=0;
	printf("soit z la valeur de multiplication de 0 à 10\n");
	while(i<10){
		i++;
		*z=((*n)*i);
		printf("z=%d",*z);
	}
}
void addition (int n){
	int s=0;
	printf("saisir n:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		s=n+i;
		printf("%d+%d=%d\n",n,i,s);
	}
}

