#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, result;
    char op;

    printf("Enter a number: ");
    scanf("%d", &num1);
    
    while (1)
    {
        printf("Type the operation (or '=' to finish): ");
        scanf(" %c", &op);

        if (op == '=')
            break;
        
        printf("Enter another number: ");
        scanf("%d", &num2);

        switch (op)
        {
            case '+':
                num1 = num1 + num2;
                break;
            case '-':
                num1 = num1 - num2;
                break;
            case '/':
                if (num2 == 0)
                {
                    printf("Division by zero is not allowed.\n");
                    return 1;
                }
                num1 = num1 / num2;
                break;
            case '*':
                num1 = num1 * num2;
                break;
            default:
                printf("Invalid operation: %c\n", op);
                return 1;
        }
    }

    printf("The result is %d\n", num1);

    return 0;
}