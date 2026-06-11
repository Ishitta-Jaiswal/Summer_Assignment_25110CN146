// Program to rotate array left:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Take number of rotations from user.
4) Start a loop from 0 to less than number of rotations.
5) Store first element in a temporary variable.
6) Then shift other elements to less than 1 of their position.
7) Then bring the element stored in temporary variable at last of array.
8) Keep repeating these steps till the number of rotations.
9) Print the updated array at last.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, j, r, temp=0;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("\nEnter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the number of rotations = ");
    scanf("%d", &r);

    for(i=0; i<r; i++)
    {
        temp = a[0];
        for(j = 0; j < n-1; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp;
    }

    printf("\nLeft rotated array = ");
    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}