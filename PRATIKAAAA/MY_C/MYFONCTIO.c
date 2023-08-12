int chartoNumber(char *caract){
	int nombre=0,x;
	x=strlen(caract);
	for(int i=x-1;i>=0;i--){
			nombre+=(caract[i]-48)*pow(10,x-1-i);
	}
	return nombre;
}
int find_virgule(char *chaine){
	int place=strlen(chaine);
		for(int i=0;i<place;i++){
			if(chaine[i]=='.')
				return i;
		}
			
		return place;
}
char **manasaraka(char*valiny){
    char**misaraka;
    misaraka=(char**)malloc(sizeof(char*)*3);
    for(int i=0;i<3;i++){
        misaraka[i]=(char*)malloc(100); 
    }
    int k=0;
    for(int i=0;i<find_virgule(valiny);i++){
        misaraka[0][i]=valiny[k];
        k++;
    }
    int u=0;
    for(int i=k+1;i<strlen(valiny);i++){
        misaraka[1][u]=valiny[i];
        u++;
    }
    return misaraka;
}
double chartoDouble(char *valiny){
    double doubla=0.0;
    char**stock=manasaraka(valiny);
    int y=strlen(stock[1])*(-1);
    doubla=(double)(chartoNumber(stock[0])+(chartoNumber(stock[1])*(pow(10,y))));
    return doubla;
}
