/*Write a program to pass array size and array value through a function*/
#include<stdio.h>
int arr(void)
{
    int x[1000], y, i;
    printf("Enter the array size:\n");
    scanf("%d", &y);

    for(i=0; i<y; i++)
    {
        printf("Enter the number:");
        scanf("%d", &x[i]);
    }

    printf("The array so formed is {");
    for(i=0; i<y; i++)
    {
        printf(" %d ", x[i]);
    }
    printf("}");
}
int main (void)
{
    arr();
    printf("\n");
}