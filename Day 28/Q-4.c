// Program to create contact management system:


/* Method:
1) Give options for user to choose like add contact, display contact, 
   search contact, update contact, delete contact, count contacts and exit.
2) Take choice from user.
3) If option chosen is to add, then take details of contacts from user
   like name, phone number, email etc. and store it.
4) If option chosen is to display, then if record is present, print it.
5) If option chosen is to search, then ask for name and show details,
   if present.
6) If chosen option is to update, then ask for name and update details,
   if present.
7) If chosen option is to delete, then ask for name and delete the
   details.
8) If chosen option is to count number of contacts, then print number.
9) If chosen option is exit, then stop showing options and end loop.
*/



#include<stdio.h>
#include<string.h>

struct contacts
{
    char name[50];
    char phone[50];
    char email[59];
};

int main()
{
    struct contacts con[100];
    int choice, count=0, i, j, found;
    char name[50], update[50], delete[50];
    
    while(1)
    {
        printf("*** Contact Management System ***\n\n");
        printf("1) Add Contact\n");
        printf("2) Display Contact\n");
        printf("3) Search Contact\n");
        printf("4) Update Contact\n");
        printf("5) Delete Contact\n");
        printf("6) Count Contacts\n");
        printf("7) Exit\n");

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
                
                printf("Enter Name = ");
                getchar();
                fgets(con[count].name, sizeof(con[count].name), stdin);
                con[count].name[strcspn(con[count].name, "\n")] = '\0';

                printf("Enter Phone Number = ");
                fgets(con[count].phone, sizeof(con[count].phone), stdin);
                con[count].phone[strcspn(con[count].phone, "\n")] = '\0';

                printf("Enter Email = ");
                fgets(con[count].email, sizeof(con[count].email), stdin);
                con[count].email[strcspn(con[count].email, "\n")] = '\0';

                count++;
                printf(" Contact Added Successfully \n\n");
                break;
            
            case 2:

                if( count == 0)
                {
                    printf("No Record Found\n\n");
                }
                else{
                    printf(" * Contact Details * \n");
                    for( i=0; i < count; i++)
                    {
                        printf("Name = %s\n",con[i].name);
                        printf("Phone Number = %s\n",con[i].phone);
                        printf("Email = %s\n\n",con[i].email);
                    }
                }
                break;

            case 3:

                printf("Enter Name = ");
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( strcmp(con[i].name, name) == 0 )
                    {
                        printf("Name = %s\n",con[i].name);
                        printf("Phone Number = %s\n",con[i].phone);
                        printf("Email = %s\n\n",con[i].email);

                        found = 1;
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("Contact Not Found\n\n");
                }
                break;

            case 4:

                printf("Enter Name = ");
                getchar();
                fgets(update, sizeof(update), stdin);
                update[strcspn(update, "\n")] = '\0';

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( strcmp(con[i].name, update) == 0 )
                    {
                        found = 1;
                        
                        printf("Enter New Phone Number = ");
                        fgets(con[i].phone, sizeof(con[i].phone), stdin);
                        con[i].phone[strcspn(con[i].phone, "\n")] = '\0';

                        printf("Enter New Email = ");
                        fgets(con[i].email, sizeof(con[i].email), stdin);
                        con[i].email[strcspn(con[i].email, "\n")] = '\0';

                        printf("Contact Updated Successfully!\n\n");
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("Contact Not Found\n\n");
                }
                break;

            case 5:

                printf("Enter Name to Delete = ");
                getchar();
                fgets(delete, sizeof(delete), stdin);
                delete[strcspn(delete, "\n")] = '\0';

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( strcmp(con[i].name, delete) == 0 )
                    {
                        found = 1;

                        for( j=i; j < count -  1; j++)
                        {
                            con[j] = con[ j+1 ];
                        }

                        count--;
                        printf("Contact Deleted Successfully!\n\n");
                        break;
                    }
                }

                if( found == 0 )
                {
                    printf("Contact Not Found\n\n");
                }
                break;

            case 6:
            
                printf("Total Number of Contacts = %d\n\n",count);
                break;

            case 7:

                printf("Thank You!\n\n");
                return 0;

            case 8:

                printf("Invalid Choice\n\n");
                break;

        }
    }
    return 0;
}