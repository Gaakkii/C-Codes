/*Write a program to convert decimal to binary*/
#include<stdio.h>
int main (void)
{
    int x, i=0, a[64], j;
    printf("Enter any number: ");
    scanf("%d", &x);
    while(x>0)
    {
        a[i] = x % 2;
        x = x/2;
        i++;
    }
    printf("The decimal number converted to binay is ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d", a[j]);
    }
    printf("\n");
}