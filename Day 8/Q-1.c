// Program to print half pyramid patter:


/* Method:
1) Take number of rows from user.
2) Start a loop which will go from 1 to to the number entered.
3) Start a nested loop which will go from 0 to less than value of i.
4) If j will be less than i, print '*'.
5) If j exceeds i, take cursor to next line.
*/



#include<stdio.h>
int main()
{
    int i, j, m;
    printf("Enter the number of rows = ");
    scanf("%d",&m);

    for(i=1; i<=m; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}