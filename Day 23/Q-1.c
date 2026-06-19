// Program to find first non-repeating character.


/* Method:
1) Take string input from user.
2) Traverse the string from first to null character.
3) For each character, count how many times it is appearing in string.
4) If frequency is 1, print the character and stop the code.
5) If no such character found, print no such character present.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, j, found, count=0;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] ='\0';

    for(i=0; str[i] != '\0'; i++)
    {
        found = 0;
        for(j=0; str[j] != '\0'; j++)
        {
            if( i != j && str[i] == str[j])
            {
                found = 1;
                break;
            }
        }
        
        if( found == 0)
        {
            printf("First non-repeating character = %c",str[i]);
            count = 1;
            break;
        }
    }

    if(count == 0)
    {
        printf("No non-repeating character found");
    }
    return 0;
}