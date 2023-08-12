#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
w    FILE *fichier;
    char mac[50] = "/home/mit/Documents/structure/mac.csv";
    char ligne[1024]; 

    fichier = fopen("/home/mit/Documents/structure/mac.csv", "w+");  

    if (fichier == NULL) {
        fprintf(stderr, "Impossible d'ouvrir le fichier.\n");
        return 1;
    }


    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        
        char *champ = strtok(ligne, ",");
        while (champ != NULL) {
            printf("%s ", champ);  
            champ = strtok(NULL, ",");
        }
        printf("\n");
    }

    fclose(fichier);  

    return 0;
}
