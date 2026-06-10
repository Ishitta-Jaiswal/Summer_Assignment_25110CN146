// Program to find frequency of an element:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Take number whose frequency has to be counted, from user.
4) Compare key element with elements of array, and increase value of count 
   everytime found.
*/



#include<stdio.h>
int main()
{
    int a[100], n, key, i, count =0;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number whose frequency is to be count = ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if( key == a[i])
        {
            count += 1;
        }
    }

    printf("Frequency of entered number = %d",count);
    return 0;
}