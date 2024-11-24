#include<stdio.h>

void main(){
	printf("Name:Rajveer Chaudhari\nRoll No: 202411024\n");
	
	int arr[5],c;
	
	for(int i=0; i<5;i++){
		printf("Enter Number\n");
		scanf("%d",&arr[i]);
	}
	
	c = arr[0];
	
	for(int i=0;i<5;i++){
		
		if(arr[i] > c){
			c = arr[i];
		}
	}
		printf("largest Number is:%d\n",c);
	
}