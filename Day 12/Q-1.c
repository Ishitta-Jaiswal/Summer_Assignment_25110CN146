// Program to write function for palindrome number:


/* Method:
1) First declare the function palindrome().
2) Inside main function, call the function.
3) Inside function definition, 
   - Take number from user.
   - Store it in a temporary variable.
   - Find reverse of entered number.
   - If reverse number remains same as entered number, then it is a palindrome
     number.
*/



#include<stdio.h>

int palindrome(int n);

int main()
{
    int n, result;
    result = palindrome(n);
    return 0;
}

int palindrome(int n)
{
    int temp=0, digit, rev=0;
    printf("Enter the number = ");
    scanf("%d", &n);
    temp = n;

    while( n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if( temp == rev)
    {
        printf("Number entered is a palindrome number.");
    }

    else{
        printf("Number entered is not a palindrome number.");
    }
}