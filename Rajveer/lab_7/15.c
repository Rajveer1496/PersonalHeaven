#include<stdio.h>

void main(){

printf("Name: Rajveer Chaudhari\nRoll No:202411024\n");

int a[5];
for(int i=0; i<5; i++){
printf("Enter the value of a[%d]: ", i);
scanf("%d",(a+i));
}

printf("\n");
printf("The array a is\n");

for(int j=0; j<5; j++){
printf("%d ", *(a + j));
}
printf("\n");


printf("\n");
}