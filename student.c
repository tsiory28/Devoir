#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ta 10000
typedef struct{
	char prenom[255];
	char nom[255];
	char tel[255];
	char email[255];
	char adress[255];
	char date[255];
	char place[255];
	char bacc[255];
	char sex[255];
	char CIN[255];
	char git[255];
}student;
int line_number();
student* scan_data(int line, student_data* val);
void trie(student* val,int line);
void print_data(student* val, int line);

int main(){
	student* val = NULL;
	int line = line_number();
	val = malloc(sizeof(student_data)*line);
	val = scan_data(line, val);
	trie(val, line);
	print_data(val, line);
	printf("parametrage reussie");
	
	return 0;
}

void triage(student* val,int line){
    student tmp;
    int stop = 0;
    while (stop==0){
        stop = 1;
        for (int i=1;i<line-1;i++){
            if (strcmp(val[i].last_name,val[i+1].last_name)>0){
                tmp = val[i];
                val[i] = val[i+1];
                val[i+1] = tmp; 
                stop = 0;
            }
        }
    }
}

int line_number(){
	char isa[255];
	char s[50] = "/home/tsiory/Documents/structure/info.csv";
	char ad[ta] = "cat ";
	FILE *asa = popen((strcat(strcat(ad,s),"| wc -l")), "r");
	fgets(isa, 255,  asa);
	int a = atoi(isa);
	return a;
}

student* scan_data(int line, student_data* val){
	FILE* spc = NULL;
	spc = fopen("/home/tsiory/Documents/structure/info.csv","r");
	for(int i=0;i<line;i++){
		char ch[255];
		fgets(ch,255,spc);
		sscanf(ch,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]",val[i].last_name,val[i].name,val[i].tel,val[i].email,val[i].adress,val[i].date,val[i].place,val[i].bacc,val[i].sex,val[i].CIN,val[i].git);
		//printf("%s, %s, %s", val[i].pc,val[i].mac,val[i].label);
	}
	fclose(spc);
	return val;
}
void print_data(student* val, int line){
	FILE* fpc = NULL;
	fpc = fopen("/home/tsiory/Documents/structure/info.csv","w+");
	for(int i=0;i<line;i++){
		fprintf(fpc, "%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n", val[i].prenom,val[i].nom,val[i].tel,val[i].email,val[i].adress,val[i].date,val[i].place,val[i].bacc,val[i].sex,val[i].CIN,val[i].git);
	}
	fclose(fpc);
}

