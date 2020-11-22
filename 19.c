/*write a program to make marksheet*/
#include<stdio.h>
int x[20], i;
char *ch[]={"Maths   ", "English ", "Gujarati", "Hindi   ", "Science "};

char grade (void)
{
    if(x[i]>=99)
        printf("A\n");
    else if(x[i]>=71)
        printf("B\n");
    else if(x[i]>=41)
        printf("C\n");
    else if(x[i]>=21)
        printf("D\n");
    else
    {
        printf("Fail\n");
    }
    
}
int main (void)
{
    for(i=0; i<=4; i++)
    {
        printf("Enter the marks for %s\n", ch[i]);
        scanf("%d", &x[i]);
    }

    printf("--------------Marksheet------------\n");
    printf("Sr. No.\t");
    printf("Subject ");
    printf("Marks\t");
    printf("Grade\n");
    printf("------------------------------------\n");
    for(i=0; i<=4; i++)
    {
        printf("%d\t", (i+1));
        printf("%s ", ch[i]);
        printf("%d\t", x[i]);
        grade();
        printf("------------------------------------\n");
    }
}