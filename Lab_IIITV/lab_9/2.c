#include <stdio.h>

double fact();

void main(){
	printf("Name:Rajveer Chaudhari\nRoll NO: 202411024\n");
	int a;
	scanf("%d",&a);
	printf("Factorial of %d is %.0f\n",a,fact(a));
}

double fact(int a){
	int b;
	if(a==1){
		return 1;
	}
	else{
		b = a*(fact(a-1));
	}
}
