#include <stdio.h>

void main(){

	printf("Name:Rajveer Chaudhari\nRoll No:202411024\n");

	char a;
	int b;
	
	printf("Enter Char or Digit\n");
	scanf(" %c",&a);
	
	b = (int)a;
	
	if(48<=b && b<=57){
		printf("You have entered a Digit\n");		
	}
	else if((65<=b && b<=90) || (97<=b && b<=122)){
		printf("You have entered a Alphabet\n");
	}
}
