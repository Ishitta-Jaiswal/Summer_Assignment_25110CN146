// Program to create library management system:


/* Method:
1) Give options for user to choose like add book, display book, search
   book, issue book, return book, update book, delete book and exit.
2) Take choice from user.
3) If option chosen is to add, then take details of book from user
   like book ID, author name, etc. and store it.
4) If option chosen is to display, then if record is present, print it.
5) If option chosen is to search, then ask for book ID and show details
   if present.
6) If option chosen is to issue, then ask for book ID and check if 
   copies of book is available then subtract 1.
7) If option chosen is to return, then ask for book ID and increase
   the number of copie by 1.
8) If chosen option is to update, then ask for book ID and update details,
   if present.
9) If chosen option is to delete, then ask for book ID and delete the
   details.
10) If chosen option is exit, then stop showing options and end loop.
*/



#include<stdio.h>
#include<string.h>

struct books
{
    int id;
    char name[50];
    char author[50];
    int copies;
};

int main()
{
    struct books book[100];
    int choice, count=0, bookId, i, j, issue, back, update, delete, found;
    
    while(1)
    {
        printf("*** Library Management System ***\n\n");
        printf("1) Add Book\n");
        printf("2) Display Book\n");
        printf("3) Search Book\n");
        printf("4) Issue Book\n");
        printf("5) Return Book\n");
        printf("6) Update Book\n");
        printf("7) Delete Book\n");
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
                
                printf("Enter Book ID = ");
                scanf("%d", &book[count].id);

                printf("Enter Book Name = ");
                getchar();
                fgets(book[count].name, sizeof(book[count].name), stdin);
                book[count].name[strcspn(book[count].name, "\n")] = '\0';

                printf("Enter Book Author = ");
                fgets(book[count].author, sizeof(book[count].author), stdin);
                book[count].author[strcspn(book[count].author, "\n")] = '\0';

                printf("Enter number of copies = ");
                scanf("%d", &book[count].copies);

                count++;
                printf(" Details Added Successfully \n\n");
                break;
            
            case 2:

                if( count == 0)
                {
                    printf("No Record Found\n\n");
                }
                else{
                    printf(" * Books Record * \n");
                    for( i=0; i < count; i++)
                    {
                        printf("Book ID = %d\n",book[i].id);
                        printf("Book Name = %s\n",book[i].name);
                        printf("Book Author = %s\n",book[i].author);
                        printf("Number of copies = %d\n\n",book[i].copies);
                    }
                }
                break;

            case 3:

                printf("Enter Book ID = ");
                scanf("%d", &bookId);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( book[i].id == bookId )
                    {
                        printf("Book ID = %d\n",book[i].id);
                        printf("Book Name = %s\n",book[i].name);
                        printf("Book Author = %s\n",book[i].author);
                        printf("Number of copies = %d\n\n",book[i].copies);

                        found = 1;
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("No Record Found\n\n");
                }
                break;

            case 4:

                printf("Enter Book ID = ");
                scanf("%d", &issue);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( book[i].id == issue)
                    {
                        found = 1;

                        if( book[i].copies > 0)
                        {
                            book[i].copies--;
                            printf("Book Issued!\n\n");
                        }
                        else{
                            printf("No Copies Available\n\n");
                        }
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("No Copies Available\n\n");
                    break;
                }
                break;

            case 5:

                printf("Enter Book ID = ");
                scanf("%d", &back);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( book[i].id == back)
                    {
                        book[i].copies++;
                        found = 1;
                        printf("Book Returned!\n\n");
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("Book Not Found\n\n");
                    break;
                }
                break;

            case 6:

                printf("Enter Book ID to Update = ");
                scanf("%d", &update);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( book[i].id == update )
                    {
                        found = 1;
                        
                        printf("Enter New Book Name = ");
                        getchar();
                        fgets(book[i].name, sizeof(book[i].name), stdin);
                        book[i].name[strcspn(book[i].name, "\n")] = '\0';

                        printf("Enter Book Author = ");
                        fgets(book[i].author, sizeof(book[i].author), stdin);
                        book[i].author[strcspn(book[i].author, "\n")] = '\0';

                        printf("Enter number of copies = ");
                        scanf("%d", &book[i].copies);

                        printf("Book Details Updated Successfully!\n\n");
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("Book Not Found\n\n");
                }
                break;

            case 7:

                printf("Enter Book ID to Delete = ");
                scanf("%d", &delete);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( book[i].id == delete )
                    {
                        found = 1;

                        for( j=i; j < count -  1; j++)
                        {
                            book[j] = book[ j+1 ];
                        }

                        count--;
                        printf("Details Deleted Successfully!\n\n");
                        break;
                    }
                }

                if( found == 0 )
                {
                    printf("Details Not Found\n\n");
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