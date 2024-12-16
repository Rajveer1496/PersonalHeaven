#include <stdio.h>

//Name: Rajveer Chaudhari
//Roll NO: 24

void main(){
	printf("Name: Rajveer Chaudhari\nRoll NO:24\n");
	float a=1,b,c;
	
	printf("Enter the number for which you want the factorial\n");
	scanf("%f",&b);
	c=b;
	while(b>=1){
		a = a*b;
		b--;
	}
	printf("%.2f! = %.2f\n",c,a);

}
