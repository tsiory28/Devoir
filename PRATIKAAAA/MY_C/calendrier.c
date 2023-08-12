#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int*** allouer3Dint();
int main(){
	printf("Le programme consiste a faire apparaitre un calendrier\n");
	 ///=(int ***)malloc(sizeof(int**)*12);
	 int ***ireoVolan;
	 ireoVolan=allouer3Dint();
	 for(int i=0;i<12;i++){
		for(int j=0;j<7;j++) 
		ireoVolan[i]=0;
		printf("%d\n\n\n",ireoVolan[i]);
	}
	//~ for (int i=0;i<12;i++){
		//~ ireoVolana[i]=(int **)malloc(sizeof(int*)*6);
		//~ for(int j=0;j<6;j++){
			//~ ireoVolana[i][j]=malloc(sizeof(int)*7);
		//~ }
		
		
	return 0;
}
int*** allouer3Dint(){
	int ***x;
	x=(int ***)malloc(sizeof(int**)*12);
	for (int i=0;i<12;i++){
		x[i]=(int **)malloc(sizeof(int*)*6);
		for(int j=0;j<6;j++){
			x[i][j]=malloc(sizeof(int)*7);
		}
	}
	return x;
}
