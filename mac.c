#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/*	int isany_ligne;
	PC* scan_data(int line,L1* val);
	char*maka_fichier(char *valiny);

*/
typedef struct PC{
	char mac[50];
	char user[20];
	char marque[20];
}PC;
void affecta(char*line,char result[20][50],int *colums_number){
	char *word;
	*colums_number=0;
	
	word= strtok(line,"|");
	while(word != NULL && *colums_number < 20){
		strcpy(result[*colums_number],word);
		(*colums_number)++;
		word= strtok(NULL,"|");				
			
	}	
}

int main(){
	PC L1[46];
	FILE *file = fopen("/home/Documents/structure/mac.csv","r+");
	if(file==NULL){
		perror("erreur lors de l'ouverture du fichier");
		return 1;
	}
	char line[256];
	char **table =malloc (sizeof(char*)*20);
	for(int i=0;i<20;i++){
		table[i]=malloc(50);
	}
	int column_number=18;
	while(fgets(line,sizeof(line),file)){
		line[strcspn(line,"\n")]='\0';
		
	}
		affecta(line,table,&column_number);
	for(int i=0;i<column_number;i++){
		
		printf("colonne %d : %s\n",i+1,table[i]);
	}
	
	for(int i = 0; i<18;i++){
		for(int j=1;j<18;j++){
			sprintf(L1[i].mac,"mac-%d: %s ", i+1,table[i][j+1]);//,maka[i]);	
			sprintf(L1[i].user,"user-%02d: %s", i+1,table[i][j+2]);//,maka[i]);
			sprintf(L1[i].marque,"marque-%02d: %s", i+1,table[i][j+3]);//,maka[i]);
		}
	}
	
	
	for(int i = 0; i<46;i++){
		
		printf("L1[%02d]:\n\t%s\n\t%s\n\t%s\n",i+1,/*20,*/L1[i].mac,L1[i].user,L1[i].marque);
	}	
		
	return 0;
}









/*
		int isany_ligne(){
		char isa[255];
		char s[50] = "/home/tsiory/Documents/structure/mac.csv";
		char ad[ta] = "cat ";
		FILE *asa = popen((strcat(strcat(ad,s),"| wc -l")), "r");
		fgets(isa, 255,  asa);
		int a = atoi(isa);
		return a;
	}

	PC* scan_data(int line, PC *L1){
		FILE* spc = NULL;
		spc = fopen("/home/tsiory/Documents/structure/mac.csv","r");
		for(int i=0;i<line;i++){
			char ch[255];
			fgets(ch,255,spc);
			sscanf(ch,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]",val[i].last_name,val[i].name,val[i].tel,val[i].email,val[i].adress,val[i].date,val[i].place,val[i].bacc,val[i].sex,val[i].CIN,val[i].git);
			//printf("%s, %s, %s", val[i].pc,val[i].mac,val[i].label);
		}
		fclose(spc);
		return val;
	}
*/
/*
	int line_number(){
		char isa[255];
		char s[50] = "/home/safidison/Documents/sinfo.csv";
		char ad[ta] = "cat ";
		FILE *asa = popen((strcat(strcat(ad,s),"| wc -l")), "r");
		fgets(isa, 255,  asa);
		int a = atoi(isa);
		return a;
	}

	L1* scan_data(int line, L1* val){
		FILE* spc = NULL;
		spc = fopen("/home/safidison/Documents/sinfo.csv","r");
		for(int i=0;i<line;i++){
			char ch[255];
			fgets(ch,255,spc);
			sscanf(ch,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]",val[i].last_name,val[i].name,val[i].tel,val[i].email,val[i].adress,val[i].date,val[i].place,val[i].bacc,val[i].sex,val[i].CIN,val[i].git);
			//printf("%s, %s, %s", val[i].pc,val[i].mac,val[i].label);
		}
		fclose(spc);
		return val;
	}
*/
