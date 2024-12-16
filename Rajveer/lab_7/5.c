#include <stdio.h>

void main(){

    printf("Name: Rajveer Chaudhari\nRoll No: 202411024\n");
    char arr[1000];
    printf("Enter the string that you want to print\n");
    fgets(arr,sizeof(arr),stdin);
    printf("%s",arr);
}