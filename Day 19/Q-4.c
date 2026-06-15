// Program to find diagonal sum:


/* Method:
1) Take number of rows and columns of matrix from user.
2) If number of rows and columns are not equal, diagonal sum is not
   possible.
3) Take elements of matrix from user.
4) Find diagonal sum by:
          sum += a[i][i]
   because at diagonal element, both row ans column number becomes equal.
5) Print original matrix.
6) Print sum.
*/



#include<stdio.h>
int main()
{
    int a[10][10], row, colm, i, j, sum=0;

    printf("Enter number of rows and columns = ");
    scanf("%d %d", &row, &colm);

    if( row != colm)
    {
        printf("Diagonal sum is only possible for square matrix");
    }
    else{

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

        for(i=0; i< row; i++)
        {
            sum += a[i][i];
        }

        printf("Sum of diagonal elements = %d",sum);
    }
    return 0;
}