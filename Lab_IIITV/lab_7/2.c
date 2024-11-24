#include<stdio.h>

void main(){
	
	printf("Name:Rajveer Chaudhari\nRoll No:202411024\n");
	int arr[5];
	int b=0;
	
	for(int i=0;i<5;i++){
		printf("Enter Number\n");
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
		b = b + arr[i];
	}
	
	printf("Sum: %d\n",b);
}