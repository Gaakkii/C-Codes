/*accept a number from the user and check whether the number is divisible by 2 and 3 or not*/
#include<stdio.h>
int main (void)
{
    int x;
    printf("Enter any number:\n");
    scanf("%d", &x);

    if(x%2==0 && x%3==0)
    {
        printf("The number is divisible by both 2 and 3.\n");
    }
    else
    {
        printf("The number is not divisible by 2 and 3.\n");
    }
    
}