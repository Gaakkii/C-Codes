#include <stdio.h>
#include <limits.h>  

int main(void)
{
    int arr[90], x, i;
    int max1, max2;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &x);

    /* Input array elements */ 
    for(i=0; i<x; i++)
    {
        printf("Enter elements in the array: ");
        scanf("%d", &arr[i]);
    }

    max1 = max2 = 0;


    
    for(i=0; i<x; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("Second largest = %d", max2);
}