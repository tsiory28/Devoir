#include <stdio.h>
#include <string.h>

int main(){
	char texte[20]="Hello World!!";
	printf("\nLongeur du texte =%d\n",strlen(texte));
	for(int i=0;i<=strlen(texte);i++){
		
		
		printf("%c\t=%d\t",texte[i],texte[i]);
		
		printf("Code ascii");
	}
	
	printf("\nLe texte a l'envers:\n");
	for(int i=strlen(texte);i>=0; i--)
		printf("%c",texte[i]);
	
	return 0;
}
