/*
Typedef with Arrays: Use typedef to define an alias for an array of 5 integers as IntArray. Write a program that uses this type to store and display integer values.
*/

#include<stdio.h>

void main(){

typedef int intarray[5];

intarray arr;
for(int i = 0; i<5; i++){
printf("arr[%d]: ",i);
scanf("%d",&arr[i]);
}
for(int i =0; i<5; i++){
printf("%d ",arr[i]);
}
printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}


