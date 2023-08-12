#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	FILE *text;
	text=fopen("/home/mit/Documents/ttt","w+");
	FILE *lire=fopen("/home/mit/Documents/ttt","r");
	//fgetc(text);
	char liste[200];
	for(int i=0;i<7;i++){
		fgets(liste,200,stdin);
		fprintf(text,"%s",liste);
	}
	
	if(text==NULL){
		printf("erreur de l'ouverture du fichier");
		exit(1);
	}
	fclose(text);
		///printf("AAA");
	char l;
	//for(int i=0;i!=EOF;i++){
	 while(!feof(lire)){
		l=fgetc(lire);
		printf("%c",l);
	}
	
	///printf("B");
	fclose(lire);
	return 0;
}
