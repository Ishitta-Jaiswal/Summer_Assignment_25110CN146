// Program to print nth term of Fibonacci series:


/* Method:
1) Take the term which is needed to be printed.
2) Initialize t1 variable to 0; and t2 variable to 1.
3) For first term, t1 will be printed; and for second term, t2 
   will be printed.
4) For term greater than second one,
   Add t1 and t2; and store it in nextt variable.
5) Replace value of t1 with t2; and t2 with nextt.
6) Value of t2 will be the required value of nth term.
*/



#include<stdio.h>
int main()
{
    int n,i,t1=0, t2=1,nextt;
    printf("Enter the term of series= ");
    scanf("%d",&n);
    printf("%dth term of fibonacci series= ",n);
    if(n==1)
    {
        printf("%d",t1);
    }
    else if(n==2)
    {
        printf("%d",t2);
    }
    else{
    for(i=3;i<=n;i++)
    {
        nextt = t1 + t2;
        t1=t2;
        t2=nextt;
    }
    printf("%d",t2);
}
return 0;
}