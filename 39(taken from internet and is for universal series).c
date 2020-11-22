#include<stdio.h>
int main (void)
{
    int x, i=0, rem;
    printf("Enter any number:\n");
    scanf("%d", &x);
    while(x != 0)
    {
        rem = x%10;
        i = i*10+rem;
        x = x/10;
    }
    printf("The reversed order is %d", i);
}