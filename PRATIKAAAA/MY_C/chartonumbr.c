#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int chartoNumber(char*caract);
int main(){
	char *caract=NULL;
	chartoNumber(caract);		
	return 0;
}
int chartoNumber(char *caract){
	int nombre=0,x;
	char nom[30]="342721";
	
	x=strlen(nom);
	for(int i=x-1;i>=0;i--){
			nombre+=(nom[i]-48)*pow(10,x-1-i);
		}
		printf("%s\n%d",nom,nombre);
	return nombre;
	}

