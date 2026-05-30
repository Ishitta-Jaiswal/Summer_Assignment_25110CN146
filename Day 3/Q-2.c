// Program to print prime numbers within a range:


/* Method:
1) Take the range of numbers from the user.
2) Initialize flag variable to zero.
3) Start a loop that will go from the beginning of the range to the end.
4) Flag variable becomes 1 if the number gets less than or equal to 1.
5) Now check whether the numbers in the range is divisible by 2 to less than the 
   number itself.
6) If the number gets divisible by any other number, then the flag variable 
   becomes 1.
7) If flag variable becomes 1, then the number is not prime; otherwise it is a
   prime number.
8) Print the numbers for which the flag variable remains 0.
*/



#include<stdio.h>
int main()
{
    int n1,n2,i,flag,j;
    printf("Enter the range of numbers= ");
    scanf("%d %d",&n1,&n2);
    printf("Prime numbers between %d and %d are: ",n1,n2);
    for(i=n1;i<=n2;i++)
    {
        flag=0;
        if(i==1)
        {
            flag=1;
        }
        else{
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}