#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int char_to_Number(char *chiffre);
double char_to_number2(char *itransf);
int puissance(int avo,int iva);
int main(){	
	char*chiffre;
	char_to_Number(chiffre);
	char_to_number2(virgule);		
	return 0;
}
int char_to_Number(char *chiffre){
		int nombre=0;
		int x=strlen(chiffre);	
		//char chiffre[]={"342721"};
		//char* chiffre;
		chiffre=malloc(30);
		free(chiffre);
		for(int i=x-1;i>=0;i--){			
				nombre+=(chiffre[i]-48)*pow(10,x-1-i);
			}			
			printf("%d",nombre+1);				
		return nombre;
	}
	
	
double char_to_number2(char *virgule){
		int nombre=0;
		int x=strlen(chiffre);
		char virgule[30]={"123.123"};
		for(int i=)
		
		return itransf;
	}
int puissance(int avo,int iva){
	int puissance=1;
	for(int i=1;i<avo;i++){
		puissance*=avo;
	}	 
		return puissance;
	}
