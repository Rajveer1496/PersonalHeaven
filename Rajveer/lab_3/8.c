#include <stdio.h>

void main(){
	int n,b=0,i=0;
	printf("Enter Value of n:\n");
	scanf("%d",&n);

	do{
		if((i%3)==0){
			b=b+1;		
		}
		i = i+1;	
	}
	while(i<n);

	printf("Total Numbers which can be divided by 3 is: %d\n",b);


}
