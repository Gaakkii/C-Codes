/*Write a program to draw
      *
    * *
   *  *
  *   *
 ******
*/
#include<stdio.h>
int main (void)
{
    int i, j, k;

    for(i=1; i<=5; i++)
    {
        for(j=5; j>i; j--)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            if(k==i)
                printf("*");
            else if((k==1 && k==1) || (k==1 && k==2) || (k==1 && k==3) || (k==1 && k==4))
                printf("*");
            else if((i==5 && k==2) || (i==5 && k==3) || (i==5 && k==4))
                printf("*");
            else
            {
                printf(" ");
            }   
        }   
        printf("\n");
    }
}    