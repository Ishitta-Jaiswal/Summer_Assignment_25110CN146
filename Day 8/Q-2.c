/* Program to print number triangle:
   1
   12
   123
   1234
   12345  */


/* Method:
1) Start a loop which will go from 1 to 5.
2) Start a nested loop which will go from 1 to i.
3) If j satisfies the condition, print j.
4) If j exceeds vale of i, move cursor to next line.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<6; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}