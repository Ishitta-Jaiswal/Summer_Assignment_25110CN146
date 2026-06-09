// Program to find sum and average of array elements:


/* Method:
1) Take number of elements from user.
2) Enter elements of array.
3) Add elements of array using loop.
4) Find average of elements by dividing sum with number of elements.
5) Print sum and average.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, sum=0, avg;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    printf("Enter the elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum += a[i];
    }

    avg = sum / n;
    printf("Sum of elements = %d\n",sum);
    printf("Average = %d",avg);
    return 0;
}