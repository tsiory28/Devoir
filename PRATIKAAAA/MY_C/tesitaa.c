#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include"chartoDouble.c"
double chartoDouble(char *valiny);
int main(){
    char teny[]="345678.456765";
    char**teny2=manasaraka(teny);
    for(int i=0;i<2;i++){
        printf("%s\n",teny2[i]);
    }
    printf("%ld\n",strlen(teny2[1]));
    printf("%f\n",chartoDouble(teny));
    //printf("%d",chartoNumber("45"));
    return 0;
}
double chartoDouble(char *valiny){
    double doubla=0.0;
    char**stock=manasaraka(valiny);
    int y=strlen(stock[1])*(-1);
    doubla=(double)(chartoNumber(stock[0])+(chartoNumber(stock[1])*(pow(10,y))));
    return doubla;
}