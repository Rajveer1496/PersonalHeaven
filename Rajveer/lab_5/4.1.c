#include <stdio.h>
#include <math.h>

//Name: Rajveer Chaudhari
//Roll NO: 24

void main(){
	printf("Name: Rajveer Chaudhari\nRoll NO:24\n");
	int a,b,c,i=0,r,d,r1,d1,p,q=1;
	
	printf("Enter the number:\n");
	scanf("%d",&a);
//To get number of digits
	
	
while(p!=a){
	p = (a)%((int)(pow(10,q)));
	q++;
		
}
	q--;
	
	

//To get digits
	while(i<q){
		
		r = a%(int)(pow(10,i));
		r1 = a%(int)(pow(10,i+1));
		
		d = (r1-r)/(int)pow(10,i);
		i++;
		printf("%d",d);	
		
	}
	printf("\n");
}
