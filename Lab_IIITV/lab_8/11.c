/*
Create a calculator where each
arithmetic operation is implemented as a user-defined function (using
switch cases).
*/

#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
float div(float a, float b);

void main(){

int n1, n2;

printf("Enter the value of n1: ");
scanf("%d",&n1);

printf("Enter the value of n2: ");
scanf("%d",&n2);

printf("\n");

printf("Enter 1 for addition\n");
printf("Enter 2 for subtraction\n");
printf("Enter 3 for multiplication\n");
printf("Enter 4 for division\n");

int choose;
scanf("%d",&choose);

printf("\n");

switch(choose){

case 1:
printf("Addition of two number is %d\n",add(n1, n2));
break;

case 2:
printf("SUbtraction of two number is %d\n",sub(n1, n2));
break;

case 3:
printf("Multiplication of two number is %d\n",mult(n1, n2));
break;

case 4:
printf("Division of two number is %.2f\n",div((float)n1, (float) n2));
break;

default:
printf("Enter the valid number\n");

}

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}

int add(int a, int b){
return a+b;
}

int sub(int a, int b){
return a-b;
}

int mult(int a, int b){
return a*b;
}

float div(float a, float b){
return a/b;
}


