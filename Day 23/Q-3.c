// Program to check anagram string:


/* Method:
1) Take two strings from input.
2) If length of both strings are not equal, then they are not anagram.
3) Count the frequency of each character in both the strings.
4) If frequency of each character in both strings are equal, then 
   both strings are anagram.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, count1, count2, found=1;

    printf("Enter first string = ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string = ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if( strlen(str1) != strlen(str2))
    {
        printf("Entered strings are not anagram strings");
        return 0;
    }

    for(i=0; str1[i] != '\0'; i++)
    {
        count1 = 0;
        count2 = 0;

        for(j=0; str1[j] != '\0'; j++)
        {
            if( str1[i] == str1[j])
            {
                count1 += 1;
            }

            if( str1[i] == str2[j])
            {
                count2 += 1;
            }
        }

        if( count1 != count2)
        {
            found = 0;
            break;
        }
    }

    if( found == 0)
    {
        printf("Entered strings are not anagram strings");
    }
    else{
        printf("Entered strings are anagram strings");
    }
    return 0;
}