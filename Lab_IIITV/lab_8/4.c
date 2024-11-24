/*
Write programs covering each category of user-defined functions:
1) With arguments and with a return value
*/

#include<stdio.h>

int sum_num(int a, int b);

int main(){

int x,y;

printf("Enter the value of x: ");
scanf("%d",&x);

printf("Enter the value of y: ");
scanf("%d",&y);

int result = sum_num(x, y);

printf("The sum is %d\n",result);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

return 0;

}

int sum_num(int a, int b){

return a+b;

}

