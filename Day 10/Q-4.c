/* Program to print character pyramid:
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
*/


/* Method:
1) Start a loop for rows from ASCII value of A to E, i.e 65 to 69.
2) Start a nested loop to print space from 69 to value of i, this will print
   space in decreasing order.
3) Start another nested loop to print alphabets in increasing order, from
   65 to value of i.
4) Start another nested loop to print alphabets in decreasing order, from
   i-1 to 65; i-1 is used because we need to remove the first alphabet as it
   is already printed in last loop.
5) Move cursor to next line when j does not satisfies above condition.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=65; i<70; i++)
    {
        for(j=69; j>=i; j--)
        {
            printf(" ");
        }

        for(j=65; j<=i; j++)
        {
            printf("%c",j);
        }

        for(j= i - 1; j >= 65; j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}