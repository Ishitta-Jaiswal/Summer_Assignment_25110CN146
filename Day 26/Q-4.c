// Program to create quiz application:


/* Method:
1) Ask user a series of questions.
2) Keep track of user's answer for each question asked.
3) Check whether answer is correct or not.
4) If answer is correct, add 1 to score.
5) Print final score at last.
*/



#include<stdio.h>
int main()
{
    char questions[5][100] = { 
        "What is the capital of India?",
        "Who is known as father of C language?",
        "Which is the biggest planet in our solar system?",
        "Which is the largest ocean in the world?",
        "Which is the largest continent?"
    };

    char options[5][4][50] = {
        {"Mumbai", "Delhi", "Kolkata", "Chennai"},
        {"Dennis Ritchie", "James Gosling", "Bjarne Stroustrup", "Guido van Rossum"},        
        {"Mercury", "Pluto", "Jupiter", "Mars"},
        {"Indian Ocean", "Atlantic Ocean", "Arctic Ocean", "Pacific Ocean"},
        {"Asia", "Africa", "Europe", "Australia"}
    };

    int correctAnswer[5] = {2, 1, 3, 4, 1};
    int i, j, answer, score=0;

    printf(" ***Quiz Application***\n\n");

    for( i=0; i<5; i++)
    {
        printf(" %d) %s\n", i+1, questions[i]);

        for( j=0; j<4; j++)
        {
            printf(" %d) %s\n", j+1, options[i][j]);
        }

        printf("Enter your option = ");
        scanf("%d", &answer);

        if( answer == correctAnswer[i])
        {
            printf(" Correct!\n\n");
            score++;
        }
        else{
            printf(" Wrong!\n\n");
        }
    }

    printf("   Quiz Completed   \n");
    printf("Your score = %d/5",score);

    return 0;
}