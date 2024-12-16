/*
Using functions concept read an array of integers, compute each integer’s factorial, and store results in another array
*/

#include<stdio.h>

double fac(double o, double p);

void main(){

double x,a[5],b[5],r=1;

for(int i=0; i<5; i++){
A:
printf("Enter the value of a[%d]: ", i);
scanf("%lf", &a[i]);

if(a[i]<0){

printf("please enter valid input\n");
goto A;

}

}

for(int v=0; v<5; v++){
if(a[v] > 0){
r=1;
x = a[v];
for(int j=1; j<=x; j++){
r = fac(j,r);
}

b[v] = r;
}

else {b[v] = 1;}

}

printf("Factorial of elements in array is \n\n");

for(int l=0; l<5; l++){
printf("%.2lf    ", b[l]);
}

printf("\nName: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}

double fac(double o, double p){
p = p*o;
return p;
}

