// Program to check entered number is storng number:


/* Method:
1) Take number input from user.
2) Store it in a temporary variable.
3) Find factorial of individual digits.
4) Add all factorial values.
5) If sum becomes equal to entered number then it is a strong number.
*/



#include<stdio.h>
int main()
{
    int n, i, temp, digit, fact, sum=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    temp = n;
    while(n > 0)
    {
        digit = n % 10;
        fact = 1;
        for(i=1; i <= digit; i++)
        {
            fact = fact * i;
        }
        
        sum += fact;
        n = n / 10;
    }
    if(sum == temp)
    {
        printf("Number entered is a strong number");
    }
    else{
        printf("Number entered is not a strong number");
    }
    return 0;
}