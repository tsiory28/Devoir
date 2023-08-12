#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *katram_folo(char *apidiro);
char*katram_zato(char*apidiro);
char*katram_arivo(char*apidiro);
int main(){
	char apidiro[3]="11";
	//char h[23];	
	printf("%s",katram_folo(apidiro));
    return 0;s
}
char *katram_folo(char *apidiro){
    char**le_isa;
    le_isa=(char**)malloc(sizeof(char*)*2);
    for(int i=0;i<2;i++){		
		le_isa[i]=malloc(sizeof(char)*20);
	}
    le_isa[0]="aotra";
    le_isa[1]="ray";
    le_isa[2]="roa";
    le_isa[3]="telo";
    le_isa[4]="efatra";
    le_isa[5]="dimy";
    le_isa[6]="enina";
    le_isa[7]="fito";
    le_isa[8]="valo";
    le_isa[9]="sivy";	
    return le_isa[atoi(apidiro)];
}

char*katram_zato(char*apidiro){
	char**isa;
	isa=(char**)malloc(sizeof(char*)*2);
	for(int i=0;i<2;i++){
		isa[i]=malloc(sizeof(char)*20);
	}
	isa[0]="folo";
	isa[1]="roapolo";
	isa[2]="telopolo";
	isa[3]="efapolo";
	isa[4]="dimampolo";
	isa[5]="enimpolo";
	isa[6]="fitopolo";
	isa[7]="valopolo";
	isa[8]="sivyfolo";
	char man=apidiro[0];	
	return isa[atoi(&man)-1]; 
}
	
char*katram_arivo(char*apidiro){
	char**isa;
	isa=(char**)malloc(sizeof(char*)*2);
	for(int i=0;i<2;i++){
		isa[i]=malloc(sizeof(char)*20);		
	}
	isa[0]="zato";
	isa[1]="ronjato";
	isa[2]="telonjato";
	isa[3]="efajato";
	isa[4]="dimanjato";
	isa[5]="eninjato";
	isa[6]="fitonjato";
	isa[7]="valonjato";
	isa[8]="sivinjato";
	char min=apidiro[0];	
	return isa[atoi(&min)-1];
}
char *mifamadika(char*apidiro){
	char *vadika;
	vadika=
	
	
}
