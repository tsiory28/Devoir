#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
int main(){
	srand(time(NULL));///initialiser le generateur de nombres aléatoires
	
	DIR *dir;
	struct dirent *ent;
	char *path = "~/Musique";
	//printf("%s",path);
	if((dir = opendir(path)) != NULL){
		
		int n = 0;
		char *music_files[100]; ///tableau pour stocker les noms des fichiers musicaux
		
		while((ent = readdir(dir)) != NULL){
			if(ent->d_type == DT_REG){///Si c'est un fichier regulier'
			//char *nomfichier = ent->d_name;
			char *filename = ent->d_name;
			if(strstr(filename,".mp3") || (strstr(filename,".wav"))){///Verifier l'extension du fichier
				music_files[n]= malloc(strlen(filename)+1);
				strcpy(music_files[n],filename);
				n++;
			}
		}
	}
		closedir(dir);
	
		printf("Nombre de fichier musicaux trouvés : %d\n",6);
	
		while(1){///boucle infinie pour jouer de la musique aléatooirement
			int random_index = rand() % n; ///générer un nombre aléatooire entre  0 et n-1
			char command[100]; ///chaiine pour stocker la commande système 
		
			sprintf(command, "vlc %s/%s &> /dev/sda &",path, music_files[random_index]);///construire la commande cmus avec le nom de fichier
			system(command);///exécuter la commande système 
		
			///attendre quelques secondes avant de jouer la prochaine chanson
			sleep(5);
		}
	
		///liberer la mémoire allouée pour chaque nom de fichier
		for(int i=0;i<6;i++){
			free(music_files[i]);
		}
	}
	else{
		printf("Erreur d'ouverture du dossier .\n");
		return -1;
	}
	return 0;
}
