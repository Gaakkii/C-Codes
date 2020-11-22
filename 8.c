/*write a program to find the largest number among three number using ternary operator*/
#include<stdio.h>
int main (void)
{
    int x, y, z;
    printf("Enter the first number:\n");
    scanf("%d", &x);
    printf("Enter the second number:\n");
    scanf("%d", &y);
    printf("Enter the third number:\n");
    scanf("%d", &z);

    (x>y)?(x>z)?printf("The first number is the largest number.\n"):printf("The first number is the largest number.\n"):(y>x)?(y>z)?printf("The second number is the largest number.\n"):printf("The third number is the largest number.\n"):printf("The third number is the largest number.\n");
}