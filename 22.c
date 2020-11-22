/*write a program to check whether a given number is a prime number or not*/
#include<stdio.h>
int main (void)
{
    int x, i;
    printf("Enter any number:\n");
    scanf("%d", &x);
    if(x==1)
    {
        printf("1 is a unique number.\n");
    }
    else if(x==2)
    {
        printf("The number is a prime number.\n");
    }
    else
    {
        for(i=2; i<=x; i++)
        {
            if(x%i==0)
            {
                printf("The number is not a prime number.\n");
                break;
            }
            else
            {
                printf("The number is a prime number.\n");
                break;
            }
    }    }
}