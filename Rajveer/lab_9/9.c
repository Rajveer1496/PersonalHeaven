/*
Write a program to compare global variables declared with and without the extern storage class.
*/

#include<stdio.h>
#include"ptemp.c"

extern int a;

int i = 45;

void main(){

printf("The  value of i displayed withput using extern is %d\n",i);

printf("The value of a displayed with using extern is %d\n",a);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}


