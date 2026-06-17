// Program to convert lowercase to uppercase in string:


/* Method:
1) Take string input in lowercase from user.
2) Start a loop till it reaches '\0', and subtract 32 from ASCII value
   of each character as whole string is in lowercase.
3) Print string in uppercase.
*/



#include<stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i] != '\0'; i++)
    {
        if( str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    printf("String converted into uppercase = %s",str);
    return 0;
}