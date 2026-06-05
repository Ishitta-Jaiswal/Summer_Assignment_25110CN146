/* Program to print hollow square pattern:
   *****
   *   *
   *   *
   *   *
   *****
*/


/* Method:
1) Start a loop which will go from 0 to 4.
2) Start a nested loop which will go from 0 to 4.
3) If value of i and j becomes 0 or 4, print a '*', otherwise print space ' '.
4) Move cursor to next line if value of j exceeds 4.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if( i == 0 || i == 4 || j == 0 || j == 4)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}