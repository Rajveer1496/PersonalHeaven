#include<stdio.h>

void main(){

printf("Name: Rajveer Chaudhari\nRoll No:202411024\n");

int a[5];
for(int i=0; i<5; i++){
printf("Enter the value of a[%d]: ", i);
scanf("%d",&a[i]);
}
int *p = a;

for(int k=0 ; k<5 ; k++){

printf("The value of a[%d] is %d\n",k,*p);
p++;

}

printf("\n");
}