#include <stdio.h>
int main(){
	int a=7;
	int b=3;
	b = ++a;
	printf("a = %d \t b = %d\n",a, b);
	
	a=7; b=3;
	b = (a++);
	printf("a = %d \t b = %d\n",a ,b);
	
	int c=2;
	
	printf("a-b-c =%d \ta-(b-c) =%d\n",a-b-c ,a-(b-c));
	
	
	printf("a/b/c =%d\t a/(b/c) =%d\n"a/b/c, a/(b/c));
	
	
	return 0;
 }
