/*
Write a C program to illustrate the limitations of the register storage class.
*/

#include<stdio.h>

void main(){

register int i[10];

for(int j=0; j<10; j++){
printf("a[%d]: ");
scanf("%d", &i[j]);
}

for(int j=0; j<10; j++){
printf("%d ",i[j]);
}

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}



