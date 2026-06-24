// Program to create bank account system:


/* Method:
1) Give options for user to choose like create account, display account, 
   search account, deposit amount, withdraw amount, update account, 
   delete account and exit.
2) Take choice from user.
3) If option chosen is to create, then take details of account from user
   like account number, account holder name, etc. and store it.
4) If option chosen is to display, then if record is present, print it.
5) If option chosen is to search, then ask for account number and show
   details, if present.
6) If option chosen is to deposit, then ask for account number and check if 
   account is available then add amount.
7) If option chosen is to withdraw, then ask for account number and check 
   if account is present, then subtract money is present.
8) If chosen option is to update, then ask for account number and update
   details, if present.
9) If chosen option is to delete, then ask for account number and delete
   the details.
10) If chosen option is exit, then stop showing options and end loop.
*/



#include<stdio.h>
#include<string.h>

struct account
{
    int accNo;
    char name[50];
    float balance;
    float deposit;
    float withdraw;
};

int main()
{
    struct account acc[100];
    int choice, count=0, i, j, found, search, deposit, withdraw;
    int update, delete;
    
    while(1)
    {
        printf("*** Bank Account System ***\n\n");
        printf("1) Create Account\n");
        printf("2) Display Account Details\n");
        printf("3) Search Account\n");
        printf("4) Deposit Money\n");
        printf("5) Withdraw Money\n");
        printf("6) Update Account Details\n");
        printf("7) Delete Account\n");
        printf("8) Exit\n");

        printf("Enter choice = ");
        scanf("%d", &choice);

        switch( choice )
        {
            case 1:

                if( count == 100)
                {
                    printf("Storage is Full\n\n");
                    break;
                }
                
                printf("Enter Account Number = ");
                scanf("%d", &acc[count].accNo);

                printf("Enter Account Holder Name = ");
                getchar();
                fgets(acc[count].name, sizeof(acc[count].name), stdin);
                acc[count].name[strcspn(acc[count].name, "\n")] = '\0';

                printf("Enter Balance = ");
                scanf("%f", &acc[count].balance);

                count++;
                printf(" Account Added Successfully \n\n");
                break;
            
            case 2:

                if( count == 0)
                {
                    printf("No Account Found\n\n");
                }
                else{
                    printf(" * Account Details * \n");
                    for( i=0; i < count; i++)
                    {
                        printf("Account Number = %d\n",acc[i].accNo);
                        printf("Account Holder Name = %s\n",acc[i].name);
                        printf("Balance = %.2f\n\n",acc[i].balance);
                    }
                }
                break;

            case 3:

                printf("Enter Account Number = ");
                scanf("%d", &search);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( acc[i].accNo == search )
                    {
                        printf("Account Number = %d\n",acc[i].accNo);
                        printf("Account Holder Name = %s\n",acc[i].name);
                        printf("Balance = %.2f\n\n",acc[i].balance);

                        found = 1;
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("No Account Found\n\n");
                }
                break;

            case 4:

                printf("Enter Account Number = ");
                scanf("%d", &deposit);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( acc[i].accNo == deposit)
                    {
                        found = 1;
                        printf("Enter Amount to Deposit = ");
                        scanf("%f", &acc[i].deposit);

                        acc[i].balance = acc[i].balance + acc[i].deposit;
                        printf("New Balance = %.2f\n\n",acc[i].balance);
                    }
                }

                if( found == 0)
                {
                    printf("Account Not Found\n\n");
                    break;
                }
                break;

            case 5:

                printf("Enter Account Number = ");
                scanf("%d", &withdraw);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( acc[i].accNo == withdraw)
                    {
                        found = 1;

                        printf("Enter Amount to Withdraw = ");
                        scanf("%f", &acc[i].withdraw);

                        if( acc[i].balance >= acc[i].withdraw)
                        {
                            acc[i].balance = acc[i].balance - acc[i].withdraw;
                            printf("Net Balance = %.2f\n\n", acc[i].balance);
                            break;
                        }
                        else{
                            printf("Not Enough Balance\n\n");
                            break; 
                        }
                    }
                }

                if( found == 0)
                {
                    printf("Account Not Found\n\n");
                    break;
                }
                break;

            case 6:

                printf("Enter Account Number to Update = ");
                scanf("%d", &update);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( acc[i].accNo == update )
                    {
                        found = 1;
                        
                        printf("Enter New Account Holder Name = ");
                        getchar();
                        fgets(acc[i].name, sizeof(acc[i].name), stdin);
                        acc[i].name[strcspn(acc[i].name, "\n")] = '\0';

                        printf("Enter New Balance = ");
                        scanf("%f", &acc[i].balance);

                        printf("Account Details Updated Successfully!\n\n");
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("Account Not Found\n\n");
                }
                break;

            case 7:

                printf("Enter Account Number to Delete = ");
                scanf("%d", &delete);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( acc[i].accNo == delete )
                    {
                        found = 1;

                        for( j=i; j < count -  1; j++)
                        {
                            acc[j] = acc[ j+1 ];
                        }

                        count--;
                        printf("Account Deleted Successfully!\n\n");
                        break;
                    }
                }

                if( found == 0 )
                {
                    printf("Account Not Found\n\n");
                }
                break;

            case 8:

                printf("Thank You!\n\n");
                return 0;

            default:

                printf("Invalid Choice\n\n");
                break;

        }
    }
    return 0;
}