/* write a program to find square root of a number without the math function*/
#include<stdio.h>
int main (void)
{
    int x;
    int sqrt, temp;
    printf("Enter any number:\n");
    scanf("%d", &x);
    sqrt = x / 2;
    temp=0;
    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = (x/temp + temp) / 2;
    }
    printf("The sqaure root of the number is %d", sqrt);
}