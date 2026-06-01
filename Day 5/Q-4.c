// Program to find largest prime factor:


/* Method:
1) Take number input from user.
2) Divide the number by 2 as long as it is divisible'
3) Check odd numbers from 3; if number is divisible, divide it as long as it
   is divisible.
4) Continue till i * i > n.
5) If n > 2, then n itself is a prime factor.
6) The last factor found is the largest prime factor.
*/



#include<stdio.h>
int main()
{
    int n, i, largestfac;
    printf(" Enter the number= ");
    scanf("%d",&n);
    
    while( n % 2 ==0)
    {
        largestfac = 2;
        n = n / 2;
    }

    for(i=3; i*i<=n; i = i+2)
    {
        while( n % i == 0)
        {
            largestfac = i;
            n = n / i;
        }
    }
    if(n > 2)
    {
        largestfac = n;
    }
    printf("Largest prime factor = %d",largestfac);
    return 0;
}