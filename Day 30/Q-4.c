// Program to create complete mini project using arrays, string and 
// functions:


/* Method:
1) Let us create course registration system.
2) First create different functions for different purposes like to add
   students, display students, etc.
3) Then give user different options to choose.
4) Take choice from user and perform the activity accordingly by calling
   the required function.
5) Keep showing options till user choses exit.
*/



#include<stdio.h>
#include<string.h>

struct students
{
    int rollNo;
    char name[50];
    char course[50];
    int sem;
};

void add(struct students s[], int *count)
{
    printf("Enter Roll Number = ");
    scanf("%d", &s[*count].rollNo);

    printf("Enter Name = ");
    getchar();
    fgets(s[*count].name, sizeof(s[*count].name), stdin);
    s[*count].name[strcspn(s[*count].name, "\n")] = '\0';

    printf("Enter Course = ");
    fgets(s[*count].course, sizeof(s[*count].course), stdin);
    s[*count].course[strcspn(s[*count].course, "\n")] = '\0';

    printf("Enter Semester = ");
    scanf("%d", &s[*count].sem);

    (*count)++;
    printf("Student Details Added Successfully!\n\n");
}

void display(struct students s[], int count)
{
    int i;

    if( count == 0)
    {
        printf("No Record Found\n\n");
        return;
    }

    printf("\n---------------------------------------------------\n");
    printf("Roll No\tName\tCourse\tSemester\n");
    printf("\n---------------------------------------------------\n");

    for( i=0; i < count; i++)
    {
        printf("%-10d%-20s%-20s%-10d\n",s[i].rollNo, s[i].name, 
                                        s[i].course, s[i].sem);
    }
    printf("\n");
}

void search(struct students s[], int count)
{
    int i, search, found=0;

    printf("Enter Roll Number to search = ");
    scanf("%d", &search);

    for( i=0; i < count; i++)
    {
        if( s[i].rollNo == search)
        {
            found = 1;

            printf("Roll Number = %d\n",s[i].rollNo);
            printf("Name = %s\n",s[i].name);
            printf("Course = %s\n",s[i].course);
            printf("Semester = %d\n\n",s[i].sem);

            break;
        }
    }
    if(found == 0)
    {
        printf("No Record Found\n\n");
    }
}

void update(struct students s[], int count)
{
    int i, update, found=0;

    printf("Enter Roll Number to Update = ");
    scanf("%d", &update);

    for( i=0; i < count; i++)
    {
        if( s[i].rollNo == update)
        {
            found = 1;

            printf("Enter New Name = ");
            getchar();
            fgets(s[i].name, sizeof(s[i].name), stdin);
            s[i].name[strcspn(s[i].name, "\n")] = '\0';

            printf("Enter New Course = ");
            fgets(s[i].course, sizeof(s[i].course), stdin);
            s[i].course[strcspn(s[i].course, "\n")] = '\0';

            printf("Enter New Semester = ");
            scanf("%d", &s[i].sem);

            printf("Record Updated Successfully!\n\n");

            break;
        }
    }
    if(found == 0)
    {
        printf("No Record Found\n\n");
    }
}

void delete(struct students s[], int *count)
{
    int i, j, delete, found=0;

    printf("Enter Roll Number to Delete = ");
    scanf("%d", &delete);

    for( i=0; i < *count; i++)
    {
        if( s[i].rollNo == delete )
        {
            found = 1;

            for( j=i; j < *count - 1; j++)
            {
                s[j] = s[ j + 1 ];
            }
            (*count)--;

            printf("Record Deleted Sussessfully!\n\n");
            break;
        }
    }

    if( found == 0)
    {
        printf("No Record Found\n\n");
    }
}

void total(int count)
{
    printf("Total Registered Students = %d\n\n",count);
}

void displayByCourse(struct students s[], int count)
{
    int i, found=0;
    char course[50];

    printf("Enter Course to display = ");
    getchar();
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "\n")] = '\0';

    for( i=0; i < count; i++)
    {
        if( strcmp(s[i].course, course) == 0)
        {
            found = 1;

            printf("Roll number = %d\n",s[i].rollNo);
            printf("Name = %s\n",s[i].name);
            printf("Course = %s\n",s[i].course);
            printf("Semester = %d\n\n",s[i].sem);
        }
    }
    if( found == 0)
    {
        printf("No Record Found\n\n");
    }
}

void displayBySemester(struct students s[], int count)
{
    int i, sem, found=0;
    
    printf("Enter Semester to display = ");
    scanf("%d", &sem);

    for( i=0; i < count; i++)
    {
        if( s[i].sem == sem)
        {
            found = 1;

            printf("Roll number = %d\n",s[i].rollNo);
            printf("Name = %s\n",s[i].name);
            printf("Course = %s\n",s[i].course);
            printf("Semester = %d\n\n",s[i].sem);
        }
    }
    if( found == 0)
    {
        printf("No Record Found\n\n");
    }
}

int main()
{
    struct students s[100];
    int choice, count=0;

    while(1)
    {
        printf("*** Course Registration System ***\n\n");
        printf("1) Add Student\n");
        printf("2) Display Students\n");
        printf("3) Search Student\n");
        printf("4) Update Details\n");
        printf("5) Delete Details\n");
        printf("6) Total Students\n");
        printf("7) Display Students by Course\n");
        printf("8) Display Studemts by Semester\n");
        printf("9) Exit\n\n");

        printf("Enter Choice = ");
        scanf("%d", &choice);

        switch( choice )
        {
            case 1:

                add(s, &count);
                break;

            case 2:

                display(s, count);
                break;

            case 3:

                search(s, count);
                break;

            case 4:

                update(s, count);
                break;

            case 5:

                delete(s, &count);
                break;

            case 6:

                total(count);
                break;

            case 7:

                displayByCourse(s, count);
                break;

            case 8:

                displayBySemester(s, count);
                break;

            case 9:

                printf("Thank You!\n\n");
                return 0;

            default:

                printf("Invalid Choice\n\n");
                break;
        }
    }
    return 0;
}