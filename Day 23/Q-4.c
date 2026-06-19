// Program to find maximum occuring character:


/* Method:
1) Take string input from user.
2) Traverse the string from first to null character.
3) Count frequency of each character in the string.
4) Print the character with maximum frequency.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], maxChar;
    int i, j, maxCount=0, found, count;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i=0; str[i] != '\0'; i++)
    {
        found = 0;
        
        for(j=0; j<i; j++)
        {
            if( str[i] == str[j])
            {
                found = 1;
                break;
            }
        }

        if( found == 1)
        {
            continue;
        }

        count = 1;

        for(j= i + 1; str[j] != '\0'; j++)
        {
            if( str[i] == str[j])
            {
                count += 1;
            }
        }

        if( count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occuring character = %c\n",maxChar);
    printf("Frequency = %d",maxCount);
    return 0;
}