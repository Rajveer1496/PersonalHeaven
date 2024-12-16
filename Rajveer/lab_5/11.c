#include<stdio.h>

void main(){
	
	printf("Name:Rajveer Chaudhari\nRoll No:202411024\n");
	
	//Power of Function
	
	int b,p,c;		
	
	printf("Enter Value of Base and Power\n");
	scanf("%d %d",&b,&p);
	
	c=b;
	
	for(int i=0;i<(p-1);i++){
		
		c = c*b;
	}		
	
	printf("Ans: %d\n",c);
	
	
	//Square root of function
	
	printf("Enter The number you want to square root of\n");
	
	double s,z;
	int i=0,t;
	
	scanf("%lf",&s);
	
	while((i*i)<=s){
		i=i+1;
	}
	
	i=i-1;
	
	t = s-(i*i);
	z = (double)t/((double)i*2);
	
	printf("Square Root: %0.2lf\n",((double)i+z));
}
