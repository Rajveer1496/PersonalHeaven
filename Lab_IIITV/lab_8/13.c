#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if(isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

    return 0;
}
