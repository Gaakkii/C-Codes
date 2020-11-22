/*write a program to take operator from user and display result according to the operator*/
#include<stdio.h>
int main (void)
{
    int x, y;
    char ch;

    printf("Enter the operator from the following(+,-,/,*):\n");
    scanf("%c", &ch);

    if(ch=='+'||ch=='-'||ch=='/'||ch=='*')
    {
        printf("Enter the first number:\n");
        scanf("%d", &x);
        printf("Enter the second number:\n");
        scanf("%d", &y);

        if(ch=='+')
        {
            printf("The sum of both the numbers is %d", (x+y));
        }
        else if(ch=='-')
        {
            printf("The subtraction of both the numbers is %d", (x-y));
        }
        else if(ch=='/')
        {
            if(x>y)
            {
                printf("The division of both the numbers is %d", (x/y));
            }
            else
            {
                printf("The division of both the numbers is %d", (y/x));
            }
        }
        else
        {
            printf("The multiplication of both the numbers is %d", (x*y));
        }
        
    }
}