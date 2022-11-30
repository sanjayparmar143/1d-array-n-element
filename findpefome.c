#include<stdio.h>

main(){
	
	int a[5]; 
	
	int x = 1;
	int z = 0;
	
	for (z=0; z<5; z++){
		
	printf("Enter array %i : ",z);
	scanf("%d",&a[z]);
	
	x = x * a[z];
	
}

	printf("product :- %i\n",x);
}
