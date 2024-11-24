#include <stdio.h>
#include <math.h>

void main(){

	printf("Name:Rajveer Chaudhari\nRoll No:202411024\n");
	
	int a,c,b=0,i=1,q;
	int r1,r2,d,p,k,m,n;
	
	printf("Enter the Number\n");
	scanf("%d",&a);
	
//To calculate No of digits

	while(b!=a){		
		b = a%(int)pow(10,i);
		i++;	
	}
	
	q = i-1; //No of digits
	

	
	p=0;
	c=0;
	
	while(p<q){
		r1=a%(int)pow(10,p);
		r2=a%(int)pow(10,p+1);
		d=(r2-r1)/((int)pow(10,p));

			k=d-1;
			n=d;
			
			while(k>0){
				n = n*k;
				k--;
			
			}
			c = c + n;
		p++;
	
	}
	
	if(c==a){
		printf("It is Strong Number\n");
	}
	else{
		printf("Its not a Strong Number\n");
	}
}
