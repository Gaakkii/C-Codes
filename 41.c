/*write a program to find out even and odd numbers in an array*/
#include<stdio.h>
int main (void)
{
    int x[40], i, y;
    printf("Enter the size of array:\n");
    scanf("%d", &y);
    for(i=1; i<=y; i++)
    {
        printf("Enter the number:\n");
        scanf("%d", &x[i]);
    }
    printf("->");
    for(i=1; i<=y; i++)
    {
        if(x[i]%2==0)
        {
            printf("%d", x[i]);
        }
        else
        {
            printf("");
        }
    }
    printf("\n");
    printf("->");
    for(i=1; i<=y; i++)
    {
        if(x[i]%2==0)
        {
            printf("");
        }
        else
        {
            printf("%d", x[i]);
        }
    }
    printf("\n");
}