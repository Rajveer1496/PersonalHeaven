#include <stdio.h>
//Name:Rajveer Chaudhari
//Roll No: 24

void main(){
	printf("Name:Rajveer Chaudhari\nRoll No: 24\n");
	
	int a,b,i=1;
	printf("Enter the value of First number:\n");	
	scanf("%d",&a);
	
	while(i==1){
		printf("Enter Value of Next number\n");
		scanf("%d",&b);
		a = a+b;
		
		printf("Enter 1 if you want to add another number else Enter 0\n");
		scanf("%d",&i);	
	}	
	
	printf("Sum of all given numbers is %d\n",a);


}
