/*
Write a C program to display a multiplication table using recursion.
*/

#include<stdio.h>

int multi(int x, int y){

if(y == 11){

return 0;

}

else{

printf("%d X %d = %d\n",x,y,x*y);
y++;
multi(x,y);

}

}

void main(){

int a,b=1;

printf("Enter the number you want mutiplication of: ");
scanf("%d",&a);

multi(a,b);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}


