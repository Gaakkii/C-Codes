/*write a program to print sum of n natural numbers*/
#include<stdio.h>
int main (void)
{
    int x, i, sum=0;
    printf("Enter any number:\n");
    scanf("%d", &x);

    printf("The sum of n natural numbers is 0");
    for(i=1; i<=x; i++)
    {
        printf(" + %d", i);
        sum = sum + i;
    }
    printf(" = %d", sum);
}