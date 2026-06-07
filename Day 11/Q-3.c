// Program to write function to check prime number:


/* Method:
1) Declare the function prime().
2) Inside main function, call the function.
3) Inside function definition:
   - Take a number from user.
   - Check whether number entered is prime or not.
   - Return result and print it.
*/



#include<stdio.h>

int prime(int a);

int main()
{
    int n, result;
    result = prime(n);
    
    return 0;
}

int prime(int a)
{
    int i, flag=0;
    printf("Enter number = ");
    scanf("%d", &a);

    if( a == 1)
        flag = 1;

    else{
        for(i=2; i<a; i++){
            if( a % i == 0)
            {
                flag=1;
            }
        }
    }

    if(flag == 0)
       printf("Number entered is prime number.");

    else
       printf("Number entered is not a prime number.");
}