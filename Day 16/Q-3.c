// Program to find pair with given sum:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Take sum from user.
4) Start a loop which will traverse the array.
5) Start a nested loop from i+1 to less than n, and if a[i] and a[j] 
   together become equal to sum, print a[i] and a[j].
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, j, sum;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter sum = ");
    scanf("%d", &sum);

    printf("Pair of sum are : ");
    for(i=0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(sum == a[i] + a[j])
            {
                printf("%d and %d\n",a[i],a[j]);
            }
        }
    }
    return 0;
}