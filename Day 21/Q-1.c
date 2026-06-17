// Program to find string length without using strlen():


/* Method:
1) Take string input from user.
2) Initialize length variable to zero.
3) Compare each character, if it is not '\0' or '\n', add 1 to length 
   variable.
4) Print value of length variable.
*/



#include<stdio.h>
int main()
{
    char str[100];
    int length = 0;
    
    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);

    printf("String = %s",str);

    while( str[length] != '\0'  &&  str[length] != '\n')
    {
        length += 1;
    }

    printf("Length of string = %d",length);
    return 0;
}