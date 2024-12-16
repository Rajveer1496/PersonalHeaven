/*
Write programs covering each category of user-defined functions:
3) Without arguments and without a return value
*/

#include<stdio.h>

void sum_num();

void main(){

int x,y;

printf("Enter the value of x: ");
scanf("%d",&x);

printf("Enter the value of y: ");
scanf("%d",&y);

sum_num(x,y);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");


}

void sum_num(int x,int y){
int x,y;

int sum = x+y;
printf("Sum is %d\n", sum);

}


