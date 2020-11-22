/*write a program to find sum of n natural numbers (using while loop)*/
#include<stdio.h>
int main (void)
{
    int x, i=0, sum=0;
    printf("Enter any number:\n");
    scanf("%d", &x);

    while(i<=x)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of n natural numbers is %d", sum);
}