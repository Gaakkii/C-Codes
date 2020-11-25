/*Write a structure to store information of 10 students*/
#include<stdio.h>
int main (void)
{
    struct students
    {
        char *name[99], *school[99];
        int roll[99], std[99];
    };
    int i, j;
    struct students sd;
    for(i=0; i<10; i++)
    {
        printf("Enter the name of the student: ");
        scanf("%s", &sd.name[i]);
        printf("Enter the standard of the student: ");
        scanf("%d", &sd.std[i]);
        printf("Enter the roll number of the student: ");
        scanf("%d", &sd.roll[i]);
        printf("Enter the name of school of the student: ");
        scanf("%s", &sd.school[i]);
    }
}