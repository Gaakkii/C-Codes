/*Write a program to find sum of right diagonal*/
#include<stdio.h>
int main (void)
{
    int x[99][99], i, j;
    int sum=0;
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("Enter any number:");
            scanf("%d", &x[i][j]);
        }
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            if(i==j || i+j==2)
            {
                printf("%d", x[i][j]);
                sum = sum + x[i][j];
            }
            else
            {
                printf("0");
            }
            
        }
        printf("\n");
    }
    printf("The sum of the right diagonal is %d", sum);
}