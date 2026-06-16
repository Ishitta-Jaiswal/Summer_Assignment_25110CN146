// Program to find column-wise sum of matrix:


/* Method: 
1) Take number of rows and columns from user.
2) Take elements of matrix from user.
3) Start a loop to traverse columns of matrix.
4) Initialize sum variable to zero.
5) Start a nested loop to traverse rows within same column and add
   sum of elements by 
          sum += a[i][j]
6) Print sum of each column.
*/



#include<stdio.h>
int main()
{
    int a[10][10], row, colm, i, j, sum;
     
    printf("Enter number of rows and columns of matrix = ");
    scanf("%d %d", &row, &colm);

    printf("Enter elements of matrix = ");
    for(i=0; i< row; i++)
    {
        for(j=0; j< colm; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original matrix = \n");
    for(i=0; i< row; i++)
    {
        for(j=0; j< colm; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(j=0; j< colm; j++)
    {
        sum = 0;
        for(i=0; i< row; i++)
        {
            sum += a[i][j];
        }
        printf("Sum of column %d elements = %d\n",j+1,sum);
    }
    return 0;
}