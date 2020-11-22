/*write a program to print reverse series of a given number*/
#include<stdio.h>
int main (void)
{
    int x, i;
    printf("Enter any number:\n");
    scanf("%d", &x);

    for(i=x; i>=1; i--)
    {
        printf("%d\n", i);
    }
}