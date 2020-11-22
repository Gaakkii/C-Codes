/*Write a program to sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 */
#include<stdio.h>
int ser(void)
{
    int i, x;
    printf("Enter any number:\n");
    scanf("%d", &x);
    printf("The series formed is 1!/");
    for(i=1; i<x; i++)
    {
        printf("%d+%d!/", i, (i+1));
    }
    printf("%d", i);
}
int main (void)
{
    ser();
    printf("\n");
}