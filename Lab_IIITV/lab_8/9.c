/*
Display the multiplication table of a given number using functions.
*/

#include<stdio.h>

void mult(int a, int b);

void main(){

int n,i=1;

printf("Enter the number: ");
scanf("%d",&n);

for(i=1; i<=10; i++){
mult(n, i);
}

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}

void mult(int a, int b){

printf("%d X %d = %d\n", a,b,a*b);

}


