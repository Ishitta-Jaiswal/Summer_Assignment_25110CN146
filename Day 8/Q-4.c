/* Program to print repeated number pattern:
   1
   22
   333
   4444
   55555
*/


/* Method:
1) Start a loop which will go from 1 to 5.
2) Start a nested loop which will go from 1 to i.
3) If condition satisfies, print value of i.
4) If value of j exceeds i, move cursor to next line.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<6; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}