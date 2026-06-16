// Program to check symmetric matrix:


/* Method:
1) Take number of rows and columns from user.
2) If number of rows and columns are not equal, then symmetric matrix
   is not possible.
3) Take elements of matrix from user.
4) Check symmetricity of matrix by comparing a[i][j] and a[j][i] by 
   using loops.
5) If both elements are not equal, then it is not symmetric matrix.
6) Print the result.
*/



#include<stdio.h>
int main()
{
    int a[10][10], row, colm, i, j, found=1;

    printf("Enter number of rows and columns of matrix = ");
    scanf("%d %d", &row, &colm);

    if( row != colm)
    {
        printf("Symmetric matrix is only possible for square matrices");
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

        for(i=0; i< row; i++)
        {
            for(j=0; j< colm; j++)
            {
                if( a[i][j] != a[j][i] )
                {
                    found = 0;
                    break;
                }
            }
            if( found == 0)
            {
                break;
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

        if( found == 1 )
        {
            printf("Matrix entered is a symmetric matrix.");
        }
        else{
            printf("Matrix entered is not a symmetric matrix.");
        }
    }
    return 0;
}