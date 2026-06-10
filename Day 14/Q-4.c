// Program to find duplicate elements in an array:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Start a loop which will go from first element to last.
4) Start a nested loop which will go from i + 1 to end.
5) If a[i]th element and a[j]th element are found to be equal, print element;
   if found.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, j, count=0;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are : ");
    for(i=0; i<n; i++)
    {
        for(j=i + 1; j<n; j++)
        {
            if( a[i] == a[j])
            {
                printf("%d ",a[i]);
                count += 1;
                break;
            }
        }
    }

    if( count = 0)
    {
        printf("No duplicate found");
    }
    return 0;
}