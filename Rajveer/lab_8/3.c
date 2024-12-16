#include <stdio.h>

int main() {

    int var1 = 10;
    int var2 = 20;
    int var3 = 30;
    

    int intArray[3] = {40, 50, 60};
    char charArray[5] = {'A', 'B', 'C', 'D', '\0'};
    

    void *arrayPtr[5];
    

    arrayPtr[0] = &var1;
    arrayPtr[1] = &var2;
    arrayPtr[2] = &var3;
    arrayPtr[3] = intArray;   
    arrayPtr[4] = charArray;  
    

    printf("Original Values:\n");
    printf("var1 = %d\n", *(int *)arrayPtr[0]);
    printf("var2 = %d\n", *(int *)arrayPtr[1]);
    printf("var3 = %d\n", *(int *)arrayPtr[2]);
    printf("intArray = %d, %d, %d\n", ((int *)arrayPtr[3])[0], ((int *)arrayPtr[3])[1], ((int *)arrayPtr[3])[2]);
    printf("charArray = %s\n", (char *)arrayPtr[4]);
    

    *(int *)arrayPtr[0] = 15;           
    ((int *)arrayPtr[3])[1] = 55;      
    ((char *)arrayPtr[4])[1] = 'Z';     
    

    printf("\nUpdated Values:\n");
    printf("var1 = %d\n", *(int *)arrayPtr[0]);
    printf("var2 = %d\n", *(int *)arrayPtr[1]);
    printf("var3 = %d\n", *(int *)arrayPtr[2]);
    printf("intArray = %d, %d, %d\n", ((int *)arrayPtr[3])[0], ((int *)arrayPtr[3])[1], ((int *)arrayPtr[3])[2]);
    printf("charArray = %s\n", (char *)arrayPtr[4]);

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

    return 0;
}
