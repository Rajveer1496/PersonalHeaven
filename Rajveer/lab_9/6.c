/*
Write a C program to find the factorial of a range of numbers using the static storage class.
*/

#include<stdio.h>

int fac(int d){

static int l = 1;

if((d == 1) || (d == 0)){

return l;

}

else{

l = l*d;
return fac(d-1);

}

}

void main(){

int a;
printf("Enter the number for factorial: ");
scanf("%d",&a);

int t = fac(a);

printf("Factorial of %d is %d\n",a,t);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}


