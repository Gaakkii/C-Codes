/*write a program to find the smalled number in an array*/
#include<stdio.h>
int main (void)
{
    int x[20], i, y, j;
    printf("Enter array size:\n");
    scanf("%d", &y);
    for(i=0; i<y; i++)
    {
        printf("Enter the number:\n");
        scanf("%d", &x[i]);
    }
    x[0] = j;
    for(i=0 ;i<y; i++)
    {
        if(x[i]<j)
        {
            j = x[i];
        }
    }
    printf("The smallest element is %d", j);

}