// Program to check string rotation:


/* Method:
1) Take 2 strings from user.
2) If length of both strings are not equal, then entered strings 
   cannot be rotation of each other.
3) Rotate the string either to left or right side and compare it with
   another string.
4) Continue till the first string is rotated completely or the rotated
   string matches with another string.
5) If string gets matched, the strings are rotated.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100], temp;
    int i, j, n, found=0;

    printf("Enter first string = ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    n = strlen(str1);

    printf("Enter second string = ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if( strlen(str1) != strlen(str2))
    {
        printf("Entered strings are not rotated");
        return 0;
    }

    for(i=0; i<n; i++)
    {
        temp = str1[0];
        for(j= 0; j< n - 1; j++)
        {
            str1[j] = str1[j+1];
        }
        str1[ n - 1] = temp;

        if( strcmp(str1, str2) == 0)
        {
            found = 1;
            break;
        }
    }

    if( found == 0)
    {
        printf("Entered strings are not rotated");
    }
    else{
        printf("Entered strings are rotated");
    }
    return 0;
}