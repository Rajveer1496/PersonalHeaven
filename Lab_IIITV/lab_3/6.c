#include <stdio.h>

void main(){
	int a,b,c,i=0,o;
	printf("Enter Value of N:\n");
	scanf("%d",&a);
	printf("Even NO:\n");
	while(i<=a){
		if((i%2)==0){
			printf("%d, ",i);
		}
		i=i+1;
	}

	i=0;
	printf("\nOdd No: \n");
	while(i<=a){
		if((i%2)!=0){
			printf("%d, ",i);
		}
		i=i+1;
	}
	printf("\n");
	

}
