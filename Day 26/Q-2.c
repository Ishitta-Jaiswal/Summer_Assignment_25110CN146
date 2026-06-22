// Program to create voting eligibility system:


/* Method:
1) Ask age, whether citizen of India or not, and voter id holder or not
   from user.
2) If age is greater than or equal to 18,
   if he/she is citizen of India,
   if he/she has voter id,
   then he/she is eligible to vote.
3) Give the candidates for user to choose and record the vote.
4) If one or more conditions are not met, then he/she is not eligible to 
   vote.
*/



#include<stdio.h>

int main()
{
    int age, citizen, voterId, vote;

    printf("Enter age = ");
    scanf("%d", &age);

    printf("Are you citizen of India? (1/0) = ");
    scanf("%d", &citizen);

    printf("Do you have voter id? (1/0) = ");
    scanf("%d", &voterId);

    if( age >= 18  &&  citizen == 1  &&  voterId == 1)
    {
        printf("You are eligible to vote\n");
        printf(" Candidate 1) Abhijeet\n");
        printf(" Candidate 2) Lakshya\n");
        printf(" Enter your vote (1/2) = ");
        scanf("%d", &vote);

        if( vote == 1 || vote == 2)
        {
            printf(" Your vote has been recorded");
        }
        else{
            printf("Invalid vote");
        }

    }
    else{
        printf("You are not eligible to vote");
    }    
    return 0;
}