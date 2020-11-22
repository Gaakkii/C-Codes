/* write a program to print fibonacci series*/
#include<stdio.h>
int main (void)
{
    int x, i , a=0, b=1, series;

    printf("Enter any number:\n");
    scanf("%d", &x);
    printf("The series is");

    for(i=1; i<=x; i++)
    {
        printf(" %d ", a);
        series = a + b;
        a = b;
        b = series;    
    }

} 