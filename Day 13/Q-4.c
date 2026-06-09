// Program to count even and odd elements in an array:


/* Method:
1) Take number of elements from user.
2) Enter elements of array.
3) Divide each element by 2, if number gets divided completely, increase count 
   of even numbers by 1; else increase count of odd numbers by 1.
4) Print the counts of even and odd numbers.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, odd=0, even=0;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    printf("Enter the elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if( a[i] % 2 == 0)
        {
            even = even + 1;
        }
        else{
            odd = odd + 1;
        }
    }
    printf("Even elements = %d",even);
    printf("\nOdd elements = %d",odd);
    return 0;
}