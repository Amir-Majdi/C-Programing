#include <stdio.h>


int main()
{
    char opperator;
    double num1, num2, result;
    

    printf("\nEnter An Opperator + - * / ): ");
    scanf("%c", &opperator);

    printf("\nEnter Your First Number: ");
    scanf("%lf", &num1);

    printf("\nEnter Your Second Number: ");
    scanf("%lf", &num2);


      switch(opperator){
    case '+':
        result = num1 + num2;
        printf("Answer %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Answer %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Answer %.2lf\n", result);
        break;
    case '/':
        result = num1 / num2;
        printf("Answer %.2lf\n", result);
        break;
        default:
        printf("%c is not valid", opperator);
        break;
    }

    return 0;

}