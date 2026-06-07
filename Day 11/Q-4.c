// Program to write function to print factorial of a number:


/* Method:
1) Declare the function fact().
2) Inside main function, call the function and print result.
3) Inside function definition:
   - Take a number from user.
   - Find factorial by using loop.
   - Return result.
*/



#include<stdio.h>

int fact(int n);

int main()
{
    int a, result;
    result = fact(a);
    printf("Factorial of number = %d", result);
    return 0;
}

int fact(int n)
{
    int i, fact=1;
    printf("Enter number = ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        {
            fact = fact * i;
        }
    return fact;
}