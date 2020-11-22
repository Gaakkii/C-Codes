/*using logical operator in while loop*/
#include<stdio.h>
int main (void)
{
    int x, i=0;

    printf("Enter any number:\n");
    scanf("%d", &x);

    while(i<=x)
    {
        if(x==2 || x==3)
        {
            printf("The number entered is either 2 or 3.\n");
            break;
        }
        else
        {
            printf("The number entered is neither 2 or 3.\n");
            break;
        }
        i++;
    }
}