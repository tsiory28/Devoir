#include <stdio.h>
char lmtoascii (char c);
char itoascii (int i);
char LMtoascii(int j);
int main(){
	printf("VOILA LES NMBRES ASCII DES MAJUSCULES ,MINUSCULES ET LES NOMBRS DÉCIMAUX\n");
	printf("\n\n\n");
	printf("\nLes minuscules sont:\n");
	for(int i=0;i<26;i++)
		printf("%c = %d\t",lmtoascii(i),lmtoascii(i));
		
	printf("\nLes majuscules sont:\n");		
	for(int j=0;j<26;j++){	
		printf("%c = %d\t",LMtoascii(j),LMtoascii(j));
	}
	printf("\nLes nombres decimaux sont:\n");
	for(int n=0;n<25;n++){
		printf("%c = %d\t",itoascii(n),itoascii(n));
	}
	
	
	return 0;
}

char itoascii (int i){
	return '0' + i;
}

char lmtoascii (char c){
	
	return 'a' + c;
}

char LMtoascii(int j){
	return 'A' + j; 
}
