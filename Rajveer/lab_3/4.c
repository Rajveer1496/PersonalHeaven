#include <stdio.h>

void main(){
	
	int a;
	printf("Enter the year: \n");
	scanf("%d",&a);
	if((a%4)==0){
		printf("It is a Leap Year\n");
	}
	else{
		printf("Its not a Leap Year\n");
	}

}
