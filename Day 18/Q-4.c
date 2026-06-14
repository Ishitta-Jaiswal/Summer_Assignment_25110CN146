// Program to sort array in descending order:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Compare first element with second element.
4) If second element is greater than first, swap them.
5) Then compare next two elements.
6) Keep doing till the end of array.
7) After first iteration, smallest element will reach at last.
8) Continue these process till n - 1 iteration.
9) Print the sorted array in descending order at last.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, j, temp;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i< n - 1; i++)
    {
        for(j=0; j< n - i - 1; j++)
        {
            if( a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in descending order = ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}