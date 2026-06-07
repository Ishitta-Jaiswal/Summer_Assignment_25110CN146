// Program to write function to find maximum number:


/* Method:
1) First declare the function max().
2) Inside main function, call the function and print result.
3) Inside function definition,
   - Take two numbers from user.
   - Compare number.
   - Return the bigger number.
*/



#include<stdio.h>

int max(int a, int b);

int main()
{
    int n1, n2, result;
    result = max(n1,n2);
    printf("Max of two numbers = %d", result);
    return 0;
}

int max(int a, int b)
{
    printf("Enter two number = ");
    scanf("%d %d", &a, &b);
    if( a > b)
        return a;
    
    if( b > a)
        return b;
}