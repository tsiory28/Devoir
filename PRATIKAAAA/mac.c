#include <stdio.h>
#include <string.h>
typedef struct PC{
	char mac[50];
	char user[20];
	char marque[20];
}PC;
int main(){
	
	//PC tsiory={"fe80::1a30:a887:aecc:5521","tsiory-28","panasonic"};
	//printf("%s\n%s\n%s\n",tsiory.mac,tsiory.user,tsiory.marque);
	//etudiant n28={"RANDIAMITANDINA","Tsiory Fanambinana","25/02/02","tsioryfanamby@gmail.com"};
	PC L1[46];
	for(int i = 0; i<46;i++){
		sprintf(L1[i].mac,"mac-%d %s ", i+1,fichier[i]);
		sprintf(L1[i].user,"user-%02d %s ", i+1,fichier[i]);
		sprintf(L1[i].marque,"marque-%02d %s ", i+1,fichier[i]);
	}
	for(int i = 0; i<46;i++){
		
		printf("L1[%02d]:\n\t%s\n\t%s\n\t%s\n",i+1,/*20,*/L1[i].mac,L1[i].user,L1[i].marque);
	}
	
	return 0;
}
char*maka_fichier(char *valiny){
	
    FILE *fichier;
    ///char mac[50] = "/home/mit/Documents/structure/mac.csv";
    char ligne[1024]; 

    fichier = fopen("/home/mit/Documents/structure/mac.csv", "w+");  

    if (fichier == NULL) {
        fprintf(stderr, "Impossible d'ouvrir le fichier.\n");
        return 1;
    }


    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        
        char *champ = strtok(ligne, "|");
        while (champ != NULL) {
            printf("%s ", champ);  
            champ = strtok(NULL, "|");
        }
        printf("\n");
    }
    for(int i=0;i<sizeof(fichiers);i++){
		fichier[i]=valiny[i];
	}

    fclose(fichier);  
	
	
	
	
	return valiny;
}
