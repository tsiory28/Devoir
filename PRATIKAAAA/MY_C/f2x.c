#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main (){
	char f2x[20];
	char x[10];
	int p=0,q=0,r=0;
	scanf("%[^\n]",f2x);
	scanf("%s",x);
	for(int i=0;i<strlen(f2x);i++){
		for(int j=i+1;j<strlen(f2x);j++){
			if(f2x[i]=='x'){
				q++;
				strcpy(x,f2x[q]);
				p=atoi(x);		
			}
		}		
	}
		printf("y==>%d",r);
	
	return 0;
}
