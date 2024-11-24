#include <stdio.h>

void main(){
	
	int a,c,d,e;
	e=a;
	float b;
	//bool r,p;
	printf("Enter value of Two Numbers\n");
	scanf("%d %d",&a,&c);
	//printf("Enter 0 or 1 For boolean argument\n");
	//scanf("%d %d",&r &p);
	
//Arithmatic Operators
	printf("Sum of these two no is: %d\n",a+c);
	printf("Subtraction of these two no is: %d\n",a-c);
	printf("Multiplication of these two no is: %d\n",a*c);
	printf("Division of these two no is: %d\n",a/c);
	printf("Modulo Division of these two no is: %d\n",a%c);
	
//Relational Operators
	if(a==c){printf("Two numbers are equal\n");}
		else if(a!=c){printf("Two numbers are not equal\n");}
		
	if(a>c){printf("First number is bigger than second\n");}
		else if(a<c){printf("Second number is bigger than First\n");}
	
	if(a>=c){printf("First no is greater than or equal to second no\n");}
		else if(a<=c){printf("Second no is greater than or equal to first no\n");}
	
/*%Logical Operators
	printf("And operation of these two boolean argument is: %d\n",(r&&p));
	printf("Or operation of these two boolean argument is: %d\n",(r||p));
	printf("Not operation for first boolean argument is: %d\n",(!r));
*/
	
//Bitwise Operator
	printf("BitWise And operation for two numbers is %d\n",(a&c));
	printf("BitWise OR operation for two numbers is %d\n",(a|c));
	printf("BitWise XOR operation for two numbers is %d\n",(a^c));

//Assignment Operator
	d=0;
	printf("Value of another var is now %d\n", d);
	a+=1;
	printf("First no +1 is: %d\n",a);
	a=e;
	a-=1;
	printf("First no -1 is: %d\n",a);
	a=e;
	a*=3;
	printf("First no X 3 is: %d\n",a);
	a=e;
	a/=2;
	printf("First no /2 is: %d\n",a);
	
//Misc Operator
	printf("Size of INT var is: %ld \n",sizeof(a));
	printf("Size of float var is: %ld \n",sizeof(b));;
	
	
	


}
