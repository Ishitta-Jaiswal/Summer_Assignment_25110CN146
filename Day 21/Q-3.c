// Program to count vowels and consonants in a string:


/* Method:
1) Take string input from user.
2) Calculate length of string.
3) Start a loop from 0 to n, and compare each character.
4) If it is a vowel, add 1 to vowel variable.
5) If it is a consonant, add 1 to consonant variable.
6) Print number of vowels and consonants at last.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, n, vowel = 0, consonant = 0;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);

    n = strlen(str);
    
    for(i=0; i<n; i++)
    {
        if(( str[i] >= 'a' && str[i] <= 'z') || 
           ( str[i] >= 'A' && str[i] <= 'Z'))
        {
            if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
            {
                vowel += 1;
            }
            else{
                consonant += 1;
            }
        }
    }

    printf("Number of vowels = %d\n",vowel);
    printf("Number of consonants = %d",consonant);
    return 0;
}