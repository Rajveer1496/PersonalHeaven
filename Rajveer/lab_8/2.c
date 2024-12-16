//Write a C program to find the sum of array elements using pointers to arrays.

#include<stdio.h>

void main(){

int a[5], b[5];

for(int i=0; i<5; i++){

printf("enter the value of a[%d]: ",i);
scanf("%d",&a[i]);

}
printf("\n");
for(int k=0; k<5; k++){

printf("enter the value of b[%d]: ",k);
scanf("%d",&b[k]);

}
printf("The sum is \n");
for(int j=0; j<5; j++){
int *p = &a[j];
int *f = &b[j];
printf("%d  ", *p + *f);
}
printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024");

}


