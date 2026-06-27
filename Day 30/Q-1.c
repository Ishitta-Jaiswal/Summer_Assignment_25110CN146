// Program to create student record system using arrays and strings:


/* Method:
1) Give options for user to choose.
2) Add differnt cases using switch, arrays, strings and loops.
3) Add diiferent options like to add student, display all students details,
   search student, update student, delete student, and exit.
4) Take student details from user like roll number, name, marks obtained
   in different subjects. Calculate total marks and percentage. Also 
   print whether student is pass or fail and grade according to 
   percentage obtained by each student.
3) Take choice from user each time and give optput accordingly.
4) Keep showing options till user choses Exit.
*/



#include<stdio.h>
#include<string.h>

struct students
{
    int rollNo;
    char name[50];
    int english, hindi, physics, chemistry, maths;
    float totalMarks, percentage;
};

void grade(struct students s[], int i)
{
    if( s[i].english >= 33  &&  s[i].hindi >= 33  &&  
        s[i].physics >= 33  &&  s[i].chemistry >= 33  &&  
        s[i].maths >= 33 )
    {
        printf("Pass!\n");

        if( s[i].percentage >= 90  &&  s[i].percentage <= 100)
        {
            printf(" Grade = A+\n");
        }
        else if( s[i].percentage >= 80  && s[i].percentage < 90)
        {
            printf(" Grade = A\n");
        }
        else if( s[i].percentage >= 70   &&  s[i].percentage < 80)
        {
            printf(" Grade = B\n");
        }
        else if( s[i].percentage >= 60  &&  s[i].percentage < 70)
        {
            printf(" Grade = C\n");
        }
        else if( s[i].percentage >= 50  && s[i].percentage < 60)
        {
            printf(" Grade = D\n");
        }
        else{
            printf(" Grade = F\n");
        }
    }
    else{
        printf("Fail!\n");
        printf(" No Grade Granted\n\n");
    }
}

int main()
{
    struct students s[100];
    int choice, count=0, i, j, roll, found, update, delete;

    while(1)
    {

        printf("*** Student Record Management System ***\n\n");
        printf("1) Add Student\n");
        printf("2) Display Details\n");
        printf("3) Search Student\n");
        printf("4) Update Details\n");
        printf("5) Delete Details\n");
        printf("6) Exit\n");

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

                printf(" Marks Obtained \n");
                printf("Enter marks in English = ");
                scanf("%d", &s[count].english);

                printf("Enter marks in Hindi = ");
                scanf("%d", &s[count].hindi);

                printf("Enter marks in Physics = ");
                scanf("%d", &s[count].physics);

                printf("Enter marks in Chemistry = ");
                scanf("%d", &s[count].chemistry);

                printf("Enter marks in Maths = ");
                scanf("%d", &s[count].maths);

                s[count].totalMarks = s[count].english + s[count].hindi + 
                                      s[count].physics + s[count].chemistry + 
                                      s[count].maths;
                printf("Total Marks Obtained = %.2f\n",s[count].totalMarks);

                s[count].percentage = s[count].totalMarks / 5;
                printf("Percentage = %.2f%%\n",s[count].percentage);

                grade(s, count);

                count++;
                printf("Details added successfully!\n\n");
                break;

            case 2:
                if( count == 0)
                {
                    printf("No Record found\n\n");
                }
                else{
                    printf("  Student Records  \n");
                    for( i=0; i < count; i++)
                    {
                        printf(" Roll Number = %d\n",s[i].rollNo);
                        printf(" Name = %s\n",s[i].name);
                        printf(" Marks in English = %d\n",s[i].english);
                        printf(" Marks in Hindi = %d\n",s[i].hindi);
                        printf(" Marks in Physics = %d\n",s[i].physics);
                        printf(" Marks in Chemistry = %d\n",s[i].chemistry);
                        printf(" Marks in Maths = %d\n",s[i].maths);
                        printf(" Percentage = %.2f\n",s[i].percentage);
                        grade(s, i);
                        printf("\n");
                    }
                }
                printf("\n");
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
                        printf(" Marks in English = %d\n",s[i].english);
                        printf(" Marks in Hindi = %d\n",s[i].hindi);
                        printf(" Marks in Physics = %d\n",s[i].physics);
                        printf(" Marks in Chemistry = %d\n",s[i].chemistry);
                        printf(" Marks in Maths = %d\n",s[i].maths);
                        printf(" Percentage = %.2f\n",s[i].percentage);
                        grade(s, i);

                        found = 1;
                        break;
                    }
                }
                printf("\n");

                if( found == 0)
                {
                    printf("Roll number not found\n\n");
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

                    printf(" Marks Obtained \n");
                    printf("Enter marks in English = ");
                    scanf("%d", &s[i].english);

                    printf("Enter marks in Hindi = ");
                    scanf("%d", &s[i].hindi);

                    printf("Enter marks in Physics = ");
                    scanf("%d", &s[i].physics);

                    printf("Enter marks in Chemistry = ");
                    scanf("%d", &s[i].chemistry);

                    printf("Enter marks in Maths = ");
                    scanf("%d", &s[i].maths);

                    s[i].totalMarks = s[i].english + s[i].hindi + 
                                      s[i].physics + s[i].chemistry + 
                                      s[i].maths;
                    printf("Total Marks Obtained = %.2f\n",s[i].totalMarks);

                    s[i].percentage = s[i].totalMarks / 5;
                    printf("Percentage = %.2f%%\n",s[i].percentage);

                    grade(s, i);

                    printf("Record Updated Successfully!\n\n");
                    break;
                }
            }

            if( found == 0)
            {
                printf("Roll Number Not Found\n\n");
            }
            break;

        case 5:

            printf("Enter roll number to delete = ");
            scanf("%d", &delete);

            found = 0;

            for( i=0; i < count; i++)
            {
                if( s[i].rollNo == delete)
                {
                    found = 1;

                    for( j=i; j < count - 1; j++)
                    {
                        s[j] = s[j+1];
                    }

                    count--;
                    printf("Student Details Deleted Successfully!\n\n");
                }
            }
            if( found == 0)
            {
                printf("Roll Number Not Found\n\n");
            }
            break;

        case 6:
            printf("Thank You!\n\n");
            return 0;
        
        default:
            printf("Invalid Choice\n\n");
            break;
        }
    }
    return 0;
}