#include<stdio.h>

void main(){
	
	printf("Name:Rajveer Chaudhari\nRoll No:202411024");
	
	int arr[5],b;
	
	for(int i=0; i<5;i++){
		printf("Enter Number\n");
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
		
		if(arr[i] != 0){
				
			b = arr[i];
			
			for(int j=0;j<5;j++){
				
				if(i != j){
					if(arr[j] == b){
						
						arr[j]=0;
						printf("%d and %d Number were same\nDeleting Number %d\n",i+1,j+1,j+1);
					}
				}
			}
		}
	}
	
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
}