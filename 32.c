/* write a program to check whether the number is palindrome or not (121->121(true) 123->321(false))*/
#include<stdio.h>
int main (void)
{
    int x, a, b, c, s;
    printf("Enter any three digit number:\n");
    scanf("%d", &x);
    a = x/100;
    b = (x%100)/10;
    c = x%10;
    s = (c*100) + (b*10) + (a*1);
    if(x==s)
    {
        printf("The number entered is a palindrome number.\n");
    }
    else
    {
        printf("The number entered is not a palindrome number.\n");
    }
}