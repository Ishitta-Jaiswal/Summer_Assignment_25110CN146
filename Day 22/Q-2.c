// Program to count words in a sentence:


/* Method:
1) Take sentence from user.
2) Traverse the string from first character to null character.
3) If it is first character and it is not a space, increament value
   of words variable by one.
4) If current character is not a space but previous character is space
   increament value of words variable by one.
5) Print number of words.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, words=0;

    printf("Enter the sentence = ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i] != '\0'; i++)
    {
        if(( i == 0 && str[i] != ' ' && str[i] != '\n') ||
        ( str[i] != ' ' && str[i] != '\n' && str[ i - 1] == ' '))
        {
            words += 1;
        }
    }
    printf("Number of words = %d",words);
    return 0;
}