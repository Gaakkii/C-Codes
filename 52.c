/*Write  a function that uses a function to find greatest number of two integer number*/
#include<stdio.h>
int great(void)
{
    int x, y;
    printf("Enter the first number:\n");
    scanf("%d", &x);
    printf("Enter the second number:\n");
    scanf("%d", &y);

    if(x>y)
        printf("The first number is the greater number.\n");
    else
    {
        printf("The second number is the greater number.\n");
    }
    
}
int main (void)
{
    great();
}