/*Write a program to find the number of duplicate members in an array and print the output without the number*/
#include<stdio.h>
int main (void)
{
    int x[90], i, j, a=1, z, b=0;
    printf("Enter the array size:\n");
    scanf("%d", &z);
    for(i=0; i<z; i++)
    {
        printf("Enter any number:");
        scanf("%d", &x[i]);
    }
    for(i=0; i<z; i++)
    {
        for(j=i+1; j<z; j++)
        {
            if(x[i] == x[j])
            {
                a++;
                break;
            }
        }
    }
    printf("The number of duplicate members in the array is %d\n", a);
    printf("The array without the duplicate numbers is ");
    
}