#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, Result = 0;
    char operation, add = '+', sub = '-', mul = '*', div = '/';

    printf("Enter operation: ( +, -, *, /): ");
    scanf("%c", &operation);

    if (add == operation || sub == operation || mul == operation || div == operation) {
        printf("Enter two operands: ");
        scanf("%lf,%lf", &num1, &num2);
        if((round(num1) == num1) || (round(num2) == num2)){
            switch (operation) {
                case '+' :
                    Result = num1 + num2;
                    break;

                case '-' :
                    Result = num1 - num2;
                    break;
                case '*':
                    Result = num1 * num2;
                    break;

                case '/':
                    Result = num1 / num2;
                    break;
            }
        } else{
            printf("Please insert the correct values");
        }
    } else {
        printf("Error! operator is not correct");
    }

    printf("Result = %lf", Result);
    return 0;
}
