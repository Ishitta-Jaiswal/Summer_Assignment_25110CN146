// Program to check palindrome string:


/* Method:
1) Take string input from user.
2) Calculate length of string.
3) Start a loop from 0 to n/2.
4) Compare beginning and ending elements and continue comparing by 
   increasing beginning and decreasing ending elements.
5) If both are not found equal, print string is not palindrome else 
   print string is palindrome.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, n, found=0;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    n = strlen(str);

    for(i=0; i< n / 2; i++)
    {
        if(str[i] != str[ n - i - 1])
        {
            found = 1;
            break;
        }
    }

    if( found == 0)
    {
        printf("Entered string is a palindrome");
    }
    else{
        printf("Entered string is not a palindrome");
    }
    return 0;
}