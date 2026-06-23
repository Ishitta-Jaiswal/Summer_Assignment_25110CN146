// Program to create marksheet generation system:


/* Method:
1) Take number of students from user.
2) Start a loop.
3) Take student details one by one and store it.
4) Aske for student's roll number, name, marks obtained in different
   subjects, etc.
5) Calculate total marks and percentage of each student and print it.
6) If marks obtained in each subject is greater than or equal to 33, 
   print student is pass otherwise fail.
7) Also print grades based on percentage obtained.
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

int main()
{
    struct students stu[100];
    int n, i;

    printf("*** Marksheet Generation System ***\n\n");

    printf("Enter number of students = ");
    scanf("%d", &n);
    
    for( i=0; i<n; i++)
    {
        printf("Student %d details\n",i+1);

        printf("Enter roll number = ");
        scanf("%d", &stu[i].rollNo);

        printf("Enter name = ");
        getchar();
        fgets(stu[i].name, sizeof(stu[i].name), stdin);
        stu[i].name[strcspn(stu[i].name, "\n")] = '\0';

        printf(" Marks Obtained \n");
        printf("Enter marks in English = ");
        scanf("%d", &stu[i].english);

        printf("Enter marks in Hindi = ");
        scanf("%d", &stu[i].hindi);

        printf("Enter marks in Physics = ");
        scanf("%d", &stu[i].physics);

        printf("Enter marks in Chemistry = ");
        scanf("%d", &stu[i].chemistry);

        printf("Enter marks in Maths = ");
        scanf("%d", &stu[i].maths);

        stu[i].totalMarks = stu[i].english + stu[i].hindi + stu[i].physics
                            + stu[i].chemistry + stu[i].maths;
        printf("Total Marks Obtained = %.2f\n",stu[i].totalMarks);

        stu[i].percentage = stu[i].totalMarks / 5;
        printf("Percentage = %.2f%%\n",stu[i].percentage);

        if( stu[i].english >= 33  &&  stu[i].hindi >= 33  &&  
            stu[i].physics >= 33  &&  stu[i].chemistry >= 33  &&  
            stu[i].maths >= 33 )
        {
            printf("Pass!\n");

            if( stu[i].percentage >= 90  &&  stu[i].percentage <= 100)
            {
                printf(" Grade = A+\n");
            }
            else if( stu[i].percentage >= 80  && stu[i].percentage < 90)
            {
                printf(" Grade = A\n");
            }
            else if( stu[i].percentage >= 70   &&  stu[i].percentage < 80)
            {
                printf(" Grade = B\n");
            }
            else if( stu[i].percentage >= 60  &&  stu[i].percentage < 70)
            {
                printf(" Grade = C\n");
            }
            else if( stu[i].percentage >= 50  && stu[i].percentage < 60)
            {
                printf(" Grade = D\n");
            }
            else{
                printf(" Grade = F\n");
            }
        }
        else{
            printf("Fail!\n");
            printf(" No Grade Granted\n");
        }
    }
    return 0;
}