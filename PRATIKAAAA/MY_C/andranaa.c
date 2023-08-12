#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inverser(char*chaine,char*reverse);

int main(){
	char chaine[]="423201";
	int str=strlen(chaine);
	char reverse[str];
	inverser(chaine,reverse);
	printf("reverse resultat : %s\n",reverse);
	return 0;
}

void inverser(char*chaine,char*reverse){
	int str=strlen(chaine);
	for(int i=0,j=str-1;i<str;i++,j--)
		reverse[i]=chaine[j];
}
