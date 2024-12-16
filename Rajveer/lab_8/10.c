/*
Find the factorial of a given number using functions.
*/

double fac(double b, double c);

#include<stdio.h>

void main(){

double n,i,r=1;

printf("Enter the number to find its factorial: ");
scanf("%lf",&n);

for(i = 1; i<=n; i++){

r = fac(i,r);

}

if(n == 0 || n == 1){
printf("Factorial is 1\n");
}

else{
printf("Factorial is %.2lf\n", r);
}

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}

double fac(double b, double c){

c = c*b;

return c;

}


