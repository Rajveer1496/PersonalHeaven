#include<stdio.h>

void main(){

	printf("Name: Rajveer Chaudhari\nRoll NO: 202411024\n");
	
	int base,height,c,d,i,r,m,n;	
	printf("Enter the Value of Side of Right Angled Triangle\n");
	scanf("%d",&height);
	
	i=1;
	printf("*\n");
	
	while(i<height){
		r=1;
		printf("* ");
			while(r<=i){
				printf("* ");
				r++;
			}
		
		i++;
		printf("\n");
	}
	
	int side,b,k;
	
	printf("Enter the Value of Side\n");
	scanf("%d",&side);
	r=1;
	
	while(side>=0){
	m=0;
		while(m<r){
			printf(" ");
			m++;}		
		
		//Blah Blah Blah
		n=0;
		while(n<side){
			printf("*");
			n++;}
		
		//Blah Blah Blah
		
	m=0;	
		while(m<r){
			printf(" ");
			m++;}
			
	r++;
	side=side-2;
	printf("\n");
			
	}
}
