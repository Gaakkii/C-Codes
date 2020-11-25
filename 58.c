/*Write a program to check whether the number is an armstrong*/
#include<stdio.h>
int main (void)
{
    int x, i, a=0, y, z;
    printf("Enter any number:\n");
    scanf("%d", &z);
    x = z;
    while(x != 0)
    {
        y = x%10;
        a = a+(y*y*y);
        x = x/10;
    }
    if(a==z)
        printf("The number is an armstrong.\n");
    else
    {
        printf("The number is not an armstrong.\n");
    }
}