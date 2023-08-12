#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    char string[234];
    char valiny[4]="abcd";
    char baliny2[4]="ABCD";
    char caliny3[4]="0123";
    char daliny4[40]="AlbusDumbledorelivesINthe8769thBCE";
    scanf("%[^\n]", string);
  
        if(string[1]=='0'){
			
			//string[x];
            strcpy(string,valiny);
        }
         else if(string[1]=='1'){
			
			//string[x];
            strcpy(string,baliny2);
        }
         else if(string[1]=='2'){
			//int x=4;
			//string[x];
            strcpy(string,caliny3);
        }
        else{
			//int x=4;
			//string[x];
            strcpy(string,daliny4);
        }

    

   printf("%s",string);

    return 0;
}
