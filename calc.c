#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, result;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Digite the operation: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Division by zero is not allowed.\n");
            return 1;
        }
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        printf("Invalid operation: %c\n", op);
        return 1;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}