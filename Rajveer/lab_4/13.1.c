#include<stdio.h>

//Name: Rajveer Chaudhari
//Roll No: 24

void main()
{
int a,b, c , d , e, f, g;

printf("Enter the marks of Subject 1:");
scanf("%d", &a);

printf("\nEnter the marks of Subject 2:");
scanf("%d", &b);

printf("\nEnter the marks of Subject 3:");
scanf("%d", &c);

printf("\nEnter the marks of Subject 4:");
scanf("%d", &d);

printf("\nEnter the marks of Subject 5:");
scanf("%d", &e);

printf("\nEnter the marks of Subject 6:");
scanf("%d", &f);



printf("\nThe Total Marks are %d\n", a+b+c+d+e+f);

g= (a+b+c+d+e+f)/6;

if(g>=90){
	g=1;
	}
	
else if(75<=a && a<=89){
	g=2;
	}
	
else if (60<=a && a<=74){
	g=3;
	}
	
else if (45<=a && a<=59){
	g=4;
	}
	
else if (35<=a && a<=44){
	g=5;
	}
	
else if (a<=34){
	g=6;
	}
	


switch(g){
case 1:
	printf("\nThe Grade Scored is A\n");
	break;

case 2:
	printf("\n The Grade Scored is B\n");
	break;
	
case 3:
	printf("\n The Grade Scored is C\n");
	break;
	
case 4:
	printf("\n The Grade Scored is D\n");
	break;

case 5:
	printf("\n The Grade Scored is P(Just Pass)\n");
	break;
	
case 6:
	printf("\n The Grade Scored is F\n");
	break;
	}

}
