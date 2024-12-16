/*
Write a C program to search for a specific word in a file and replace it with another word.
*/
#include<stdio.h>
#include <string.h>

void search(const char *oldword, const char *newword)
{
    char line[300], newline[100];
    int count = 0, i = 0;
    int oldwordlenth = strlen(oldword);
    int newwordlenth = strlen(newword);

    FILE *ptr = fopen("myfile.txt", "r");
    FILE *ptr2 = fopen("temp.txt", "w");

    while (fgets(line, sizeof(line), ptr))
    {
        char *ptrs;
        while ((ptrs = strstr(&line[i], oldword)) != NULL)
        {
            fprintf(ptr2, "%.*s", (int)(ptrs - line), line);
            fprintf(ptr2, "%s", newword);
            strcpy(line, ptrs + oldwordlenth); ptrs = line;
        }
        fprintf(ptr2, "%s", line);
    }
    fclose(ptr);
    fclose(ptr2);
    remove("myfile.txt");
    rename("temp.txt", "myfile.txt");
    printf("\nstring removed successfully");
}

int main()
{
    char oldword[100], newword[100];
    printf("enter the word which you want to replace:\n");
    scanf("%[^\n]", oldword);
    printf("enter the word which you want to replace with:\n");
    getchar();
    scanf("%[^\n]", newword);
    search(oldword, newword);
}


