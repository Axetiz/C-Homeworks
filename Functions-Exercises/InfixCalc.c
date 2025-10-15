#include <stdio.h>

int main() 
{
    char op;
    int a, b;
    int result;

    printf("Simple C Calculator\n");
    printf("For exit: Press Ctrl + D.\n\n");

    while (printf("Enter expression: "), scanf("%d %c %d", &a, &op, &b) == 3) 
    {
        switch (op) 
        {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b != 0)
                    result = a / b;
                else {
                    printf("NaN Error: Division by zero\n\n");
                    continue;
                }
                break;
            case '%':
                if (b != 0)
                    result = a % b;
                else {
                    printf("NaN Error: Modulo by zero\n\n");
                    continue;
                }
                break;
            default:
                printf("Unknown operator '%c'\n\n", op);
                continue;
        }

        printf("Result: %d\n\n", result);
    }

    printf("\nExiting calculator.\n");
    return 0;
}
