/*
Write a C program to count the number of characters, words, lines, spaces, digits, alphabets, and other characters in a given file
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){

FILE *ptr = fopen("myfile.txt", "r");

char ch,str[100];
int i = 0;
while((ch = fgetc(ptr)) != EOF){
str[i] = ch;
i++;
}
str[i] = '\0';

int cnt = 0,x = 0,y = 0,z = 0,w = 0;

for(int k = 0; k<i; k++){

if(isalpha(str[k])){cnt++;}
else if(isdigit(str[k])){x++;}
else if((int)str[k] == 32){y++;}
else if(ispunct(str[k])){z++;}
else if(str[k] == '\n'){w++;};

}

printf("\nWord: %s",str);
printf("\ncharacters: %d\n",i);
printf("Alphabet: %d\n",cnt);
printf("Digit: %d\n",x);
printf("Space: %d\n",y);
printf("special Character: %d\n",z);
printf("Lines: %d\n",w+1);

printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}


