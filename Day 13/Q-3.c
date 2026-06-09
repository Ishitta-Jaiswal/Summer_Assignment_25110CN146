// Program to find largest and smallest element:


/* Method:
1) Take number of elements from user.
2) Enter elements of array.
3) Initialize min and max with first element.
4) Compare it with other elements and replace min with other smaller number 
   and max with other larger number, if found.
5) Print smaller and larger number.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, min, max;
    printf("Enter the number of elements = ");
    scanf("%d", &n);
    printf("Enter the elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];
    for(i=0; i<n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("Smallest element = %d",min);

    for(i=0; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("\nLargest element = %d",max);
    return 0;
}