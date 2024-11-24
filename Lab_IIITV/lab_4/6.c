#include <stdio.h>
#include <math.h>

//Name: Rajveer Chaudhari
//Roll NO: 24

void main(){

	double a,b,c,D,x,y;
	
	printf("for Format \nax^2 + bx + c = 0\nEnte values of a,b,c\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	D = (b*b)-(4*a*c);
	
	if(D>=0){
		x = (-b + sqrt(D))/(2*a);
		y = (-b - sqrt(D))/(2*a);
		printf("Roots are X=%lf,%lf\n",x,y);
	}
	else{printf("It don't has any roots\n");}
}
