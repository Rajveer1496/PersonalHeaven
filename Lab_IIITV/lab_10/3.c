#include <stdio.h>

void main(){

	printf("Name: Rajveer Chaudhari\nRoll NO: 202411024\n");
	
	FILE *file = fopen("3.txt","r");
	printf("Current elements in file are \n");	
	
	char c= fgetc(file);
	putchar(c);
	
	for(char c ;c != EOF; c = fgetc(file) ){
		putchar(c);
	}
	
	fclose(file);
	
	FILE *file2 = fopen("3.txt","w");
	
	for(char ch; getchar() != '~';){
	printf("Enter Values you want to add\n");
	
	char a;
	scanf("%c",&a);
	fprintf(file2," %c",a);
	}
	printf("\n");
	fclose(file2);
} 
