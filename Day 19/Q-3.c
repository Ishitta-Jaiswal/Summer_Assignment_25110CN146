// Program to transpose matrix:


/* Method:
1) Take number of rows and columns of matrix from user.
2) Take elements of matrix from user.
3) Transpose elements by:
           a[i][j] = b[j][i]
   because when we transpose, row number becomes column number and 
   vice-versa.
4) Print original matrix/
5) Print resultant matrix.
*/



#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], row, colm, i, j;

    printf("Enter number of rows and columns = ");
    scanf("%d %d", &row, &colm);

    printf("Enter elements of matrix = ");
    for(i=0; i< row; i++)
    {
        for(j=0; j< colm; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0; i< row; i++)
    {
        for(j=0; j< colm; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Original matrix = ");
    for(i=0; i< row; i++)
    {
        for(j=0; j< colm; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix = ");
    for(i=0; i< colm; i++)
    {
        for(j=0; j< row; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}