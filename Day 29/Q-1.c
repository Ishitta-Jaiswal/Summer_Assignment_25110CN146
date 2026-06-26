// Program to create menu driven calculator:


/* Method:
1) Give options for user to choose.
2) Add differnt cases using switch, arrays and loops.
3) Take choice from user each time and give optput accordingly.
4) Keep showing options till user choses Exit.
*/



#include<stdio.h>
#include<string.h>
#include<math.h>

struct calc
{
    char operation[50];
    double a;
    double b;
    double result;
};

void saveHistory(struct calc h[], int *count, char operation[],
                    double a, double b, double result)
{
    int i;

    if( *count < 50 )
                {
                    strcpy(h[*count].operation, operation);
                    h[*count].a = a;
                    h[*count].b = b;
                    h[*count].result = result;
                    (*count)++;
                }
                else{
                    for( i=0; i<49; i++)
                    {
                        h[i] = h[i+1];
                    }

                    strcpy(h[49].operation, operation);
                    h[49].a = a;
                    h[49].b = b;
                    h[49].result = result;
                }
}

int main()
{
    struct calc h[50];
    double a, b, result=0;
    int choice, i, num1, num2, count=0;

    while(1)
    {

        printf(" *** Calculator *** \n\n");
        printf("1) Addition\n");
        printf("2) Subtraction\n");
        printf("3) Multiplication\n");
        printf("4) Division\n");
        printf("5) Modulus\n");
        printf("6) Power\n");
        printf("7) Square Root\n");
        printf("8) View Last Result\n");
        printf("9) View History\n");
        printf("10) Clear History\n");
        printf("11) Exit\n");

        printf("Enter Choice = ");
        scanf("%d", &choice);

        switch( choice )
        {
            case 1:
                
                printf("Enter two numbers = ");
                scanf("%lf %lf", &a, &b);

                result = a + b;
                printf("Addition = %lf\n\n",result);

                saveHistory(h, &count, "Addition", a, b, result);

                break;

            case 2:

                printf("Enter two numbers = ");
                scanf("%lf %lf", &a, &b);

                result = a - b;
                printf("Subtraction = %lf\n\n",result);

                saveHistory(h, &count, "Subtraction", a, b, result);

                break;

            case 3:

                printf("Enter two numbers = ");
                scanf("%lf %lf", &a, &b);

                result = a * b;
                printf("Multiplication = %.6lf\n\n",result);

                saveHistory(h, &count, "Multiplication", a, b, result);

                break;

            case 4:

                printf("Enter two numbers = ");
                scanf("%lf %lf", &a, &b);

                if( b == 0)
                {
                    printf("Division by zero is not possible\n\n");
                    break;
                }
                else{
                    result = a / b;
                    printf("Division = %.6lf\n\n",result);

                    saveHistory(h, &count, "Division", a, b, result);

                    break;
                }

            case 5:

                printf("Enter two numbers = ");
                scanf("%d %d", &num1, &num2);

                if( num2 == 0 )
                {
                    printf("Modulus by zero is not possible\n\n");
                    break;
                }
                else{
                    result = num1 % num2;
                    printf("Modulus = %.0lf\n\n",result);

                    saveHistory(h, &count, "Modulus", (double)num1,
                                   (double)num2, result);

                    break;
                }

            case 6:

                printf("Enter base and exponent = ");
                scanf("%lf %lf", &a, &b);

                result = pow(a, b);
                printf("Power = %.6lf\n\n",result);

                saveHistory(h, &count, "Power", a, b, result);

                break;

            case 7:

                printf("Enter number = ");
                scanf("%lf", &a);

                if( a < 0)
                {
                    printf("Square root of negative numbers is not possible\n\n");
                    break;
                }
                else{
                result = sqrt(a);
                printf("Square Root = %.6lf\n\n",result);

                saveHistory(h, &count, "Square Root", a, 0, result);

                break;
                }

            case 8:

                printf("Last Result = %lf\n\n",result);
                break;

            case 9:

                if( count == 0 )
                {
                    printf("No Calculations Performed Yet\n\n");
                    break;
                }
                else{
                    printf(" Calculation History \n");

                    for( i=0; i < count; i++)
                    {
                        printf("%d) %s : %.4lf , %.4lf = %.4lf\n",i+1,
                                    h[i].operation, h[i].a, h[i].b,
                                    h[i].result);
                    }
                    break;
                }

            case 10:

                count = 0;
                printf("History Cleared Successfully\n\n");
                break;

            case 11:

                printf("Thank You!\n\n");
                return 0;

            default:

                printf("Invalid Choice\n\n");
                break;

        }
    }
    return 0;
}