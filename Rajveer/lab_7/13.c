#include<stdio.h>

void main(){

printf("Name: Rajveer Chaudhari\nRoll No:202411024\n");

int a, b;
printf("Enter the value of a: ");
scanf("%d", &a);

printf("Enter the value of b: ");
scanf("%d", &b);

int *p = &a;
int *q = &b;

int sum = *p+*q;

printf("Sum is %d\n",sum);

}