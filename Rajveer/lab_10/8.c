/*
Program to read characters from a text file and print number of vowels, consonants and other characters in the file. Assume that the file will consist of mostly English-language letters.
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

if(isalpha(str[k])){

if(str[k] == 'a' || str[k] == 'e'|| str[k] == 'i'|| str[k] == 'o'|| str[k] == 'u'|| str[k] == 'A'|| str[k] == 'E'|| str[k] == 'I'|| str[k] == 'O'|| str[k] == 'U'){cnt++;}

else{x++;}

}


else if(ispunct(str[k])){z++;}


}

printf("\nWord: \n%s",str);
printf("\nVowel: %d\n",cnt);
printf("Consonant: %d\n",x);
printf("special Character: %d\n",z);


printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}


