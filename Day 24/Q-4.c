// Program to remove duplicate characters in a string:


/* Method:
1) Take string input from user.
2) Traverse the string.
3) Compare the characters with other characters in string and print
   it if it is appearing for first time.
4) Continue the process till end of string.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, j, found;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("After removing duplicated characters = ");
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

        if(found == 0)
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}