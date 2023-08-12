#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "MYFONCTIO.c"
int main(){
	char daty[10]=12.5/05/2023;
	
		
	return 0;
}
char mivadika(char*valiny){
	char **mamadika;
	char daty;
	mamadika=(char**)malloc(sizeof(char*)*3);
	int ligne=0,colonne=0;
	for(int i=0;i<strlen(daty);i++){
		misaraka[ligne][colonne]=daty[i];
		if(daty[i]=='/'){
			ligne++;
			colonne=0;						
		}
	}
	double day=0;int num=0;
	day=chartoDouble(daty);
	num=(day-(int)day);
		
	return mamadika;	

}
