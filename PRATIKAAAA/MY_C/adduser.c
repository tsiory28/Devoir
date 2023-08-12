#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	printf("\n********\n*******Le programme consiste a creer un utilisateur par adduser********\n*******\n");
	char *userName;
	char *passwd;
	char all[20];	
	userName=malloc(sizeof(char)*20);
	printf("Entrez le nom de l'utilisateur:\n");
	scanf("%s",userName);
	passwd=malloc(sizeof(char)*20);
	printf("Entrez le mot de passe\n");
	scanf("%s",passwd);
	sprintf(all,"sudo mkdir /home/%s",userName);
	//fopen();
	system(all);
	
	
	
	
	
	
	return 0;
}

