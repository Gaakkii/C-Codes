/*Write a program to print a matrix  in spiral form.
        o/p ->       1 2 3 4
                     5 6 7 8 9 
                     10 11 12 13 14
*/
#include<stdio.h>
int main (void)
{
    int x[99][99], i, j, y;
    printf("Enter matrix size:\n");
    scanf("%d",  &y);

    for(i=0; i<y; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("Enter any number:");
            scanf("%d", &x[i][j]);
        }
    }
    for(i=0; i<y; i++)
    {
        for(j=4; j<y; j++)
        {
            printf("%d", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
getch();
}