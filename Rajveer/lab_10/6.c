/*
Write a C program to merge the contents of two files into a third file
*/

#include<stdio.h>
#include<string.h>

void main(){

FILE *ptr1 = fopen("myfile.txt", "r");
FILE *ptr2 = fopen("myfile2.txt","r");
FILE *ptr3 = fopen("myfile3.txt","w");

if(ptr1 == NULL || ptr2 == NULL || ptr3 == NULL){
printf("Error opening file\n");
}
char ch,str[100];
int i=0;
while((ch = fgetc(ptr1)) != EOF){
str[i] = ch;
i++;
}

while((ch = fgetc(ptr2)) != EOF){
str[i] = ch;
i++;
}

str[i] = '\0';

fputs(str,ptr3);

fclose(ptr1);
fclose(ptr2);
fclose(ptr3);

printf("**%s** \nis the merge of two files into 3rd file\n",str);

printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}


