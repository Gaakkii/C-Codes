/*write a program to check whether the two numbers are equal or not*/
#include<stdio.h>
int main (void)
{
    int x, y;
    printf("Enter the first number:\n");
    scanf("%d", &x);
    printf("Enter the second number:\n");
    scanf("%d", &y);

    if(x==y)
    {
        printf("Both the numbers are equal.\n");
    }
    else
    {
        printf("Both the numbers are not equal.\n");
    }
    
}