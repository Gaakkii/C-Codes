/* write a program to make a multiplication table (upto 10)*/
#include<stdio.h>
int main (void)
{
    int x, i;
    printf("Enter any number:\n");
    scanf("%d", &x);
    for(i=1; i<=10; i++)
    {
        printf("------------\n");
        printf("%d * %d = %d\n", x, i, (x*i));
    }
    printf("------------\n");
}