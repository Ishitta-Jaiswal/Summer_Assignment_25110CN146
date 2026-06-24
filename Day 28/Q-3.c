// Program to create ticket booking system:


/* Method:
1) Give options for user to choose like book ticket, display ticket, search
   ticket, update book, cancel book, check available seats and exit.
2) Take choice from user.
3) If option chosen is to book ticket, then take details from user like
   name, number of seats, amount, etc. and store it.
4) If option chosen is to display, then if record is present, print it.
5) If option chosen is to search, then ask for ticket ID and show details
   if present.
6) If chosen option is to update, then ask for ticket ID and update details,
   if present.
7) If chosen option is to delete, then ask for ticket ID and delete the
   details.
8) If chosen option is to check available seats, then calculate seats left.
9) If chosen option is exit, then stop showing options and end loop.
*/



#include<stdio.h>
#include<string.h>

struct ticket
{
    char name[50];
    int number;
    float amount;
    int ticketId;
};

int main()
{
    struct ticket tic[100];
    int choice, count=0, amount=200, i, j, found;
    int search, update, cancel, seats;
    int ticketId = 1001;

    while(1)
    {

        printf("*** Ticket Booking System ***\n\n");
        printf("1) Book Ticket\n");
        printf("2) Display All Bookings\n");
        printf("3) Search Booking\n");
        printf("4) Update Booking\n");
        printf("5) Cancel Booking\n");
        printf("6) Available Seats\n");
        printf("7) Exit\n");

        printf("Enter choice = ");
        scanf("%d", &choice);

        switch( choice )
        {
            case 1:

                if( count == 100 )
                {
                    printf("Storage is Full\n\n");
                    break;
                }

                printf("Enter Name = ");
                getchar();
                fgets(tic[count].name, sizeof(tic[count].name), stdin);
                tic[count].name[strcspn(tic[count].name, "\n")] = '\0';

                printf("Enter Number of seats = ");
                scanf("%d", &tic[count].number);

                tic[count].amount = amount * tic[count].number;
                printf("Amount = %.2f\n", tic[count].amount);

                printf("Ticket Generated successfully!\n");

                tic[count].ticketId = ticketId;
                ticketId += 1;
                printf("Ticket ID = %d\n\n",tic[count].ticketId);
                count++;
                break;

            case 2:
                if( count == 0)
                {
                    printf("No Record found\n\n");
                }
                else{
                    printf("  Ticket Booking Records  \n");
                    for( i=0; i < count; i++)
                    {
                        printf(" Name = %s\n",tic[i].name);
                        printf(" Number of Seats = %d\n",tic[i].number);
                        printf(" Amount = %.2f\n",tic[i].amount);
                        printf("Ticket ID = %d\n\n",tic[i].ticketId);
                    }
                }
                break;

            case 3:
                printf("Enter ID = ");
                scanf("%d", &search);
                found = 0;

                for( i=0; i < count; i++)
                {
                    if( tic[i].ticketId == search)
                    {
                        printf(" Name = %s\n",tic[i].name);
                        printf(" Number of Seats = %d\n",tic[i].number);
                        printf(" Amount = %.2f\n",tic[i].amount);
                        printf("Ticket ID = %d\n\n",tic[i].ticketId);

                        found = 1;
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("Ticket ID Not Found\n\n");
                }
                break;

        case 4:
            printf("Enter ID to update = ");
            scanf("%d", &update);

            found = 0;

            for( i=0; i < count; i++)
            {
                if( tic[i].ticketId == update)
                {
                    found = 1; 

                    printf("Enter new name = ");
                    getchar();
                    fgets(tic[i].name, sizeof(tic[i].name), stdin);
                    tic[i].name[strcspn(tic[i].name, "\n")] = '\0';

                    printf("Enter New Number of Seats = ");
                    scanf("%d", &tic[i].number);

                    tic[i].amount = amount * tic[i].number;
                    printf("Updated Amount = %.2ff\n",tic[i].amount);

                    printf("Record Updated Successfully!\n\n");
                    break;
                }
            }

            if( found == 0)
            {
                printf("Ticket ID Not Found\n\n");
            }
            break;

        case 5:
            printf("Enter ID to Cancel = ");
            scanf("%d", &cancel);

            found = 0;

            for( i=0; i < count; i++)
            {
                if( tic[i].ticketId == cancel )
                {
                    found = 1;

                    for( j=i; j < count - 1; j++)
                    {
                        tic[j] = tic[j+1];
                    }

                    count--;
                    printf("Ticket Cancelled Successfully!\n\n");
                    break;
                }
            }

            if( found == 0)
            {
                printf("Ticket ID Not Found\n\n");
            }
            break;

        case 6:

            seats = 0;

            for( i=0; i < count; i++)
            {
                seats += tic[i].number;
            }
            printf("Available Seats = %d\n\n",100 - seats);
            break;

        case 7:
            printf("Thank You!\n\n");
            return 0;
        
        default:
            printf("Invalid Choice\n\n");
            break;
        }
    }
    return 0;
}