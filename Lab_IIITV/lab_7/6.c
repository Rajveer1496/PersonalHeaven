#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){

    printf("Name: Rajveer Chaudhari\nRoll No:202411024\n");

    int vowel=0,words=0,cons=0,spaces=0,sc=0;
    char arr[1000];
    char v_owel[5]= {'a','e','i','o','u'};
    char c_onsonat[21]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
    char s_c[10] = {'!','#','$','%','&','^','*','@','~','?'};
    printf("Enter the string\n");
    fgets(arr,sizeof(arr),stdin);
    int len = strlen(arr) - 1;

    //to lowercase all
    for(int i=0;i<len;i++){
        char temp = arr[i];
        arr[i] = tolower(temp);
    }


    for(int i=0;i<len;i++){

        //Vowel counting
        for(int j=0; j<5;j++){
            if(arr[i]==v_owel[j]){
                vowel++;
            }
        }

        //Consonant
         for(int j=0; j<21;j++){
            if(arr[i]==c_onsonat[j]){
                cons++;
            }
        }

        //Spaces
        if(arr[i]==' '){
            spaces++;
        }

        //words
        if(arr[i]==' '){
            if(arr[i+1] != ' '){
                words++;
            }
        }

        //Special Charachter

        for(int j=0; j<10;j++){
            if(arr[i]==s_c[j]){
                sc++;
            }
        }

    }
    words++; //cuz also gotta count first word
     printf("Vowels=%d\nConsonants=%d\nSpaces=%d\nWords=%d\nSpecial Char=%d",vowel,cons,spaces,words,sc);
}