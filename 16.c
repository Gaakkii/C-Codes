/*write a program to convert days to years, weeks and days*/
#include<stdio.h>
int main (void)
{
    int days;
    printf("Enter the number of days:\n");
    scanf("%d", &days);

    printf("Days converted to years are %d.\n", (days/365));
    printf("Days converted to weeks is %d.\n", (days/7));
    printf("Days converted to days is %d.\n", days);
}