// Program to compress a string:


/* Method:
1) Take string input from user.
2) If a character occurs consecutively, store the character once and
   store the number of times it occcurs consecutively.
3) Print the characters and their number of occurance.
4) Repeat till the end of string.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, count=0;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Compressed string = ");
    for(i=0; str[i] != '\0'; i++)
    {
        count = 1;
        
        while( str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        printf("%c%d",str[i],count);
    }
    return 0;
}