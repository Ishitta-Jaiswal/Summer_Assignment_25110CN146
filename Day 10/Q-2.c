/* Program to print reverse pyramid:
   *********
    *******
     *****
      ***
       *
*/


/* Method:
1) Start a loop for rows from 5 to 1.
2) Start a nested loop for space from 0 to 5-i, this will print space in 
   increasing order because i also starts from 5.
3) Start another nested loop for '*' from 1 to 2*i-1, this will print pattern
   in reverse order, 9,7,5...
4) Move cursor to next line when j does not satisfies above condition.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=5; i>0; i--)
    {
        for(j=0; j<=5-i; j++)
        {
            printf(" ");
        }

        for(j=1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}