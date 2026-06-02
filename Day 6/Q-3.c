// Program to count set bits in a number:


/* Method:
 Counting set bits in a number means we have to count how many times 1 is 
 appearing in a binary number.

1) Take binary input drom user.
2) Find the last digit of number.
3) If it is 1, increase count; if not, move to next digit.
4) Keep removing last digit from number, till number remains greater than 0.
5) Print the last value of count.
*/



#include<stdio.h>
int main()
{
    int digit, count=0;
    long long binary;
    printf("Enter the binary number= ");
    scanf("%lld",&binary);
    while( binary > 0)
    {
        digit = binary % 10;
        if( digit == 1)
        {
            count++;
        }
        binary = binary / 10;
    }
    printf("Sets bits in the number = %d",count);
    return 0;
}