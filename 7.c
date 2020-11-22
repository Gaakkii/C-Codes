/*write a program to accept all character from the user and check whether the number is even or not*/
#include<stdio.h>
int main (void)
{
    int x;
    printf("Enter any number:\n");
    scanf("%d", &x);

    if(x%2==0)
    {
        printf("The number entered is an even number.\n");
    }
    else
    {
        printf("The number entered is an odd number.\n");
    }
}