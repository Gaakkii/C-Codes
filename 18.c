/*write a program to take input from the user and display whether the number is positive, negative or zero*/
#include<stdio.h>
int main (void)
{
    int x;
    printf("Enter any number:\n");
    scanf("%d", &x);

    if(x>0)
    {
        printf("The number entered is positive.\n");
    }
    else if(x<0)
    {
        printf("The number entered is negative.\n");
    }
    else
    {
        printf("The number entered is zero.\n");
    }
    
}