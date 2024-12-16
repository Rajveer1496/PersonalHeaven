/*
Write a C program using command-line arguments to display given content and specify metadata, including the number of strings, vowels, and consonants in each
string.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void analyzeString(const char *str) {
    int vowels = 0, consonants = 0, length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {  // Check if character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("String: \"%s\"\n", str);
    printf("Length: %d\n", length);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n\n", consonants);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
        return 1;
    }

    printf("Number of strings: %d\n\n", argc - 1);
    
    for (int i = 1; i < argc; i++) {
        analyzeString(argv[i]);
    }

printf("Name: Rajveer\n");
printf("Roll Number: 202411024\n");

    return 0;


}	

