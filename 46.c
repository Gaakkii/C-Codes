/*Write a program to find sum of rows and columns*/
#include<stdio.h>
int main (void)
{
    int x[99][99], i, j, z, row=0, col=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter any number: ");
            scanf("%d", &x[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==0||i==1||i==2)
            {
                row = row + x[i][j];
            }
            else
            {
                printf("");
            }
            
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==0||j==1||j==2)
            {
                col = col + x[i][j];
            }
            else
            {
                printf("");
            }
        }
    }
    printf("The sum of the rows is %d.\n", row);
    printf("The sum of the columns is %d.\n", col);

}