#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*void delay(){
	for(int i=0; i<10000; i++){
		for(int j=0; j>100; j++){}
	}		
		}		
int main(){
	FILE *ptr;
	char c;
	ptr=fopen("Vazo_misoma","r");
	c=fgetc(ptr);
	printf("\n");	
	while(c!=EOF){
			delay();
			printf("%c",c);
			c=fgetc(ptr);		
		}
	
	
	return 0;
}
*/
int main(){
		char nombre_virgule[20];
		printf("Entrez un nombre decimal\n");
		scanf("%c",nombre_virgule);
		find_virgule(nombre_virgule);
		
		return 0;
	}
int find_virgule(char* chaine){
	int place=1;
		for(int i=0;i<strlen(chaine);i++){
			if(chaine[i]=='.')
				place=chaine[i];
			}
			printf("%d",place);
		return place;
	}

