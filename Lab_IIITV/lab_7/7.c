#include<stdio.h>

void main(){

printf("Name: Rajveer Chaudhari\nRoll No:202411024\n");

char c[5], a;
int i=0;

printf("Enter any 5 letter word: ");

while((a = getchar()) != '\n' && i<5 ){
c[i] = a;
i++;
}

if((c[0] == c[4]) && (c[1] == c[3])){
printf("This word is palindrome\n");
}
else{
printf("This word is not palindrome\n");
}

}