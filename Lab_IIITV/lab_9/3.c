#include <stdio.h>

int fib();

void main(){
	printf("Name: Rajveer Chaudhari\nRoll No: 202411024\n");
	
	int r;
	
	printf("Enter the range: ");
	scanf("%d",&r);
	
	printf("\n%d terms of Fibonnaci series will be:\n",r);
	fib(r,0,1,1);
}

int fib(int r,int a,int b,int i){
	
	if(i == r){
		return 0;
	}
	else{
		printf("%d\n",(a+b));
		i = i+1;
		fib(r,b,(a+b),i);
	}
}
