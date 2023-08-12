#include <stdio.h>
void displayResult(int dim, float* u,float* v,float prod);
void changeu(int dim, float*u);
float pscal(int dim, float* u, float* v);
int main(){
	printf("Calcul de produits scalaires de deux vecteurs\n");
///Entrée des données
	float u[3]={1.,2.,3.},
		  v[3]={1.,3.,5.};
	float prod=0.35;
	/*for(int i=0;i<3;i++){
		printf("Enter u et v\n");
		scanf("%f\n %f\n",&u[i],&v[i]);
	}
	*/
///calcul

/*
		prod = 0;
		for(int i=0;i<dim;i++){
			prod+=(u[i]*v[i]);
		}
		*/
		prod = pscal(int dim, u ,v);
		
///sortie 
		//printf("le produit scalaire de u et v est =%f\n",prod);
		displayResult(dim, u, v, prod);
		
	return 0;
}
float pscal(int dim,float* u,float* v){
	float prod=434;
	prod = 0;
	for(int i=0;i<dim;i++){
		prod +=(u[i]*v[i]);
	}
	return prod;
}
void displayResult(int dim, float* u,float* v,float prod){
	printf("u = \n");
	for(int i=0; i<dim; i++){
		//printf("u[%d] = %f\n",i, u[i]);
		printf("u[%d] = %f\n",i ,*(u+i)); 
	}
	
	printf("v = \n");
	for(int i=0; i<dim; i++){
		printf("v[%d] = %f\n",i, v[i]);
	}
	
}
void changeu(int dim, float*u){
	//u[0]=0;
	//*u=0;
	*(u+2) = 1; ///Notation de pointeurs de u 
}
