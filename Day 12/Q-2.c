// Program to write function for Armstrong number:


/* Method:
1) Declare the function armstrong().
2) Inside main function, call the function.
3) Inside function definition,
   - Take number input from user.
   - Store it in a temporary variable.
   - Count the number of digits in number.
   - Take individual digits and raise them to power of number of digits, and
     add them together.
   - If sum gets equal to entered number, then number entered is an Armstrong 
     number
*/



#include<stdio.h>
#include<math.h>

int armstrong( int n);

int main()
{
    int n, result;
    result = armstrong(n);
    return 0;
}

int armstrong( int n)
{
    int temp, digit,sum=0, count=0;
    printf("Enter the number = ");
    scanf("%d", &n);
    temp = n;

    count = (int)log10(n) + 1;

    while( n > 0)
    {
        digit = n % 10;
        sum += pow(digit, count);
        n /= 10;
    }

    if( temp == sum)
    {
        printf("Number entered is an Armstrong number.");
    }

    else{
        printf("Number entere is not an Armstrong number.");
    }
}