// Program for Binary search:


/* Method:
1) Take number of elements from user.
2) Take elements of sorted array from user.
3) Take element to be searched.
4) Initiate beg variable with 0 index and last varaible with n-1 index.
5) Find mid index by mid = (beg + last) / 2.
6) Compare mid index element with key element.
7) If mid index element is bigger, last become mid - 1.
8) If mid index element is smaller, beg become mid + 1.
9) When mid index element become equal to key element, print its position by
   mid + 1.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, key, beg, last, mid, found=0;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of sorted array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to be searched = ");
    scanf("%d", &key);

    beg = 0;
    last = n-1;
    while( beg <= last)
    {
        mid = (beg + last) / 2;
        if( a[mid] == key)
        {
            found = 1;
            printf("Element is found at position %d",mid + 1);
            break;
        }
         else if( a[mid] > key)
        {
            last = mid - 1;
        }
        else{
            beg = mid + 1;
        }
    }
    
    if(found == 0)
    {
        printf("Element not found");
    }
    return 0;
}