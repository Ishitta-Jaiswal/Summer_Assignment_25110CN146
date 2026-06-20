// Program to find longest word:


/* Method:
1) Take string input from user.
2) Traverse the string.
3) Whenever space or '\0' is found, calculate the length of word.
4) If current word length is maximum so far, store the word and its
   length.
5) After traversing the whole string, print the longest word and its
   length.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, len, start=0, maxLen=0, maxStart=0;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i=0; ; i++)
    {
        if( str[i] == ' ' || str[i] == '\0')
        {
            len = i - start;

            if(len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("Longest word = ");
    for(i= maxStart; i < maxStart + maxLen; i++)
    {
        printf("%c",str[i]);
    }
    
    printf("\nLength = %d",maxLen);
    return 0;
}