// Program to add matrices:


/* Method:
1) Take number of rows and columns of both matrices from user.
2) If number of rows or columns of both matrices are not equal, 
   addition of matrices is not possible.
3) Take elements of both matrices from user.
4) Add corresponding elements of both matrices by:
             c[i][j] = a[i][j] + b[i][j]
   by using nested loop from 0 to rows - 1 and 0 to columns - 1.
5) Print the resultant matrix.
*/



#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j;

    printf("Enter number of rows and columns of first matrix = ");
    scanf("%d %d", &r1, &c1);

    printf("Enter number of rows and columns of second matrix = ");
    scanf("%d %d", &r2, &c2);

    if( r1 != r2 || c1 != c2)
    {
        printf("Addition of matrices is not possible");
    }
    else{
        printf("Enter elements of first matrix = ");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements of second matrix = ");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        
        printf("Addition of matrices = \n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}