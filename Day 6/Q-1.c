// Program to convert decimal to binary:


/* Method:
1) Take the decimal input from user.
2) Initialize base to 1.
3) Find reaminder of number by 2.
4) Multiply remainder with base and add it to binary variable.
5) Divide the number by 2.
6) Multiply base with 10.
7) Repeat these steps till number remains greater than 0.
8) The final number stored in binary variable is the binary equivalent.
*/



#include<stdio.h>
int main()
{
    int decimal, remainder, base=1;
    long long binary=0;
    printf("Enter the decimal number= ");
    scanf("%d",&decimal);
    while(decimal > 0)
    {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    printf("Binary equivalent = %lld",binary);
    return 0;
}