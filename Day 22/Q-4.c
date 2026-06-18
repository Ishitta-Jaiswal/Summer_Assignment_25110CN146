// Program to remove spaces from string:


/* Method:
1) Take string input from user.
2) Traverse string using loop.
3) Check each character and if it not a space, copy it to another
   string.
4) Add null character to 2nd string at last.
5) Print second string.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int i, j=0;

    printf("Enter the string = ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    for(i=0; str1[i] != '\0'; i++)
    {
        if( str1[i] != ' ')
        {
            str2[j] = str1[i];
            j++;
        }
    }

    str2[j] = '\0';
    printf("Original string = %s\n",str1);
    printf("String after removing spaces = %s",str2);
    return 0;
}