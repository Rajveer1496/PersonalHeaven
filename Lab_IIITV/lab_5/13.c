#include<stdio.h>

void main(){

	printf("Name:Rajveer Chaudhari\nRoll No:202411024\n");

	char a;
	int b;
	printf("Enter lower case alphabet\n");
	
	scanf(" %c",&a);
	
	b = (int)a - 32;
	
	printf("Upper case will be: %c\n",(char)b);
}
