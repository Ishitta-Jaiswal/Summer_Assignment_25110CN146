/* Program to print reverse star pattern:
   *****
   ****
   ***
   **
   *
*/


/* Method:
1) Start a loop which will go from 5 to 1.
2) Start a nested loop which will go from 0 to less than value of i.
3) If condition satisfies, print a '*'.
4) If j exceeds value of i, move cursor to next line.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=5; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}