#include <stdio.h>

void main(){
	
	int side,b,c,d,i,r,m,n,k;
	
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
