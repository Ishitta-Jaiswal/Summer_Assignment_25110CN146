// Program to multiply matrices:


/* Method:
1) Take number of rows and columns of both matrices from user.
2) If number of rows of second matrix and number of columns of first 
   matrix are not equal, then multiplication is not possible.
3) Enter elements of both matrices.
4) Start a loop to traverse the rows of first matrix.
5) Start a nested loop to traverse the columns of second matrix.
6) Start another nested loop for each element.
7) Calculate multiplication by:
           c[i][j] += a[i][k] * b[k][j]
8) Print resultant matrix.
*/



#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter number of rows and columns of first matrix = ");
    scanf("%d %d", &r1, &c1);

    printf("Enter number of rows and columns of second matrix = ");
    scanf("%d %d", &r2, &c2);

    if( c1 != r2)
    {
        printf("Multiplication not possible");
    }
    else{
        printf("Enter elements of first matrix = ");
        for(i=0; i< r1; i++)
        {
            for(j=0; j< c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements of second matrix = ");
        for(i=0; i< r2; i++)
        {
            for(j=0; j< c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for(i=0; i< r1; i++)
        {
            for(j=0; j< c2; j++)
            {
                c[i][j] = 0;
                for(k=0; k< c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("First matrix = \n");
        for(i=0; i< r1; i++)
        {
            for(j=0; j< c1; j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

        printf("Second matrix = \n");
        for(i=0; i< r2; i++)
        {
            for(j=0; j< c2; j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }

        printf("Resultant matrix = \n");
        for(i=0; i< r1; i++)
        {
            for(j=0; j< c2; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}