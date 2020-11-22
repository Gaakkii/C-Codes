#include<stdio.h>
int main (void)
{
    int x[4], i;
    printf("Enter any three digit number:\n");
    scanf("%d", &x[0]);

    x[1] = x[0]/100;
    x[2] = (x[0]%100)/10;
    x[3] = x[0]%10;
    printf("The reversed order is ");
    for(i=3; i>=1; i--)
    {
        printf("%d", x[i]);
    }
}