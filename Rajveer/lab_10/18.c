/*
Define an enumeration for the four seasons (Winter, Spring, Summer, Fall). Write a program to take an integer input and display the corresponding season
*/

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

enum season {win,sp,sum,fall}; 

int main(){ 

char ch[4][10] = {"Winter","Spring","Summer","Fall"}; 
int a; 

printf("Enter required Season (Winter = 0, Spring = 1, Summer = 2, Fall = 3): "); 
scanf("%d",&a); 

enum season now = a; 

printf("Requied Season: %s",ch[a]); 
printf("\n");

return 0; 

}


