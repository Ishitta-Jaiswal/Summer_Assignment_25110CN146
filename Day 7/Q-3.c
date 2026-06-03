// Program to print sum of digits using recursion:


/* Method:
1) Take number input from user.
2) Call the recursive function.
3) In recursive function:
   Enter base condition that if n becomes 0, it will return 0; and if number
   entered less than 0, it will return -1.
4) Enter recursive function:  digit + sum(n);  it will find the digits of 
   number and add it, till number get less than zero.
5) Remove last digit from number.
6) Print the result.
*/



#include<stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter the number= ");
    scanf("%d",&n);
    printf("Sum of digits= %d", sum(n));
    return 0;
}

int sum( int n)
{
    int digit;
    if( n == 0)
        return 0;

    else if( n < 0)
        return -1;

    else{
        digit = n % 10;
        n = n / 10;
        return digit + sum(n);
    }
}