// Program to print character frequency:


/* Method:
1) Take string input from user.
2) Traverse string from 0 to null character using loop.
3) Initialize count variable to 1.
4) Start a nested loop to check if a character already checked and
   printed is not printed again.
5) Start another nested loop to check if it is the first appearance, then 
   it counts its frquency.
6) Print character and its frequency.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, j, count;

    printf("Enter the string = ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i=0; str[i] != '\0'; i++)
    {
        count = 1;

        for(j=0; j<i; j++)
        {
            if( str[i] == str[j])
            {
                break;
            }
        }

        if( j == i)
        {
            for(j= i + 1; str[j] != '\0'; j++)
            {
                if( str[i] == str[j])
                {
                    count += 1;
                }
            }
            printf("%c = %d\n",str[i],count);
        }
    }
    return 0;
}