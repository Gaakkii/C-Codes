/*accept an alphabet from the user and check whether it is a vowel ornot*/
#include<stdio.h>
int main (void)
{
    char c;
    printf("Enter any alphabet:\n");
    scanf("%c", &c);

    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
    {
        printf("The alphabet entered is a vowel.\n");
    }
    else
    {
        printf("The alphabet entered is not a vowel.\n");
    }
    
}