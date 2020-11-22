/*write a program to do sum of a three digit number*/
#include<stdio.h>
int main (void)
{
    int x, a, b, c;
    printf("Enter any three digit number:\n");
    scanf("%d", &x);
    a=x/100;
    b=(x%100)/10;
    c=x%10;

    printf("The sum of the three digit number is %d", (a+b+c));
}