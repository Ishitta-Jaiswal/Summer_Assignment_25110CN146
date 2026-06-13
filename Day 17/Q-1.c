// Program to merge arrays:


/* Method:
1) Take number of elements of first array from user.
2) Take elements of first array from user.
3) Take number of elements of second array from user.
4) Take elements of second array from user.
5) Store elements of first array in resultant array.
6) Store elements of second array after first array in resultant array.
7) Print resultant array.
*/



#include<stdio.h>
int main()
{
    int a[100], b[100], c[100], n1, n2, i;
    printf("Enter number of first array elements = ");
    scanf("%d", &n1);

    printf("Enter elements of first array = ");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of second array elements = ");
    scanf("%d", &n2);

    printf("Enter elements of second array = ");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0; i<n1; i++)
    {
        c[i] = a[i];
    }
    for(i=0; i<n2; i++)
    {
        c[n1 + i] = b[i];
    }

    printf("Merged array = ");
    for(i=0; i < n1+n2; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}