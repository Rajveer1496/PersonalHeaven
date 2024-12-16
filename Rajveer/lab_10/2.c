/*
Write a C program to read a file's content and display it on the screen.
*/

#include<stdio.h>
#include<string.h>

void main(){

FILE *ptr= fopen("myfile.txt","r");


if(ptr == NULL){
printf("Error opening file\n");
}

char str[50];

fgets(str, 50, ptr);

printf("%s",str);

fclose(ptr);

printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}


