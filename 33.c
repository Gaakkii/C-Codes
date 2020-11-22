/* write a program to draw the pattern
    55555
    4444
    333
    22
    1
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
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");
}