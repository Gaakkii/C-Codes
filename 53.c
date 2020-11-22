/*Write a function to find the largest number in an array*/
#include<stdio.h>
#include<limits.h>
int max(void)
{
    int x[99], y, i, a, b;
    printf("Enter the array size:\n");
    scanf("%d", &y);

    for(i=0; i<y; i++)
    {
        printf("Enter any number:");
        scanf("%d", &x[i]);
    }
    a=b=INT_MIN;

    for(i=0; i<y; i++)
    {
        if(x[i] > a)
        {
            b = a;
            a = x[i];
        }
        else if(x[i] > b && x[i] < a)
            b = x[i];
    }
    printf("The first largest number is %d", a);


}
int main (void)
{
    max();
}