// Program to reverse an array:


/* Method:
1) Take number of elements from user.
2) Take elements from user.
3) Start a loop from 0 to n/2, swap first and last element, then increase to
   second element and decrease to last second element, and keep doing until
   starting one > ending one.
4) Print reversed array.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, temp=0;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[ n - i - 1];
        a[ n - i - 1] = temp;
    }

    printf("Reversed array = ");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}