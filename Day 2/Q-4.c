// Program to check whether the entered number is palindrome or not.


/* Method:
1) Take the input number by thr user.
2) Store the number in a temporary variable.
3) Then reverse the number.
4) If reverse of the number remains equal to the temporary variable, then entered 
   number is a palindrome number.
*/




#include<stdio.h>
int main()
{
    int n,rev=0,digit,temp=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    if(rev==temp)
    {
        printf("Number entered is a palindrome number");
    }
    else{
        printf("Number entered is not a palindrome number");
    }
    return 0;
}