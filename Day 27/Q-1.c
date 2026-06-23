// Program to create student record management system:


/* Method:
1) Give options for user to choose like add students, display details, 
   search student details, update details and exit.
2) Take choice from user.
3) If option chosen is to add student, then take details of students from
   user like roll number, name, etc. and store it.
4) If option chosen is to display details, then if record is present,
   print it.
5) If option chosen is to search, then ask for roll number and show
   details if present.
6) If chosen option is to update, then ask for roll number and update
   details if present.
7) If chosen option is exit, then stop showing options and end loop.
*/



#include<stdio.h>
#include<string.h>

struct students
{
    int rollNo;
    char name[50];
    float percentage;
};
int main()
{
    struct students s[100];
    int choice, count=0, i, roll, found, update;

    while(1)
    {

        printf("*** Student Record Management System ***\n\n");
        printf("1) Add Student\n");
        printf("2) Display Details\n");
        printf("3) Search Student\n");
        printf("4) Update Details\n");
        printf("5) Exit\n");

        printf("Enter choice = ");
        scanf("%d", &choice);

        switch( choice )
        {
            case 1:
                if( count == 100 )
                {
                    printf("Storage is Full");
                    break;
                }

                printf("Enter roll number = ");
                scanf("%d", &s[count].rollNo);

                printf("Enter name = ");
                getchar();
                fgets(s[count].name, sizeof(s[count].name), stdin);
                s[count].name[strcspn(s[count].name, "\n")] = '\0';

                printf("Enter percentage = ");
                scanf("%f", &s[count].percentage);

                count++;
                printf("Details added successfully!\n");
                break;

            case 2:
                if( count == 0)
                {
                    printf("No Record found\n");
                }
                else{
                    printf("  Student Records  \n");
                    for( i=0; i < count; i++)
                    {
                        printf(" Roll Number = %d\n",s[i].rollNo);
                        printf(" Name = %s\n",s[i].name);
                        printf(" Percentage = %.2f\n",s[i].percentage);
                    }
                }
                break;

            case 3:
                printf("Enter roll number = ");
                scanf("%d", &roll);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( s[i].rollNo == roll)
                    {
                        printf(" Roll Number = %d\n",s[i].rollNo);
                        printf(" Name = %s\n",s[i].name);
                        printf(" Percentage = %.2f\n",s[i].percentage);

                        found = 1;
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("Roll number not found\n");
                }
                break;

        case 4:
            printf("Enter Roll Number to update = ");
            scanf("%d", &update);

            found = 0;

            for( i=0; i < count; i++)
            {
                if( s[i].rollNo == update)
                {
                    found = 1; 

                    printf("Enter new name = ");
                    getchar();
                    fgets(s[i].name, sizeof(s[i].name), stdin);
                    s[i].name[strcspn(s[i].name, "\n")] = '\0';

                    printf("Enter new percentage = ");
                    scanf("%f", &s[i].percentage);

                    printf("Record Updated Successfully!\n");
                    break;
                }
            }

            if( found == 0)
            {
                printf("Roll Number Not Found\n");
            }
            break;

        case 5:
            printf("Thank You!\n");
            return 0;
        
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}