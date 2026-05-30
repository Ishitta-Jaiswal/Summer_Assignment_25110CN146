// Program to check whether the entered number is prime or not:


/* Method:
1) Take the input number from the user.
2) Initialize flag variable to zero.
3) If number entered is less than or equal to 1, flag variable becomes 1.
4) Now check whether the number entered is divisible by 2 to less than the 
number itself.
5) If the number gets divisible by any other number, then the flag variable 
becomes 1.
6) If flag variable becomes 1, then the number is not prime; otherwise the 
number entered is prime number.
*/



#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    if(n<=1)
    {
        flag=1;
    }
    else{
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("Number entered is a prime number");
    }
    else{
        printf("Number entered is not a prime number");
    }
    return 0;
}