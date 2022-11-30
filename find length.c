#include<stdio.h>

main(){
	
	int a;
	int b;
	
	int n[]= {10,20,30,40,50,60,70};
	
	a = sizeof(n);
	b = sizeof(int);
	
	int l = a/b;
	
		printf ("length=%d \n", l);
		
	}
