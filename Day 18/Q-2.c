// Program for Selection sort:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Store first element in min variable.
4) Compare it with rest of elements in array, and if an element is found
   smaller, swap both the elements.
5) Move to second element and continue the process.
6) Print sorted array at last.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, j, min, temp;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        min = i;
        for(j = i+1; j<n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array = ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}