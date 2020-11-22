/*write a program to calculate array length*/
#include<stdio.h>
#include<string.h>
int main (void)
{
    char ch[100];

    printf("Enter your name:\n");
    gets(ch);

    printf("Your name is %d characters long", strlen(ch));
}