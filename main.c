#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 ,num2,Result;
    char operation;

    printf("\nEnter operation:  ");
    scanf("%c" ,&operation);

    printf("\nEnter first number ");
    scanf("%d",&num1);

    printf("\nEnter second number ");
    scanf("%d",&num2);

    switch(operation)
    {
    case'+' :
        Result = num1+ num2;
        break;

    case '-' :
        Result = num1-num2;
        break;
    case '*':
        Result = num1*num2;
        break;

    case '/':
        Result = num1/num2;
        break;

    }
    printf("\nResult  = %d" , Result);
    return 0;
}
