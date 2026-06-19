// Program to find first repeating character in a string:


/* Method:
1) Take string input from user.
2) Traverse the string from first to null character.
3) For each character, compare it other characters in string.
4) If the character appears again, print it and stop the code.
5) If not character is repeated, print no repeating character found.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, j, found=0;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i=0; str[i] != '\0'; i++)
    {
        found = 0;
        for(j= 0; j < i; j++)
        {
            if( str[i] == str[j])
            {
                found = 1;
                printf("First repeating character = %c",str[i]);
                break;
            }
        }

        if( found == 1)
        {
            break;
        }
    }

    if( found == 0)
    {
        printf("No repeating character found");
    }
    return 0;
}