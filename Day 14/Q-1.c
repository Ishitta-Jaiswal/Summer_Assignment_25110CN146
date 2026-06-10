// Program to linear search:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Take the number which has to be found, from user.
4) Compare each element of array with key element, and print its place in array,
   if found.
*/



#include<stdio.h>
int main()
{
    int a[100], n, key, i, found=0;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to be found = ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            printf("Number found at %dth place.",i + 1);
        }
    }

    if(found = 0)
    {
        printf("Number not found.");
    }
    return 0;
}