#include<stdio.h>
#include<math.h>

void main(){
		
		printf("Name:Rajveer Chaudhari\nRoll No:202411024\n");
		
		double a,b;
		int p;
		
		printf("Enter number you want to square root of:\n");
		scanf("%lf",&a);
		
		printf("Square root of %lf is %0.3lf\n",a,sqrt(a));
		
		printf("Enter Base and Power:\n");
		scanf("%lf %d",&b,&p);
		
		printf("%d Power of %lf is %0.3lf\n",p,b,pow(b,p));
}
