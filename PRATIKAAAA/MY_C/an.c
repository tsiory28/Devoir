#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char R[1001];
    scanf("%[^\n]", R);
    int a=0; 
    //~ for(int i=0;i<strlen(R);i++){
        //~ if(R[i]=='-')a++;
        //~ else if(R[i]=='R'){
			//~ printf("Go %d block forward\nTurn Right\n",a);a=0;
		//~ }
		//~ else {printf("Go %d block forward\nTurn Left\n",a);a=0;}
 
    //~ }

 
    //~ printf("You ve reached your destination\n");
	for(int i=0;i<strlen(R);i++){
		for(int j=0;j<strlen(R);j++){
			if(R[i]==R[j]){a++;}
		
		}	
	}
		for(int i=0;i<=a;i++){
		printf("%c%d",R[a],a);
	}
    return 0;
}
