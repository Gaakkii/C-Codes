/*Write a program to find the row with maximum 1's in it*/
#include<stdio.h>
#include<limits.h>
int main (void)
{
    int x[99][99], y, i, j, a=0;
    printf("Enter the matrix size:\n");
    scanf("%d", &y);
    for(i=0; i<y; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("Enter either 1 or 0:");
            scanf("%d", &x[i][j]);
        }
    }
    for(i=0; i<y; i++)
    {
        for(j=0; j<y; j++)
        {
            printf(" %d ", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<y; i++)
    {
        for(j=0; j<y; j++)
        {
            if(x[i][j]==1)
            {
                a++;
            }
        }
    }
    printf("The maximum number of 1's are: %d\n", a);
}