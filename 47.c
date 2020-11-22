/*Write a program to print 2d matrix 
  	1 2 3     o/p ->   1 0 0    o/p  ->  1 0 0
 	4 5 6              4 5 0		     0 1 0	
   	7 8 9              7 8 9   	         0 0 1
*/
#include<stdio.h>
int main (void)
{
    int x[99][99], i,j;
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
           printf(" %d ", x[i][j]); 
        }
        printf("\n");
    }
    printf("\n");
    
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            if((i==0 && j==1)||(i==0 && j==2) || (i==1 && j==2))
            {
                printf(" 0 ");
            }
            else
            {
                printf(" %d ", x[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            if(i==j)
            {
                printf(" 1 ");
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
    
}