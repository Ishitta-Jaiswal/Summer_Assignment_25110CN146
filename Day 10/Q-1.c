/* Program to print star program:
        *    
       ***   
      *****  
     *******  
    *********
*/


/* Method:
1) Start a loop for rows from 1 to 5.
2) Start a nested loop to print space from 1 to 5 - 1, this will print space
   in decreasing pattern.
3) Start another nested loop to print '*' from 1 to 2*i-1, this will print 
   star pattern after space from 1,3,5...
4) Move cursor to next line when j does not satisfies above condition.
*/



#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        // For space
        for(j=1; j<=5-i; j++)
        {
            printf(" ");
        }
        
        // For star
        for(j=1; j<= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}