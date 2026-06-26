// Program to create menu-driven array operations system:


/* Method:
1) Give different array options for user to choose.
2) Add differnt cases using switch, arrays and loops.
3) Take choice from user each time and give optput accordingly.
4) Keep showing options till user choses Exit.
*/



#include<stdio.h>

int main()
{
    int choice, n=0, i, a[100];
    int search, found, pos, delete, largest, smallest, sum=0;
    float average;

    while(1)
    {

        printf("*** Array Operations ***\n\n");
        printf("1) Insert Elements\n");
        printf("2) Display Elements\n");
        printf("3) Search Elements\n");
        printf("4) Update Elements\n");
        printf("5) Delete Elements\n");
        printf("6) Find Largest Element\n");
        printf("7) Find Smallest Element\n");
        printf("8) Sum\n");
        printf("9) Average\n");
        printf("10) Exit\n\n");

        printf("Enter Choice = ");
        scanf("%d", &choice);

        switch( choice )
        {
            case 1:

                printf("Enter number of elements = ");
                scanf("%d", &n);

                printf("Enter elements = ");
                for( i=0; i<n; i++)
                {
                    scanf("%d", &a[i]);
                }
                printf("Elements Entered Successfully!\n\n");
                break;

            case 2:

                if( n == 0 )
                {
                    printf("Array is Empty\n\n");
                }
                else{
                    printf("Array Elements = ");
                    for( i=0; i<n; i++ )
                    {
                        printf("%d ",a[i]);
                    }
                    printf("\n\n");
                }
                break;

            case 3:

                printf("Enter element to search = ");
                scanf("%d", &search);

                found = 0;

                for( i=0; i<n; i++ )
                {
                    if( a[i] == search )
                    {
                        found = 1;
                        printf("Element found at index %d\n",i+1);
                    }
                }
                printf("\n");

                if( found == 0 )
                {
                    printf("Element Not Found\n\n");
                }
                break;

            case 4:

                printf("Enter position to update (1-%d) = ",n);
                scanf("%d", &pos);

                if( pos < 1 || pos > n)
                {
                    printf("Invalid Position\n\n");
                }
                else{
                    printf("Enter new value = ");
                    scanf("%d", &a[pos - 1]);

                    printf("Element Updated Successfully!\n\n");
                }
                break;

            case 5:

                printf("Enter position to delete (1-%d) = ",n);
                scanf("%d", &delete);

                if( delete < 1 || delete > n )
                {
                    printf("Invalid Position\n\n");
                }
                else{
                    for( i= delete - 1; i< n - 1; i++ )
                    {
                        a[i] = a[i+1];
                    }

                    n--;
                    printf("Element Deleted Successfully!\n\n");
                }
                break;

            case 6:

                if( n == 0 )
                {
                    printf("Array is Empty\n\n");
                }
                else{
                    largest = a[0];
                    for( i=0; i<n; i++ )
                    {
                        if( a[i] > largest)
                        {
                            largest = a[i];
                        }
                    }
                    printf("Largest Element = %d\n\n",largest);
                }
                break;

            case 7:

                if( n == 0 )
                {
                    printf("Array is Empty\n\n");
                }
                else{
                    smallest = a[0];
                    for( i=0; i<n; i++ )
                    {
                        if( a[i] < smallest )
                        {
                            smallest = a[i];
                        }
                    }
                    printf("Smallest Element = %d\n\n",smallest);
                }
                break;

            case 8:

                sum = 0;

                for( i=0; i<n; i++ )
                {
                    sum += a[i];
                }
                printf("Sum of Elements = %d\n\n",sum);
                break;

            case 9:

                if( n == 0)
                {
                    printf("Array is Empty\n\n");
                }
                else{
                    sum = 0;
                    for( i=0; i<n; i++)
                    {
                        sum += a[i];
                    }
                    average = (float)sum / n;
                    printf("Average = %.2f\n\n", average);
                }
                break;

            case 10:

                printf("Thank You!\n\n");
                return 0;

            default:
               
                printf("Invalid Choice\n\n");
                break;

        }
    }
    return 0;
}