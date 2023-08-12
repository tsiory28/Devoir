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
}student_data;
int line_number();
student_data* scan_data(int line, student_data* val);
void trie(student_data* val,int line);
void print_data(student_data* val, int line);

int main(){
	student_data* val = NULL;
	int line = line_number();
	val = malloc(sizeof(student_data)*line);
	val = scan_data(line, val);
	trie(val, line);
	print_data(val, line);
	printf("SUCCESS");
	
	return 0;
}

void trie(student_data* val,int line){
    student_data tmp;
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
    printf("Loading sort.....\n");
}

int line_number(){
	char isa[255];
	char s[50] = "/home/safidison/Documents/sinfo.csv";
	char ad[ta] = "cat ";
	FILE *asa = popen((strcat(strcat(ad,s),"| wc -l")), "r");
	fgets(isa, 255,  asa);
	int a = atoi(isa);
	return a;
}

student_data* scan_data(int line, student_data* val){
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
void print_data(student_data* val, int line){
	FILE* fpc = NULL;
	fpc = fopen("/home/safidison/Documents/student_info.csv","w+");
	for(int i=0;i<line;i++){
		fprintf(fpc, "%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n", val[i].last_name,val[i].name,val[i].tel,val[i].email,val[i].adress,val[i].date,val[i].place,val[i].bacc,val[i].sex,val[i].CIN,val[i].git);
	}
	fclose(fpc);
}

