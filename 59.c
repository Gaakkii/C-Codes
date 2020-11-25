/*Write three function and call only one function in main and the other two called automatically*/
#include<stdio.h>
char ananauto(void)
{
    printf("This is another function and is called automatically by the previous function.\n");
}
char anauto(void)
{
    printf("This is a function and is called automatically by the previous function.\n");
    ananauto();
}
char oauto(void)
{
    printf("This is a function.\n");
    anauto();
}
int main (void)
{
    oauto();
}