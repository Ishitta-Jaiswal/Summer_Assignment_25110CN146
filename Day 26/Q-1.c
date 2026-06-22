// Program to create number guessing game:


/* Method:
1) Generate a random number.
2) Ask user to guess a number between 1 and 100.
3) Compare the generated number with guessed number.
4) If the guessed number is greater than generated number, print 'Too High'.
5) If it is less, print 'Too Low'.
6) If it is guessed correct, print correct and the number of attempts taken.
7) Keep asking user till user guesses correctly.
*/



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, attempts=0;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Enter number between 1 and 100\n");

    do
    {
       printf("Enter number = ");
       scanf("%d", &guess);

       attempts++;

       if( guess > number)
       {
           printf("Too high, try again\n");
       }
       else if( guess < number)
       {
           printf("Too low, try again\n");
       }
       else{
           printf("Amazing..! You guessed the number in %d attempts",attempts);
       }
    } while ( guess != number);
    
    return 0;
}