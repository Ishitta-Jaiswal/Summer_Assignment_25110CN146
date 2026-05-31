// Program to check the entered number is Armstrong number or not:


/* Method:
1) Take the number input from the user.
2) Store it in a temporary variable.
3) Count the number of digits in the number.
4) Find the last digit.
5) Calculate digits raised to power of number of digits and add
   it to sum.
6) Remove the last digit from thr number.
7) Repeat these steps till last digit remains greater than zero.
8) If sum becomes equal to the entered number, number entered 
   is Armstrong number.
*/



#include<stdio.h>
#include<math.h>
int main()
{
    int n, temp, digit, sum=0, count;
    printf("Enter the number= ");
    scanf("%d",&n);
    temp=n;
    count = (int)log10(n) + 1;
    while(temp>0)
    {
        digit = temp % 10;
        sum += (int)pow(digit, count); 
        temp /=10;
    }
    if(sum == n)
    {
        printf("Number entered is a Armstrong number");
    }
    else{
        printf("Number entered is not a Armstrong number");
    }
    return 0;
}