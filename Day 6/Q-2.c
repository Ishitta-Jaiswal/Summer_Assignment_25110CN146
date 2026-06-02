// Program to convert binary to decimal:


/* Method:
1) Take the binary input from user.
2) Initialize base with 1.
3) Find remainder of number with 10.
4) Multiply remainder with base and add it to decimal varaiable.
5) Divide the number by 10.
6) Multiply base with 2.
7) Repeat above steps till number remains greater than 0.
8) Last stored number in decimal variable is the decimal equivalent.
*/



#include<stdio.h>
int main()
{
    int decimal=0, remainder, base=1;
    long long binary;
    printf("Enter the binary number= ");
    scanf("%lld",&binary);
    while( binary > 0)
    {
        remainder = binary % 10;
        decimal += remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    printf("Decimal equivalent = %d",decimal);
    return 0;
}