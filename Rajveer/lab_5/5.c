#include <stdio.h>

void main(){

	printf("Name: Rajveer Chaudhari\nRoll No: 202411024\n");

	int a,b,i=2;
	printf("Enter the number\n");
	scanf("%d",&a);
	
	while(i<a){
		b = a%i;
		if(b==0){
			printf("its Not prime\n");
			break;
		}
		i++;
	
	}
	if(b!=0){
		printf("It is Prime\n");
	}


}
