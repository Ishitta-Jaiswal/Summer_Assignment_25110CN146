// Program to print factors of number:


/* Method:
1) Take number input from user.
2) Find the numbers which divides the entered number completely'
3) Print those numbers.
*/



#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number= ");
    scanf("%d",&n);
    printf("Factors of entered number= ");
    for( i=1; i <=n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}