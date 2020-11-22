/*write a program to find sum of first n natural number*/
#include<stdio.h>
int main (void)
{
    int x, i, sum=0;
    printf("Enter the number:\n");
    scanf("%d", &x);

    for(i=0; i<=x; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first n natural number is %d", sum);
}