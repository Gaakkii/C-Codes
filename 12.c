/*accepy ywo numbers from the user and display the maximum number*/
#include<stdio.h>
int main (void)
{
    int x, y;
    printf("Enter the first number:\n");
    scanf("%d", &x);
    printf("Enter the second numebr:\n");
    scanf("%d", &y);

    if(x>y)
    {
        printf("The first number is the maximum number.\n");
    }
    else
    {
        printf("The second number is the maximum number.\n");
    }
    
}