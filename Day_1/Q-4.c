#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    if(n==0)
    {
        i=1;
    }
    else{
    while(n>0)
    {
        n=n/10;
        i=i+1;
    }
    }
    printf("\nNumber of digits= %d",i);
    return 0;
}