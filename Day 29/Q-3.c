// Program to create menu-diven string operations system:


/* Method:
1) Give different string options for user to choose.
2) Add differnt cases using switch, arrays and loops.
3) Take choice from user each time and give optput accordingly.
4) Keep showing options till user choses Exit.
*/



#include<stdio.h>
#include<string.h>

int main()
{
    int choice, i, len1, len2;
    int found1, found2, vowel1, consonant1, vowel2, consonant2;
    char str1[100] ="", str2[100]="", copy1[100], copy2[100], search;
    char rev1[100], rev2[100], con[200];

    while(1)
    {

        printf("*** String Operations ***\n\n");
        printf("1) Insert String\n");
        printf("2) Display Characters\n");
        printf("3) Calculate Length\n");
        printf("4) Copy String\n");
        printf("5) Concatenate String\n");
        printf("6) Compare Strings\n");
        printf("7) Reverse String\n");
        printf("8) Search Character\n");
        printf("9) Count Vowels and Consonants\n");
        printf("10) Exit\n\n");

        printf("Enter Choice = ");
        scanf("%d", &choice);

        switch( choice )
        {
            case 1:

                printf("Enter first string = ");
                getchar();
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string = ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                printf("String Entered Successfully!\n\n");
                break;

            case 2:

                printf("First String = %s\n",str1);
                printf("Second String = %s\n\n",str2);
                break;

            case 3:

                len1 = strlen(str1);
                len2 = strlen(str2);

                printf("Length of first string = %d\n",len1);
                printf("Length of second string = %d\n\n",len2);
                break;

            case 4:

                strcpy(copy1, str1);
                printf("Copied First String = %s\n",copy1);

                strcpy(copy2, str2);
                printf("Copied Second String = %s\n\n",copy2);
                break;

            case 5:

                strcpy(con, str1);
                strcat(con, str2);
                printf("Concatenated String = %s\n\n",con);
                break;

            case 6:

                if( strcmp(str1, str2) == 0)
                {
                    printf("Both strings are equal\n\n");
                }
                else 
                {
                    printf("Strings are not equal\n\n");
                }
                break;

            case 7:

                len1 = strlen(str1);
                len2 = strlen(str2);

                for( i=0; i < len1; i++)
                {
                    rev1[i] = str1[len1 - i - 1];
                }
                rev1[i] = '\0';
                printf("First Reversed String = %s\n",rev1);

                for( i=0; i < len2; i++)
                {
                    rev2[i] = str2[len2 - i - 1];
                }
                rev2[i] = '\0';
                printf("Second Reversed String = %s\n\n",rev2);
                break;

            case 8:

                printf("Enter Character to search = ");
                scanf(" %c", &search);

                len1 = strlen(str1);
                len2 = strlen(str2);

                found1 = 0;
                found2 = 0;

                printf("In first string, element found at index ");

                for( i=0; i < len1; i++)
                {
                    if(str1[i] == search)
                    {
                        found1 = 1;
                        printf("%d ",i+1);
                    }
                }
                if( found1 == 0)
                {
                    printf("Not found");
                }
                printf("\n");

                printf("In second string, element found at index ");

                for( i=0; i < len2; i++)
                {
                    if(str2[i] == search)
                    {
                        found2 = 1;
                        printf("%d ",i+1);
                    }
                }
                if( found2 == 0)
                {
                    printf("Not found");
                }
                printf("\n\n");
                break;

            case 9:

                len1 = strlen(str1);
                len2 = strlen(str2);

                vowel1 = consonant1 = 0;
                vowel2 = consonant2 = 0;

                for( i=0; i < len1; i++)
                {
                    if(( str1[i] >= 'a' && str1[i] <= 'z') || 
                       ( str1[i] >= 'A' && str1[i] <= 'Z'))
                    {
                        if( str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i'
                             || str1[i] == 'o' || str1[i] == 'u' ||
                            str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I'
                             || str1[i] == 'O' || str1[i] == 'U')
                        {
                            vowel1 += 1;
                        }
                        else{
                            consonant1 += 1;
                        }
                    }
                }
                printf("Vowels in first string = %d\n",vowel1);
                printf("Consonants in first string = %d\n",consonant1);

                for( i=0; i < len2; i++)
                {
                    if(( str2[i] >= 'a' && str2[i] <= 'z') || 
                       ( str2[i] >= 'A' && str2[i] <= 'Z'))
                    {
                        if( str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i'
                             || str2[i] == 'o' || str2[i] == 'u' ||
                            str2[i] == 'A' || str2[i] == 'E' || str2[i] == 'I'
                             || str2[i] == 'O' || str2[i] == 'U')
                        {
                            vowel2 += 1;
                        }
                        else{
                            consonant2 += 1;
                        }
                    }
                }
                printf("Vowels in second string = %d\n",vowel2);
                printf("Consonants in second string = %d\n\n",consonant2);
                break;

            case 10:

                printf("Thank You!\n\n");
                return 0;

            default:
               
                printf("Invalid Choice\n\n");
                break;

        }
    }
    return 0;
}