// Program to find common elements:


/* Method:
1) Take number of elements of first array from user.
2) Take elements of first array from user.
3) Take number of elements of second array from user.
4) Take elements of second array from user.
5) Compare each element of first array with second array.
6) If an element is found in both arrays, store it in another array.
7) Print the array.
*/



#include<stdio.h>
int main()
{
    int a[100], b[100], c[100], n1, n2, i, j, k=0;
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
        for(j=0; j<n2; j++)
        {
            if( a[i] == b[j])
            {
                c[k] = a[i];
                k++;
                break;
            }
        }
    }

    printf("Common elements of arrays = ");
    if( k == 0)
    {
        printf("No elements found");
    }
    else{
        for(i=0; i<k; i++)
        {
            printf("%d ",c[i]);
        }
    }
    return 0;
}