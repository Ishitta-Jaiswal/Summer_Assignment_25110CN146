// Program to find the GCD of two numbers:


/* Method:
1) Take two numbers from the user.
2) Divide the first number by the second number.
2) Replace the first number with second number and second number with the
   remainder.
4) Repeat this until the remainder becomes zero.
5) The last divisor becomes the GCD.
*/



#include<stdio.h>
int main()
{
    int a,b,temp=0;
    printf("Enter the numbers= ");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        temp=b;
        b = a % b;
        a=temp;
    }
    printf("GCD of two numbers is:%d",a);
    return 0;
}