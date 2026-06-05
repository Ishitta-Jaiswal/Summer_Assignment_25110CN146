/* Program to print repeated character pattern:
   A
   BB
   CCC
   DDDD
   EEEEE
*/


/* Method:
1) Start a loop which will go from ASCII value of A to E.
2) Start a nested loop which will go from ASCII value of A to value of i.
3) If condition satisfies, print the character of respected value of i.
4) If value of j exceeds i, move cursor to next line.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=65; i<70; i++)
    {
        for(j=65; j<=i; j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}