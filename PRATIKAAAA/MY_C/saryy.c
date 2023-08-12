#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void delay(){
			for(int i=0; i<10000; i++){
					for(int j=0; j<100; j++)
					{}				
				}	
			}					
int main(void){	
	FILE *ptr;
	char c[1000];
	ptr=fopen("Vazo_misoma.txt","r");
	if(ptr == NULL)
		exit(EXIT_FAILURE);
	fgets(ptr,"%c",c);
	//printf("\n");
	int i=0;	
	while(ptr != EOF){
	delay();
		printf("%c",c);
		fgets(c,"%s",ptr);
		printf("%c",c[i]);
		i++;
		c = fgetc(ptr);
	}	
	printf("%s\n",c);	
	fclose(ptr);
	return 0;
}
