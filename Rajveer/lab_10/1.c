#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *ptr;
    char str[50], ing[50] = "HI I am Rajveer Chaudhari";
    // ***** Reading a file *****
    ptr = fopen("myfile.txt", "r");
    if (ptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int i = 0;
    char ch;
    while ((ch = fgetc(ptr)) != EOF ) {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    fclose(ptr);
    printf("%s\n", str);
    // puts(str);

    // ***** Writing a file *****
     ptr = fopen("myfile.txt", "w");
     fprintf(ptr, "%s", ing);
     printf("%s",ing);

    // ***** Appending a file *****
     ptr = fopen("myfile.txt", "a");
     fprintf(ptr, "%s", ing);

printf("\nName: Rajveer Chaudhari \n");
printf("\nRoll Number: 202411024\n");

    return 0;
}
