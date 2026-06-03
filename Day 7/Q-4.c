// Program to print reverse of number using recursion:


/* Method:
1) Take number input from user.
2) Call the recursive function.
3) In recursive function:
   Enter base condition that if number becomes 0, it will return reverse.
4) Then find last digit of number.
5) Then find reverse of number by reverse = reverse * 10 + digit.
6) Then enter recursive function:  rev(n / 10, reverse); it will keep removing 
   last digit from number and will find the reverse.
7) Print the result.
*/



#include<stdio.h>
int rev( int n, int reverse);

int main()
{
    int n;
    printf("Enter the number= ");
    scanf("%d",&n);
    printf("Reverse of number = %d",rev(n, 0));
    return 0;
}

int rev( int n, int reverse)
{
    int digit;
    if( n == 0)
       return reverse;

    else{
        digit = n % 10;
        reverse = reverse * 10 + digit;
        
        return rev(n / 10, reverse);
    }
}