/*to caculate floating value in 00.00*/
#include<stdio.h>
int main (void)
{
    float x, y;
    printf("Enter any number:\n");
    scanf("%f", &x);
    printf("Enter any number:\n");
    scanf("%f", &y);

    printf("The sum in the form of 00.00 is %.2f", (x+y));
}