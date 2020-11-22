/*write a program to find factorial of a number*/
#include<stdio.h>
int main (void)
{
    int x, i, mul=1;
    printf("Enter any number:\n");
    scanf("%d", &x);

    for(i=1; i<=x; i++)
    {
        mul = mul * i;
    }
    printf("The factorial of the given number is %d.\n", mul);
}