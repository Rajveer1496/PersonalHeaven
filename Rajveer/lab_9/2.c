/*
Write a C program to find the factorial of a given number using recursion
*/

// factourial calculation
#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {

        return (number * factorial(number - 1));
    }
}

void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Factorial of %d is %d\n",a, factorial(a));



printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}

