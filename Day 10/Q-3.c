/* Program to print number pyramid:
        1    
       121
      12321
     1234321
    123454321
*/


/* Method:
1) Start a loop for rows which wil go from 1 to 5.
2) Start a nested loop to print space from 1 to 5-i, this will print space in
   decreasing order.
3) Start another nested loop to print increasing numbers, from 1 to value of i.
4) Start another nested loop to print decreasing numbers, from i-1 to 1; 
   i-1 condition is used because i is already printed once, so it is needed to
   to removed.
5) Move cursor to next line when j does not satisfies above condition.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<6; i++)
    {
        for(j=1; j<= 5 - i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }

        for(j= i - 1; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}