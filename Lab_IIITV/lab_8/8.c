/*
Swap two numbers using functions.
*/

#include<stdio.h>

void swap(int *a, int *b);

void main(){

int x,y;

printf("Enter the value of x:");
scanf("%d",&x);

printf("Enter the value of y:");
scanf("%d",&y);

swap(&x,&y);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}

void swap(int *a, int *b){

int p = *a;
*a = *b;
*b = p;
printf("x=%d and y=%d\n*", *a,*b);

}


