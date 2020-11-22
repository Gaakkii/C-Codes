/*Write a program to swap two array using temp variable*/
#include<stdio.h>
int swap(void)
{
    int x[99], y[99], t[99], i, z;
    printf("Enter array size:\n");
    scanf("%d", &z);
    for(i=0; i<z; i++)
    {
        printf("Enter elements for the first array:");
        scanf("%d", &x[i]);
    }
    for(i=0; i<z; i++)
    {
        printf("Enter elements for the second array:");
        scanf("%d", &y[i]);
    }
    for(i=0; i<z; i++)
    {
        t[i] = x[i];
        x[i] = y[i];
        y[i] = t[i];
    }

    for(i=0; i<z; i++)
    {
        printf(" %d ",x[i]);
    }
    printf("\n");
    for(i=0; i<z; i++)
    {
        printf(" %d ",y[i]);
    }
}
int main (void)
{
    swap();
    printf("\n");
}