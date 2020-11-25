#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i, n, x, y[6];
    

    n=5;
    for(i=0;i<n;i++)
    {
        y[i] = (rand() % 10000000000000000 + 50000);
    }
    for(i=0; i<n;i++)
    {
        printf("%d.\n",y[i]);
    }
    return 0;
}