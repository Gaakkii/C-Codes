/*write a program to find multiplication of 2 square matrix (2X2)*/
#include<stdio.h>
int main (void)
{
    int x[99][99], y[99][99], i, j, z;
    printf("Enter the size of matrix:\n");
    scanf("%d", &z);

    for(i=0; i<z; i++)
    {
        for(j=0; j<z; j++)
        {
            printf("Enter the values for the first matrix:");
            scanf("%d", &x[i][j]);
        }
    }
    for(i=0; i<z; i++)
    {
        for(j=0; j<z; j++)
        {
            printf("Enter the values for the second matrix:");
            scanf("%d", &y[i][j]);
        }
    }

    for(i=0; i<z; i++)
    {
        for(j=0; j<z; j++)
        {
            printf(" %d ", (x[i][j] * y[i][j]));
        }
        printf("\n");
    }
    printf("\n");
} 