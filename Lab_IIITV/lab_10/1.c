#include <stdio.h>

void main(){
	printf("Name: Rajveer Chaudhari\nRoll NO: 202411024\n");
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	int arr2[10];	
	
	FILE *file = fopen("1.txt","w");
	
	for(int i=0; i<10; i++){
		fprintf(file,"%d ",arr[i]);
	}
	
	fclose(file);
	
	FILE *file2 = fopen("1.txt","r");
	
	for(int i=0;i<10;i++){
		fscanf(file,"%d",&arr2[i]);
		printf("%d ",arr2[i]);
	}
	printf("\n");
}
