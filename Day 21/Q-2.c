// Program to reverse a string:


/* Method:
1) Take input string from user.
2) Calculate length of string.
3) Start a loop from 0 to n/2, and swap first and last character, then
   move to second and second last character till loop reaches n/2.
4) Print the reversed string.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], temp;
    int n, i;
    
    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);

    n = strlen(str);

    for(i=0; i< n/2; i++)
    {
        temp = str[i];
        str[i] = str[ n - i - 1];
        str[ n - i - 1] = temp;
    }

    printf("Reversed string = %s",str);
    return 0;
}