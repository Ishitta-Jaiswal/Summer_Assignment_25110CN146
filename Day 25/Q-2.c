// Program to find common characters in strings:


/* Method:
1) Take two strings input from user.
2) Traverse first string.
3) First compare the characters of first string with other characters
   in the first string to avoid printing same character again.
4) Now start a nested loop and traverse second string.
5) Compare characters of first and second strings and print it if found
   in both strings and stop the loop so that it is not printed again if
   it is again present in second string.
6) Continue till end of string.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, k, duplicate;

    printf("Enter first string = ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string = ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Common characters = ");
    for(i=0; str1[i] != '\0'; i++)
    {
        duplicate = 0;
        for(k=0; k<i; k++)
        {
            if( str1[i] == str1[k])
            {
                duplicate = 1;
                break;
            }
        }

        if( duplicate == 1)
        {
            continue;
        }

        for(j=0; str2[j] != '\0'; j++)
        {
            if( str1[i] == str2[j])
            {
                printf("%c ",str1[i]);
                break;
            }
        }
    }
    return 0;
}