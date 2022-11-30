#include<stdio.h>

main(){
	
	int a[10]= {10,20,30,40,50,60,70,80,90,100};
	
	int b = 0;
	int c = 0;
	float average;
	
	for (c=0; c<10; c++){
		
		b = b +a[c];
		
	}
	
	average = (float)b / c;
	
	printf(" average :- %f",average);
}
	
