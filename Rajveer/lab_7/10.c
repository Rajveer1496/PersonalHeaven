#include <stdio.h>

void main()
{

    printf("Name: Rajveer Chaudhari\nRoll No:202411024\n");

    int x, y, z, w, h = 0;
    char p;
back:
    printf("Enter the value of m in m x n: ");
    scanf("%d", &x);

    printf("Enter the value of n in m x n: ");
    scanf("%d", &y);

    printf("Enter the value of q in q x r: ");
    scanf("%d", &w);

    printf("Enter the value of r in q x r: ");
    scanf("%d", &z);

    printf("\n");

    int a[x][y];
    int b[w][z];

    if (y == w)
    {

        for (int i = 0; i < x; i++)
        {

            for (int j = 0; j < y; j++)
            {

                printf("Enter the value of a[%d][%d]\n", i, j);
                scanf("%d", &a[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < w; i++)
        {

            for (int j = 0; j < z; j++)
            {

                printf("Enter the value of b[%d][%d]\n", i, j);
                scanf("%d", &b[i][j]);
            }
            printf("\n");
        }

        printf("Multipilcation of matrics is\n");

        for (int i = 0; i < x; i++)
        {

            for (int j = 0; j < z; j++)
            {
                h = 0;
                for (int v = 0; v < w; v++)
                {

                    h = h + a[i][v] * b[v][j];
                }
                printf("%d ", h);
            }
            printf("\n");
        }
    }

    else
    {
        printf("This matrix cannot be multiply because of the n and q are not equal please try again\n\n");
        goto back;
    }
}