/*Write a find size of various data types*/
#include<stdio.h>
#include<string.h>
int main (void)
{
    char ch[20];

    printf("Enter the data type whose size is to be found:\n");
    gets(ch);

    if(strcmp(ch,"int")==0)
        printf("The data type entered is int and the size is %d\n", sizeof(int));
    else if(strcmp(ch,"char")==0)
        printf("The data type entered is char and the size is %d", sizeof(char));
    else if(strcmp(ch,"float")==0)
        printf("The data type entered is float and the size is %d\n", sizeof(float));
    else if(strcmp(ch,"long")==0)
        printf("The data type entered is long and the size is %d.\n", sizeof(long));   
    else if(strcmp(ch,"double")==0)
        printf("The data type entered is double and the size is %d.\n", sizeof(double));
    else if(strcmp(ch,"void")==0)
        printf("The data type entered is void and the size is %d.\n", sizeof(void));
    else if(strcmp(ch,"signed")==0)
        printf("The data type entered is signed and the size is %d.\n", sizeof(signed));
    else if(strcmp(ch,"unsigned")==0)
        printf("The data type entered is unsigend and the size is %d.\n", sizeof(unsigned));
    else if(strcmp(ch,"short")==0)
        printf("The data typed entered is short and the size is %d.\n", sizeof(short));
    else
    {
        printf("The data type entered is invalid.\n");
    }
    
}