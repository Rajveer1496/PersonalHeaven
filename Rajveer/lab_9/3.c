/*
Write a C program to display the Fibonacci series within a given range using recursion.
*/

#include <stdio.h>

int fibonacci( int p)
{
    
    if (p == 0)
    {
        return 0;
    }
    else if (p == 1)
    {
        return 1;
    }
    else 
    {
    
        return fibonacci(p - 1) + fibonacci(p - 2); 
    }
    
}

void main()
{

    int i, l;

    printf("Enter the number to see number of digits in fibonacci series: ");
    scanf("%d", &l);

    for(int g=0; g<l;g++){
    printf("%d ",fibonacci(g));
    }

printf("\n");

printf("Name: Rajveer Chaudhari\n");
printf("Roll Number: 202411024\n");

}

