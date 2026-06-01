// Program to check entered number is perfect number


/* Method:
1) Take number input from the user.
2) Store it in a temporary variable.
3) Find numbers which gives remainder 0 while dividing, from 1 to less 
   than the number.
4) Add all the divisors.
5) If sum becomes equal to the entered number then it is a perfect number.
*/



#include<stdio.h>
int main()
{
    int n, i, temp, sum=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    temp = n;
        for(i=1 ;i<n; i++)
        {
            if( n % i == 0)
            {
                sum += i;
            }
        }
    if(sum == temp)
    {
        printf("Number entered is a perfect number");
    }
    else{
        printf("Number entered is not a perfect number");
    }
    return 0;
}