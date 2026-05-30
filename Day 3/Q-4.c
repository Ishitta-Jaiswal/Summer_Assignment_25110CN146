// Program to find LCM of two numbers:


/* Method:
1) Take two numbers from the user.
2) Find GCD of numbers.
3) Apply the formula:
               LCM=(a*b)/GCD(a,b)
4) Print the value of LCM.
*/



#include<stdio.h>
int main()
{
    int a,b,i,j,temp=0,lcm;
    printf("Enter the numbers= ");
    scanf("%d %d",&a,&b);
    i=a;
    j=b;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    lcm=(i*j)/a;
    printf("LCM of %d and %d is:%d",i,j,lcm);
    return 0;
}