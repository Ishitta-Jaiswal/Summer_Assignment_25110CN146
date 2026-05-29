// Program to print reverse of a number:


/*  Method:
1) Take the input number by thr user.
2) First find the last digit of the entered number.
3) Add the digits to the reversed number.
4) Remove the last digit from the number.
5) Keep it inside while loop such that the number does not get less than 0.
6) Print the reverse of the number.
*/



#include<stdio.h>
int main()
{
    int n,digits,rev=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n>0)
    {
        digits = n % 10;
        rev = rev * 10 + digits;
        n = n / 10;
    }
    printf("Reverse of the number=%d",rev);
    return 0;
}