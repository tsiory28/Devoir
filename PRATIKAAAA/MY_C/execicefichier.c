#include <stdlib.h>
#include <stdio.h>
#include <math.h>




int main(){
	
	FILE * f;
	f=fopen("periodique.ods","w+");
	if(f==NULL){
		exit(1);
    }
    fprintf(f,"Angle,sinus,cosinus/n"); 
	double i;
	for(i=0.0;i<=360;i++){
		double sinangle=sin(i);
		double cosangle=cos(i);
		fprintf(f,"%f,%f,%f\n",i,sinangle,cosangle);
	}
		fclose(f);
		
	}
