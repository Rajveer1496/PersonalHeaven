/*
Write a C program to copy the contents of one file to another.
*/

#include<stdio.h>

void main(){

FILE *ptr1 = fopen("myfile.txt", "r");
FILE *ptr2 = fopen("myfile2.txt","w");

if(ptr1 == NULL || ptr2 == NULL){
printf("Error opening file\n");
}
char ch,str[50];
int i=0;
while((ch = fgetc(ptr1)) != EOF){
str[i] = ch;
i++;
}
str[i] = '\0';

fputs(str,ptr2);

printf("**%s** is copied to another file\n",str);

printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}


