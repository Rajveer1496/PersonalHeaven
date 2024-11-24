#include <stdio.h>

void  main(){
	printf("Name: Rajveer Chaudhari\nRoll NO:202411024\n");
	
	char a;
	
	FILE *file = fopen("2.txt","r");
	
	char ch = fgetc(file); //to printf first char
	putchar(ch);
	
	for(char ch ;ch !=EOF ;ch = fgetc(file)){
		putchar(ch);
	}
		   
	fclose(file);	
}
