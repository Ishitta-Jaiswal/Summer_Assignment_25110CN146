// Program to find maximum frequency element:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Start a loop which will traverse array.
4) Start a nested loop from i+1 to n, and if an element occurs more
   than once, increase value of count variable.
5) Print the element with most occurance.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, j, count, maxfreq=0, maxElement=0;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        count = 1;
        for(j = i+1; j<n; j++)
        {
            if( a[i] == a[j])
            {
                count++;
            }

            if( count > maxfreq)
            {
                maxfreq = count;
                maxElement = a[i];
            }
        }
    }
    printf("Maximum frequency element = %d",maxElement);
    return 0;
}