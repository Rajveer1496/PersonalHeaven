#include <stdio.h>

void main()
{
	char str[100];  // Declaring a character array of size 100

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads a string including spaces and newline characters

    printf("You entered: %s", str);	

}

