// Program to sort words by length:


/* Method:
1) Take the string input from user.
2) Count number of characters in each word of sentence.
3) Store both the word and the number of characters.
4) Sort the words based on their length.
5) Print the words sorted by their length.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[200], words[50][50], temp[50];
    int i, j, k=0, count=0, len[50], tempLen; 

    printf("Enter the sentence = ");
    fgets( str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    i = 0;

    while( str[i] != '\0')
    {
        if( str[i] != ' ')
        {
            k = 0;
            while( str[i] != ' '  &&  str[i] != '\0')
            {
                words[count][k] = str[i];
                k++;
                i++;
            }

            words[count][k] = '\0';
            len[count] = k;
            count++;
        }
        else{
            i++;
        }
    }

    for( i=0; i < count-1; i++)
    {
        for( j= i+1; j < count; j++)
        {
            if( len[i] > len[j])
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);

                tempLen = len[i];
                len[i] = len[j];
                len[j] = tempLen;
            }
        }
    }

    printf("Sorted words by length = ");
    for( i=0; i < count; i++)
    {
        printf("%s ",words[i]);
    }
    return 0;
}