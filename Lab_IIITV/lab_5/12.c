#include<stdio.h>
#include<ctype.h>

void main(){
	
	printf("Name:Rajveer Chaudhari\nRoll No:202411024\n");
	
	char a;
	printf("Enter Lower case alphabet\n");
	scanf("%c",&a);
	printf("Upper case will be: %c\n",toupper(a));
	
	printf("Enter Upper case alphabet\n");
	scanf(" %c",&a);
	printf("Lower case Will be: %c\n",tolower(a));
	
	printf("Enter Alphabet or Digit\n");
	scanf(" %c",&a);
	
	if(isalpha(a)==1024){
		printf("You have entered Alphabet\n");
	}
	if(isdigit(a)==2048){
		printf("You have Entered Digit\n");
	}
}
