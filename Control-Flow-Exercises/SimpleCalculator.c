#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int option, num1, num2;
    bool is_end = false;

    while (!is_end) {
        printf("\nSelect Option:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        if (option >= 1 && option <= 4) {
            printf("Input First Number: ");
            scanf("%d", &num1);
            printf("Input Second Number: ");
            scanf("%d", &num2);

            if (option == 1) {
                if (num2 < 0) printf("Result of: %d + (%d) = %d\n", num1, num2, num1 + num2);
                else printf("Result of: %d + %d = %d\n", num1, num2, num1 + num2);
            }
            else if (option == 2) {
                if (num2 < 0) printf("Result of: %d - (%d) = %d\n", num1, num2, num1 - num2);
                else printf("Result of: %d - %d = %d\n", num1, num2, num1 - num2);
            }
            else if (option == 3) {
                if (num2 < 0) printf("Result of: %d * (%d) = %d\n", num1, num2, num1 * num2);
                else printf("Result of: %d * %d = %d\n", num1, num2, num1 * num2);
            }
            else if (option == 4) {
                if (num2 == 0)
                    printf("Division by 0 is not possible.\n");
                else if (num2 < 0)
                    printf("Result of: %d / (%d) = %d\n", num1, num2, num1 / num2);
                else
                    printf("Result of: %d / %d = %d\n", num1, num2, num1 / num2);
            }
        }
        else if (option == 5) {
            is_end = true;
            printf("Exiting program...\n");
        }
        else {
            printf("The option %d does not exist. Please try again.\n", option);
        }
    }

    return 0;
}
