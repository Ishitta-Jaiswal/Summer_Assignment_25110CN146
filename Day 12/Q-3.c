// Program to write function for Fibonacci series:


/* Method:
1) Declare the function fibo().
2) Inside main function, call the function.
3) Inside function definition,
   - Take the number of terms from user.
   - Initialize t1 to 0 and t2 to 1.
   - Start a loop from 0 to less than number, and print value of t1.
   - Replace value of t1 with t2, and t2 with sum of both t1 and t2.
*/



#include<stdio.h>

int fibo( int n);

int main()
{
    int n;
    fibo(n);
    return 0;
}

int fibo( int n)
{
    int i, t1=0, t2=1, nextt;
    printf("Enter the number of terms = ");
    scanf("%d", &n);
    printf("Fibonacci series = ");

    for(i=0; i<n; i++)
    {
        printf("%d ", t1);
        nextt = t1 + t2;
        t1 = t2;
        t2 = nextt;
    }
}