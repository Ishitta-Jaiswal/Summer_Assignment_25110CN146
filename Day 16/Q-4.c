// Program to remove duplicated from array:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Start a loop which will traverse the array.
4) Start a nested loop which will go from i+1 to n; and if a[j] is found
   to be equal to a[i], revome a[j] and shift its following element to left.
5) Also decrease value of n by respected removed element because size of 
   array will decrease accordingly.
6) Also add j-- so that same position could be checked again.
7) Print the updated array.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, j, k;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if( a[i] == a[j])
            {
                for(k=j; k < n-1; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Updated array = ");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}