// Program to input and display array:


/* Method:
1) Take number of elements from user.
2) Enter the elements using loop.
3) Print the elements using loop.
*/



#include<stdio.h>
int main()
{
    int a[100], i, n;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    printf("Enter the elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array is = \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}