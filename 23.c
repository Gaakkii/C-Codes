/* write a program to check whether the given number is prime or not (using do-while loop)*/
#include<stdio.h>
int main (void)
{
    int x, i=2;
    printf("Enter any number:\n");
    scanf("%d", &x);
    if(x==2)
    {
        printf("The number is a prime number.\n");
    }
    else
    {
        do
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
            i++;
        } while (i<=x);
    }
}