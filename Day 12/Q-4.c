// Program to write function for perfect number:


/* Method:
1) Declare the function perfect().
2) Inside main function, call the function.
3) Inside function definition,
   - Take number input from user.
   - Check which numbers divide the entered number using loop from 1 to less
     than the number.
   - Add the divisors.
   - If sum gets equal to entered number, then it is a perfect number.
*/



#include<stdio.h>

int perfect( int n);

int main()
{
    int n;
    perfect(n);
    return 0;
}

int perfect( int n)
{
    int i, sum=0;
    printf("Enter the number = ");
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        if( n % i == 0)
        {
            sum += i;
        }
    }
    
    if( sum == n)
    {
        printf("Number entered is a perfect number.");
    }

    else{
        printf("Number entered is not a perfect number.");
    }
}