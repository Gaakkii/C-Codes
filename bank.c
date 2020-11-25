/*      Create a structure Bank to maintain the records of a bank customers. It has the following fields        */
/*      customer_id,Name, Account-type,Balance.                                                                 */
/*        a. A new record is added when a customer open an account.                                             */
/*        b. A existing record is updated when user deposits or withdraw an amount.                             */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main (void)
{
    //structure to define the main variables
    struct bank
    {
        char *name[99], *account_type[99], *user_passwd[99];
        int balance[99], customer_id[99];
    };
    struct bank bk;

    //varibles for checking the login details
    int i, check_account_id, deposit_withdraw, deposit, withdraw;
    char check[99], check_user_name[99], check_user_passwd[99], check_account_type[99];

    //asking the user for login type
    printf("Please enter the login type (User/Administrator): ");
    gets(check);

    //condition to check wether the login type is either user or administrator
    if(strcmp(check,"User")==0 || strcmp(check,"user")==0)
    {

        //storing the user_name
        bk.name[0] = "Hriday";
        bk.name[1] = "Deep";

        //asking for the name
        printf("Enter your name: ");
        gets(check_user_name);

        //loop for checking the name from the stored value
        for(i=0; i<2; i++)
        {

            //condition to check the user name
            if(strcmp(check_user_name,bk.name[i])==0)
            {
                printf("Welcome %s. \n", bk.name[i]);

                //asking for the password
                printf("Please enter your password: ");
                gets(check_user_passwd);

                //storing the password
                bk.user_passwd[0] = "hriday";
                bk.user_passwd[1] = "deep";

                //loop to check the password entere by the user
                for(i=0; i<3; i++)
                {

                    //condition to check the user password
                    if(strcmp(check_user_passwd,bk.user_passwd[i])==0)
                    {
                        
                        //loop to generate account number
                        for(i=0; i<2;i++)
                        {
                            bk.customer_id[i] = rand() % 1000000000000 + 99999999999;
                        }

                        //loop to show account number so generated 
                        for(i=0; i<2;i++)
                        {
                            printf("%d\n", bk.customer_id[i]);
                        }

                        //asking for the account number
                        printf("Please enter your account number: ");
                        scanf("%d", &check_account_id);

                        //loop to check the account number entered by the user
                        for(i=0; i<2;i++)
                        {
                            //condition to check the password with the password stored
                            if(check_account_id==bk.customer_id[i])
                            {
                                printf("You have entered the correct customer id.\n");

                                //asking for the account type from the user
                                printf("Now please enter your account type (Savings/Current): ");
                                scanf("%s", &check_account_type);

                                //saving different types of account type
                                bk.account_type[0] = "Savings";
                                bk.account_type[1] = "Current";
                                bk.account_type[2] = "savings";
                                bk.account_type[3] = "current";
                                
                                //loop to check the account type from the stored
                                for(i=0; i<4;i++)
                                {

                                    //condition for checking the account type from the stored account types
                                    if(strcmp(check_account_type,bk.account_type[i])==0)
                                    {
                                        printf("You have finally successfully logged in.\n");
                                        for(i=0 ; i<4; i++)
                                        {
                                            if(strcmp(check_account_type,bk.account_type[i])==0)
                                            {
                                                printf("Welcome to your savings account.\n");

                                                //asking the user what he wants to do i.e. deposit or withdraw
                                                printf("Please follow the following instructions to continue.\n");
                                                printf("Type 1 if you wish to deposit amount from your account.\n");
                                                printf("Type 2 if you wish to withdraw amount from your account.\n");
                                                scanf("%d", &deposit_withdraw);
                                                
                                                //storing the amount in balance variable (i.e. the account balance)
                                                bk.balance[0] = 10000;
                                                bk.balance[1] = 10000;

                                                //condition for deposit
                                                if(deposit_withdraw == 1)
                                                {
                                                    printf("Please enter the amount you wish to deposit from your account: ");
                                                    scanf("%d", &deposit);
                                                    bk.balance[i] = bk.balance[i] + deposit ;
                                                    printf("The amount you deposited is %d.\n", deposit);
                                                    printf("After depositing the new balance of your account is %d.\n",bk.balance[i]);
                                                }

                                                //condition for withdraw
                                                else if(deposit_withdraw == 2)
                                                {
                                                    printf("Please enter the amount you wish to withdraw from your account: ");
                                                    scanf("%d", &withdraw);
                                                    bk.balance[i] = bk.balance[i] - withdraw;
                                                    printf("The amount you withdrawed is %d.\n", withdraw);
                                                    printf("Afte withdrawing the new balance of your account is %d.\n", bk.balance[i]);
                                                }

                                                printf("Press (enter) to log out of this window.\n");
                                                getch();
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    else
                                    {
                                        printf("You have entered the incorrect account type.\n");
                                        break;
                                    }
                                    
                                }
                                break;
                            }
                            else
                            {
                                printf("The account id entered is incorrect.\n");
                            }
                            
                        }
                    }
                }
                break;
            }
            else
            {
                printf("Error.\n");
                break;
            }
            
        }
    }
    else if(strcmp(check,"administrator")==0 || strcmp(check,"Administrator")==0)
    {
        
    }
    else
    {
        printf("Wrong login type.\n");
    }
    
}