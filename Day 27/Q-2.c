// Program to create employee management system:


/* Method:
1) Give options for user to choose like add employee, display details, 
   search employee details, update details, delete employee and exit.
2) Take choice from user.
3) If option chosen is to add employee, then take details of employee from
   user like employee ID, name, etc. and store it.
4) If option chosen is to display details, then if record is present,
   print it.
5) If option chosen is to search, then ask for employee ID and show
   details if present.
6) If chosen option is to update, then ask for employee ID and update
   details if present.
7) If chosen option is to delete, then ask for employee ID and delete
   the details.
8) If chosen option is exit, then stop showing options and end loop.
*/



#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct employee emp[100];
    int choice, count=0, i, j, id, found, update, empId;

    while(1)
    {

        printf("*** Employee Management System ***\n");
        printf("1) Add Employee\n");
        printf("2) Display Employees\n");
        printf("3) Search Employee\n");
        printf("4) Update Employee\n");
        printf("5) Delete Employee\n");
        printf("6) Exit\n");

        printf("Enter choice = ");
        scanf("%d", &choice);

        switch( choice )
        {
            case 1:

                if( count == 100 )
                {
                    printf("Employee Storage is Full");
                    break;
                }

                printf("Enter ID = ");
                scanf("%d", &emp[count].id);

                printf("Enter name = ");
                getchar();
                fgets(emp[count].name, sizeof(emp[count].name), stdin);
                emp[count].name[strcspn(emp[count].name, "\n")] = '\0';

                printf("Enter department = ");
                fgets(emp[count].department, sizeof(emp[count].department), stdin);
                emp[count].department[strcspn(emp[count].department, "\n")] = '\0';


                printf("Enter salary = ");
                scanf("%f", &emp[count].salary);

                count++;
                printf("Details added successfully!\n");
                break;

            case 2:
                if( count == 0)
                {
                    printf("No Record found\n");
                }
                else{
                    printf("  Employee Records  \n");
                    for( i=0; i < count; i++)
                    {
                        printf(" ID = %d\n",emp[i].id);
                        printf(" Name = %s\n",emp[i].name);
                        printf(" Department = %s\n",emp[i].department);
                        printf(" Salary = %.2f\n",emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter ID = ");
                scanf("%d", &id);

                found = 0;

                for( i=0; i < count; i++)
                {
                    if( emp[i].id == id)
                    {
                        printf(" Employee ID = %d\n",emp[i].id);
                        printf(" Name = %s\n",emp[i].name);
                        printf(" Department = %s\n",emp[i].department);
                        printf(" Salary = %.2f\n",emp[i].salary);

                        found = 1;
                        break;
                    }
                }

                if( found == 0)
                {
                    printf("ID Not Found\n");
                }
                break;

        case 4:
            printf("Enter ID to update = ");
            scanf("%d", &update);

            found = 0;

            for( i=0; i < count; i++)
            {
                if( emp[i].id == update)
                {
                    found = 1; 

                    printf("Enter new name = ");
                    getchar();
                    fgets(emp[i].name, sizeof(emp[i].name), stdin);
                    emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

                    printf("Enter new department = ");
                    fgets(emp[i].department, sizeof(emp[i].department), stdin);
                    emp[i].department[strcspn(emp[i].department, "\n")] = '\0';


                    printf("Enter new salary = ");
                    scanf("%f", &emp[i].salary);

                    printf("Record Updated Successfully!\n");
                    break;
                }
            }

            if( found == 0)
            {
                printf("Employee ID Not Found\n");
            }
            break;

        case 5:
            printf("Enter ID to delete = ");
            scanf("%d", &empId);

            found = 0;

            for( i=0; i < count; i++)
            {
                if( emp[i].id == empId )
                {
                    found = 1;

                    for( j=i; j < count - 1; j++)
                    {
                        emp[j] = emp[j+1];
                    }

                    count--;
                    printf("Record Deleted Successfully!\n");
                    break;
                }
            }

            if( found == 0)
            {
                printf("Employee ID Not Found\n");
            }
            break;

        case 6:
            printf("Thank You!\n");
            return 0;
        
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}