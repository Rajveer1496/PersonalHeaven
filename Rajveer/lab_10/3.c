/*
Write a C program to append content to an existing file.
*/

#include<stdio.h>

void main(){

FILE *ptr;
ptr = fopen("myfile.txt","a");

if(ptr == NULL){
printf("Error opening file\n");
}

char str[50] = "Hello World\n";

fputs(str, ptr);

printf("%s",str);

fclose(ptr);

printf("Name: Rajveer Chaudhari \n");
printf("\nRoll Number: 202411024\n");

}

