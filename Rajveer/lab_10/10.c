/*
Student Grades: Create a union to store a student's roll number, name, and marks in three subjects. Write a program to calculate and display the total marks and average for each student.
*/

#include <stdio.h>

union student
{
    char name[50];
    int rol;
    float mark[3];
    float avg;
};

void main()
{
    int c,t=0;
    printf("Enter the number of student: ");
    scanf("%d",&c);
    

    union student s[c];

    for (int i = 0; i < c; i++)
    {
t = 0;
        printf("Enter the name: ");
        // gets(s1.c[i][50]);
        scanf("%s", &s[i].name);

        printf("Enter the roll number: ");
        scanf("%d", &s[i].rol);

for(int j =0; j<3; j++){

        printf("Enter the marks subject %d: ",j+1);
        scanf("%f", &s[i].mark[j]);
	t = t + s[i].mark[j];

}

s[i].avg = t/3;

        printf("\n");
    }

    for (int i = 0; i < c; i++)
    {
        printf("Name is %s\n", s[i].name);
        printf("Roll Number is %d\n", s[i].rol);
        printf("Percentage is %.2f\n", s[i].avg);
        printf("\n");
    }


printf("\nName: Rajveer Chaudhari \n");
printf("Roll Number: 202411024\n");

}


