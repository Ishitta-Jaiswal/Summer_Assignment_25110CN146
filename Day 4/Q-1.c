// Program to print Fibonacci series:


/* Method:
1) Take the number input from the user.
2) Initialize t1 variable to 0; and t2 variable to 1.
3) Add t1 and t2; and store it in nextt variable.
4) Replace value of t1 with t2; and t2 with nextt variable.
5) Keep it in a loop, which will go from 1 to the number entered.
6) Value of t1 is the required series.
*/



#include<stdio.h>
int main()
{
    int n,i,t1=0, t2=1,nextt;
    printf("Enter the number= ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",t1);
        nextt = t1 + t2;
        t1=t2;
        t2=nextt;
    }
    return 0;
}