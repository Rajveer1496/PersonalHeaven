#include <stdio.h>

//Name: Rajveer Chaudhari
//Roll NO: 24

void main(){
	int a;
	printf("Enter a Integer\n");
	scanf("%d",&a);
	
	if(a!=0){
	if(a%2==0){
		printf("It is a even no\n");
	}
	else{
		printf("Its odd no\n");
	}
	
	if(a>0){
		printf("It is a positive no\n");
	}
	else if(a<0){
		printf("It is a Negative no\n");
	}
	}
	else{printf("Zero is not even or odd nor positive or negative\n");}
}
