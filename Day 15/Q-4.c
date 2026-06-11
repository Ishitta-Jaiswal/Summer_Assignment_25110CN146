// Program to move zeroes to end:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Store number of elements in a size variable.
       Move all non-zero elements to beginning and then add zeroes at end.
       for this:
4) Start a loop traversing elements of array.
5) If an element is found to be zero, remove zero and fill its position with the 
   following elements.
6) Keep decreasing the value of size variable as zero element is found in array.
7) Also add i--; this will again check the same position for continuous zeroes.
8) Now start another loop from size value to less than number of elements, 
   and add zeroes at last of array.
9) Now print the array.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, j, size=0;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    size = n;
    for(i=0; i < size; i++)
    {
        if( a[i] == 0)
        {
            for(j=i; j < size-1; j++)
            {
                a[j] = a[j + 1];
            }
            size--;
            i--;
        }
    }

    for(i=size; i<n; i++)
    {
        a[i] = 0;
    }

    printf("Updated array = ");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}