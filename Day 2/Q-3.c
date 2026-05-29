//Program to print the product of digits of the entered number.


/* Method:
1) Take the input number by thr user.
2) First find the last digit of the entered number.
3) Multiply the digit to the product.
4) Remove the last digit from the number.
5) Keep it inside while loop such that the number does not get less than 0.
6) Print the product of the digits of the entered number.
*/



#include<stdio.h>
int main()
{
    int n,digit,pro=1;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n % 10;
        pro = pro * digit;
        n = n / 10;
    }
    printf("Product of digits=%d",pro);
    return 0;
}