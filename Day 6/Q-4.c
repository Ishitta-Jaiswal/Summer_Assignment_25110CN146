// Program to find x^n without using pow() function.


/* Method:
1) Take number input and power from user.
2) Keep multiplying the number with itself, till the loop go from 0 to less 
   than power value.
3) Print the result.
*/



#include<stdio.h>
int main()
{
    int n, i, p, result=1;
    printf("Enter the number= ");
    scanf("%d",&n);
    
    printf("Enter the power= ");
    scanf("%d",&p);

    for(i=0; i<p; i++)
    {
        result = result * n;
    }
    printf("Result = %d",result);
    return 0;
}