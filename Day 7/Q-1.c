// Program to print factorial using recursion:


/* Method:
1) Take number input from user.
2) Call the recusive function.
3) In recusive function:
   Enter base condition that if number beccomes 0 or 1, it will return 1.
4) Then enter recursive condition:  n* fact(n-1); this will keep call the 
   function itself until base condition is met.
5) Print the result.
*/



#include<stdio.h>
int fact( int n);

int main()
{
    int a, result;
    printf("Enter the number= ");
    scanf("%d",&a);
    result = fact(a);
    printf("Factorial of number= %d",result);
    return 0;
}

int fact( int n)
{
    if( n == 0 || n == 1)
    {
        return 1;
    }
    else{
        return n * fact( n - 1);
    }
}