/*Write a program to store the information of a single client*/
#include<stdio.h>
int main (void)
{
    struct client
    {
        char name[900], designation[900], address[900], company[900];
        int salary; 
    };
    struct client cl;
    printf("Enter the name of the client: ");
    gets(cl.name);
    printf("Enter the address of the client: ");
    gets(cl.address);
    printf("Enter the designation of the client: ");
    gets(cl.designation);
    printf("Enter the company: ");
    gets(cl.company);
    printf("Enter the salary of the client: ");
    scanf("%d", &cl.salary);
    printf("\n");
    printf("The name of the client is '%s'.\n", cl.name);
    printf("The address of the client is '%s'.\n", cl.address);
    printf("The salary of the client is '%d'.\n", cl.salary);
    printf("The designation of the client is '%s'.\n", cl.designation);
    printf("The company of the client is '%s'.\n", cl.company);

}