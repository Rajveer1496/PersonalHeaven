/*
Demonstrate call by reference. Swap two numbers using both call by value and call by reference.
*/

#include<stdio.h>

void swap1(int *a, int *b){

printf("Call by refrence\n");

int p = *a;
*a = *b;
*b = p;

printf("Swap values are\n");
printf("n1 = %d and n2 = %d\n",*a,*b);

}

void swap2(int x, int y){

printf("Call by value\n");

int v = x;
x = y;
y = v;

printf("Swap values are\n");
printf("n1 = %d and n2 = %d\n",x,y);

}

void main(){

int n1, n2;

printf("Enter the value of n1: ");
scanf("%d",&n1);

printf("Enter the value of n2: ");
scanf("%d",&n2);

swap1(&n1, &n2);

swap2(n1,n2);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}

