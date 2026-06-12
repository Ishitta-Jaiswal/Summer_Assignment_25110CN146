// Program to find missing numbers in an array:


/* Method:
      Let us consider the series entered would be 1,2,3...
1) Take number of elements from user.
2) Take elements of array from user.
3) Add all elements to find actualSum.
4) Use formula ((n + 1) * (n + 2)) / 2 to find expectedSum. Here n+1 is used 
   instead of n because missing number would cause series to become n+1.
5) Find difference between expectedSum and actualSum.
6) Difference is required missing number.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, expectedSum=0, actualSum=0, diff=0;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        actualSum += a[i];
    }

    expectedSum = ((n + 1) * (n + 2)) / 2;

    diff = expectedSum - actualSum;
    printf("Missing number in array = %d",diff);
    return 0;
}