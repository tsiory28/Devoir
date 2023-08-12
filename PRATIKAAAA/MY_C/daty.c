#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "MYFONCTIO.c"
#define jour 86400
#define minute 60
#define heure 3600
#define ans 31536000

int main(){
    char *date="12/05/2023";
    char **misaraka;
    misaraka=(char**)malloc(sizeof(char*)*3);//=manasaraka(date);
    //date=malloc(30);
   /* int date2=0,mois=0,ans=0;
    for (int i=0;i<2;i++){
        date2=chartoNumber(date[i]);     
    }
    for(int i=3; i<5; i++){
        mois=chartoNumber(date[i]);
    }
    for(int i=6;i<9;i++){
        ans=chartoNumber(date[i]);
    }
    printf("%d\n%d\n%d",date2,mois,ans);
    return 0;
}*/
	
	return 0;
}




char **mivadika(char*valiny){
	char**misaraka;
	misaraka=(char*)malloc(sizeof(char*)*4);
	for(int i=0;i<strlen(date);i++){		
		misaraka[i]=manasaraka(date);
		printf("%s\n",misaraka);
	}
	for (int i=0;i<3;i++){
		misaraka[i]=chartoNumber(manasaraka[i]);
		printf("%s\n",misaraka[i]);
	}

	return misaraka;
}

