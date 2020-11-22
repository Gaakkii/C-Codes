/*write a program to swap two variables with any temporary variable*/
#include<stdio.h>
int main (void)
{
    int x, y;
    printf("Enter the first number:\n");
    scanf("%d", &x);
    printf("Enter the second number:\n");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("The number have been swapped i.e. %d and %d", x, y);
}