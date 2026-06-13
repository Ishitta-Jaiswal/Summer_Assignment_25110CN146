// Program for union of arrays:


/* Method:
1) Take number of elements of first array from user.
2) Take elements of first array from user.
3) Take number of elements of second array from user.
4) Take elements of second array from user.
5) Store first array in third variable.
6) Compare second array elements with third array, if element is not present
   in array, add it.
7) Print third array.
*/



#include<stdio.h>
int main()
{
    int a[100], b[100], c[100], n1, n2, i, j, k=0, found;
    printf("Enter number of first array elements = ");
    scanf("%d", &n1);

    printf("Enter elements of first array = ");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
        c[k] = a[i];
        k++;
    }

    printf("Enter number of second array elements = ");
    scanf("%d", &n2);

    printf("Enter elements of second array = ");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0; i<n2; i++)
    {
        found = 0;
        for(j=0; j<k; j++)
        {
            if( b[i] == c[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            c[k] = b[i];
            k++;
        }
    }

    printf("Union of arrays = ");
    for(i=0; i<k; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}