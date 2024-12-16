/*
Write programs covering each category of user-defined functions:
2) With arguments and without a return value
*/

#include<stdio.h>

void sum_num(int a, int b);

int main(){

int x,y;

printf("Enter the value of x: ");
scanf("%d",&x);

printf("Enter the value of y: ");
scanf("%d",&y);

sum_num(x, y);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

return 0;

}

void sum_num(int a, int b){

int sum = a+b;
printf("Sum is %d\n", sum);

}


