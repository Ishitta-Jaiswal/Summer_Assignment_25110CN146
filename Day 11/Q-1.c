// Program to write function to find sum of two numbers:


/* Method:
1) First declare the function sum().
2) Inside main function, call the function and print result.
3) Inside function definition,
   - Take two numbers from user.
   - Add two numbers.
   - Return result.
*/



#include<stdio.h>

int sum(int a, int b);

int main()
{
    int n1, n2, result=0;
    result = sum(n1,n2);
    printf("Sum = %d", result);
    return 0;
}

int sum(int a, int b)
{
  int add;
  printf("Enter two numbers = ");
  scanf("%d %d", &a, &b);
  add = a + b;
  return add;  
}