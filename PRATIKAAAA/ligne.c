#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	char**maka=malloc(sizeof(char*)*20);
	for(int i=0;i<20;i++){
		maka[i]=malloc(30);
	}
	FILE *text;
	text=fopen("/home/mit/Documents/structure/mac.csv","w+");
	FILE *lire=fopen("/home/mit/Documents/strucure/mac.csv","r");
	//fgetc(text);
	char liste[200];
	for(int i=0;i<=18;i++){
		fgets(liste,200,stdin);
		fprintf(text,"%s",liste);
	}
	for(int i=0;i<=18;i++){
		printf("%s\n",text[i]);
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
