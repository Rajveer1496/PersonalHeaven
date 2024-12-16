#include <stdio.h>

void main(){
	float a,b,c,d,e,f,g;
	int r;
	printf("Enter marks for first subject: \n");	
	scanf("%f",&a);
	c =1;
	
	do{
		printf("Enter marks of subject\n");
		scanf("%f",&b);
		a = a+b;
		c++;
		printf("Want to add marks of another subject y(1)/n(0)?\n");
		scanf("%d",&r);
	}while(r==1);
	
	e=(a/c);
	printf("you scored %f Percentage\n",e);
	
	if(e>=90){printf("You Scored grade A\n");}
	else if (75<=e && e<=89){printf("You Scored grade B\n");}
	else if (60<=e && e<=74){printf("You Scored grade C\n");}
	else if (45<=e && e<=59){printf("You Scored grade D\n");}
	else if (35<=e && e<=44){printf("You Scored grade P\n");}
	else if (e<35){printf("You have Failed exam and got F grade\n");}
}
