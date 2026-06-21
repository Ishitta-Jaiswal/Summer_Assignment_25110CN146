// Program to sort names alphabetically:


/* Method:
1) Take number of names from user.
2) Take names from user.
3) Compare two names using strcmp().
4) If first name comes after the second name alphabetically, swap them.
5) Repeat the step till all names are sorted alphabetically.
6) Print the names in sorted order.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char names[100][100], temp[100];
    int i, j, n;

    printf("Enter the number of names = ");
    scanf("%d", &n);
    getchar();

    printf("Enter the names = ");
    for(i=0; i< n; i++)
    {
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    for( i=0; i< n-1; i++)
    {
        for( j= i+1; j<n; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy( temp, names[i]);
                strcpy( names[i], names[j]);
                strcpy( names[j], temp);
            }
        }
    }

    printf("Sorted names in alphabetical order = ");
    for( i=0; i<n; i++)
    {
        printf("%s\n",names[i]);
    }
    return 0;
}