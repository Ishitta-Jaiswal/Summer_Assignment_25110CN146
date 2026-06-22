// Program to create ATM stimulation:


/* Method:
1) Give choices for user to choose like balance check, deposit, withdrawl,
   or end activity.
2) Take choice from user.
3) If balance check is chosen, print the balance.
4) If deposition is chosen, take amount from user and add it to balance 
   and print it.
5) If withdrawal is chosen, take amount from user and subtract it
   from balance and print the balance left.
6) If end activity is chosen, stop giving choices and end activity.
*/



#include<stdio.h>

int main()
{
    int choice;
    float balance= 10000, amount;

    while(1)
    {

        printf(" *** ATM Services *** \n");
        printf(" 1) Check Balance\n");
        printf(" 2) Deposit\n");
        printf(" 3) Withdraw\n");
        printf(" 4) Exit\n");

        printf("Enter choice = ");
        scanf("%d", &choice);

        switch( choice)
        {
            case 1:
                printf(" Current Balance = %.2f\n",balance);
                break;

            case 2:
                printf(" Enter amount = ");
                scanf("%f", &amount);

                if( amount > 0)
                {
                    printf(" Deposit successful..\n");
                    balance += amount;
                    printf(" New Balance = %.2f\n",balance);
                }
                else{
                    printf("Invalid amount\n");
                }
                break;

            case 3:
                printf(" Enter amount = ");
                scanf("%f", &amount);

                if( amount > 0)
                {
                    if( amount <= balance)
                    {
                        printf(" Withdrawal successful..\n");
                        balance -= amount;
                        printf(" Amount left = %.2f\n",balance);
                    }
                    else{
                        printf("Not sufficient balance\n");
                    }
                }
                else{
                    printf("Invalid amount\n");
                }
                break;
        
            case 4:
                printf("Thank you for using ATM\n");
                return 0;

            default:
                printf("Invalid choice\n");
                break;
        }
    }   
    return 0;
}