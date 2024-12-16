#include<stdio.h>

void main(){
	printf("Name:Rajveer Chaudhari\nRoll No: 202411024\n");
	
	int ar[10];
	
	for(int i=0;i<5;i++){
		printf("Enter The number\n");
		scanf("%d",&ar[i]);
	}
	
	for(int i=0;i<5;i++){
		printf("%d\n",ar[i]);
	}
}