/*
Program to use of type def for the pointer variables' point of view with examples.
*/

#include<stdio.h>

void main(){

typedef int* ptr;

int a,b;
ptr ptr1 = &a,ptr2=&b;

printf("a, b: ");
scanf("%d %d",ptr1,ptr2);

printf("sum is %d", *ptr1 + *ptr2);


printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}

