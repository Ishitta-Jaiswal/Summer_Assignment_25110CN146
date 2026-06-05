/* Program to print reverse number:
   12345
   1234
   123
   12
   1
*/


/* Method:
1) Start a loop which will go from 5 to 1.
2) Start a nested loop which will go from 1 to value of i.
3) If condition satisfies, print value of j.
4) If j exceeds the value of i, move cursor to next line.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=5; i>0; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}