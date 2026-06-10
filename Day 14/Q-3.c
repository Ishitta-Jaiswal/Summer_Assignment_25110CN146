// Program to find second largest element in the array:


/* Method:
1) Take number of elements from user.
2) Take elements of array from user.
3) Initialize largest and secondLargest with first element.
4) Compare these with every element in array and, if element is found greater than
   the one stored in largest variable, replace value of secondLargest with 
   largest variable, and value of largest variable with the element.
5) Also if current element is greater than secondLargest one but less than 
   the one in largest one, update secondLargest variable.
6) At last, print value of secondLargest variable.
*/



#include<stdio.h>
int main()
{
    int a[100], n, i, largest, secondLargest;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    printf("Enter elements of array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    largest = secondLargest = a[0];
    for(i=0; i<n; i++)
    {
        if( a[i] > largest)
        {
        secondLargest = largest;
        largest = a[i];
        }

        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }
    printf("Second largest element = %d",secondLargest);
    return 0;
}