// Program to merge two sorted arrays:


/* Method:
1) Take number of elements of two arrays by user.
2) Take elements of both arrays from user.
3) Initialize first pointer i to zero at beginning of first array.
4) Initialize second pointer j to zero at beginning of second array.
5) Compare arr1[i] and arr2[j].
6) Copy the smaller element into merged array and move that pointer 
   forward.
7) Repeat the steps till one array is exhausted.
8) Copy the remaining elements of second array into merged array.
9) Print the sorted merged array.
*/



#include<stdio.h>
int main()
{
    int a[100], b[100], c[100], n1, n2, i, j, k;
    
    printf("Enter number of elements in both arrays = ");
    scanf("%d %d",&n1, &n2);

    printf("Enter elements of first sorted array = ");
    for(i=0; i< n1; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter elements of second sorted arrays = ");
    for(i=0; i< n2; i++)
    {
        scanf("%d",&b[i]);
    }

    i=0;
    j=0;
    k=0;

    while( i < n1 && j < n2)
    {
        if( a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else{
            c[k] = b[j];
            k++;
            j++;
        }
    }

    while( i < n1)
    {
        c[k] = a[i];
        k++;
        i++;
    }

    while( j < n2)
    {
        c[k] = b[j];
        k++;
        j++;
    }

    printf("Merged sorted array = ");
    for(i=0; i< n1 + n2; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}