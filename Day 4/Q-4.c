// Program to find Armstrong numbers within a range of numbers:


/* Method:
1) Take the range of numbers from the user.
2) Initialize a for loop which will go from beginning to end to 
   range.
3) Check the numbers one by one that which are Armstrong numbers
   within the range of numbers through loop.
4) Print the numbers.
*/



#include<stdio.h>
#include<math.h>
int main()
{
    int n1, n2, i, temp, count, digit, sum;
    printf("Enter the range of numbers= ");
    scanf("%d %d",&n1,&n2);
    printf("Armstrong numbers are: ");
    for(i=n1; i<=n2; i++)
    {
        temp = i;
        sum = 0;
        count = (int)log10(i) + 1;
    while(temp>0)
    {
        digit = temp % 10;
        sum += (int)pow(digit, count); 
        temp = temp/10;
    }
    if(sum == i)
    {
        printf("%d ",i);
    }
    }
    return 0;
}