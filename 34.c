/*write a program to draw
    *****
    ****
    ***
    **
    *
*/
#include<stdio.h>
int main (void)
{
    int x, i, j;
    printf("Enter any number:\n");
    scanf("%d", &x);

    for(i=x; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n");
}