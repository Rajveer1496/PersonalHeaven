/*
Write a sample C program to check the scope of the auto storage class.
*/

#include<stdio.h>

void main(){

auto int a = 5;
printf("value of a using auto int is %d\n",a);
{
auto int a = 76;
printf("value of a using auto int in scope is %d\n",a);
}


printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}

