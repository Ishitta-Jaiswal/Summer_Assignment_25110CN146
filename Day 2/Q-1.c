//Program to find the sum of digits of the entered number:


/*  Method:
1) Take the input number by thr user.
2) First find the last digit of the entered number.
3) Add the digit to sum.
4) Remove the last digit from the number.
5) Keep it inside while loop such that the number does not get less than 0.
6) Print the sum of digits.
*/



#include<stdio.h>
int main()
{
    int n,digits,sum=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n>0)
    {
    digits = n % 10;
    sum = sum + digits;
    n =n/10;
    }
    printf("Sum of digits of number=%d",sum);
    return 0;
}