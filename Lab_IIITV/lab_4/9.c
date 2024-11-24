#include <stdio.h>

//Name: Rajveer Chaudhari
//Roll NO: 24

void main(){

	int a;
	char c;
	printf("Enter the value\n");
	scanf("%c",&c);
	a = (int)c;
	if(97<=a && a<=122){
		printf("Its a alphabet\n");
	}
	else if(65<=a && a<=90){
		printf("Its a alphabet\n");
	}
	
	else{
		printf("Its not a alphabet\n");
	}

}
