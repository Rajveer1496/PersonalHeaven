/*
Write a program to demonstrate variable scope in C, including local, block, global, formal (function parameter), and file scope (using static).
*/

#include<stdio.h>

int b = 24;
static int fsv = 69;

void file(){
printf("The value of file scope variable is %d\n",fsv);
}

void para(int p){

printf("The value of c in formal parameter is %d\n",p);

}

void main(){

int a = 5,c = 68;
printf("The value of a in main function/local scope is %d\n",a);
{
a = 8;
printf("The value of a in block scope is %d\n",a);
}

printf("The value of b in global scope is %d\n",b);
para(c);

printf("The value of file scope variable in main function is %d\n",fsv);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}


