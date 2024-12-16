/*
Employee Structure: Define a structure for storing employee information, including employee ID, name, department, and salary. Write a program to take input for 5 employees and display their information.
*/

#include <stdio.h>

struct employee
{
int id;    
char name[50];
char department[100];
float salary;
};

void main()
{
int c;
printf("Enter the number of employee: ");
scanf("%d",&c);
    struct employee s[c];

    for (int i = 0; i < c; i++)
    {

printf("Enter the id of the employee: ");
scanf("%d",&s[i].id);

        printf("Enter the name: ");
getchar();
        scanf("%s", &s[i].name);

        printf("Enter the department: ");
getchar();
        scanf("%s", &s[i].department);

        printf("Enter the salary: ");
        scanf("%f", &s[i].salary);

        printf("\n\n");
    }

    for (int i = 0; i < c; i++)
    {
        printf("ID is %d\n", s[i].id);
        printf("Name of employee is %s\n", s[i].name);
        printf("Department of employee is %s\n", s[i].department);
        printf("Salary is %.2f\n", s[i].salary);
        printf("\n");
    }




printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}

