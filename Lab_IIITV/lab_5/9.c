#include <stdio.h>

void main(){

	printf("Name:Rajveer Chaudhari\nRoll NO: 202411024\n");

	double d1=0,d2=1,d3,j=3;
	
	
	printf("T1: %0.0lf\nT2: %0.0lf\n",d1,d2);
	
	for(int i=0;i<98;i++){
	
		d3 = d1+d2;
		printf("T%0.0lf: %0.0lf\n",j,d3);
		d1=d2;
		d2=d3;
		j++;
	}
}
