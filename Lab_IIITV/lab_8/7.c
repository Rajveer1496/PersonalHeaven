/*
Write programs covering each category of user-defined functions:
4) Without arguments and with a return value
*/

#include<stdio.h>

int sum_num();

int main(){

int x,y;

int s = sum_num();

printf("Sum is %d\n",s);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

return 0;

}

int sum_num(){

int x;
int y;

printf("x: ");
scanf("%d",&x);

printf("y: ");
scanf("%d",&y);

int sum = x+y;

return sum;

}


