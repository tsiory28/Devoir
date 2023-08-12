#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	
	//return 0;

/*	int puissance=1;
		int avo=1;
		int iva=1;
		scanf("%d",&iva);
		scanf("%d",&avo);
	for(int i=1;i<avo;i++)
	{
		puissance*=iva;
	}									
		printf("%d",puissance);
//puiss(avo,iva);
		return 0;
//	}
//int puiss(int avo,int iva){				
//return puissance;
}*/		int so=0;	
		char chiffre[30]={"342721"};
				
		//printf("%c",chiffre[0]);
		for(int i=strlen(chiffre)-1;i>=0;i--)
			{
				so+=(chiffre[i]-48)*pow(10,strlen(chiffre)-1-i);
			}
			
			printf("%s\n%d",chiffre,so+1);
		
		return 0;
			
}		
