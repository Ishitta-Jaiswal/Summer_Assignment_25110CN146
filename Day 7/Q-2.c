// Program to print fibonacci series using recursion:


/* Method:
1) Take number pf terms from user.
2) Initialize a loop which will go from 0 to less than number and keep calling 
   function inside it.
3) In recursive function.
   Enter base condition that if number becomes 0, it will return 0; and if 
   number becomes 1, it will return 1.
4) Then enter recursive condition:  fibo( n-1) + fibo( n-2); this will print
   fibonacci series.
5) Thus loop will run till the entered number and series will be printed.
*/





#include<stdio.h>
int fibo(int n);

int main()
{
    int a, i;
    printf("Enter the number of terms= ");
    scanf("%d",&a);
    printf("Fibonacci series = ");
    for(i=0; i<a; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}

int fibo(int n)
{
    if( n == 0)
        return 0;

    else if( n == 1)
        return 1;

    else{
        return fibo( n - 1) + fibo( n - 2);
    }
}