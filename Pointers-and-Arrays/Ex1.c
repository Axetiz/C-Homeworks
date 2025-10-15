#include <stdio.h>

void doubleValue(int *ptr)
{
    *ptr = *ptr * 2;
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\nOriginal value: %d\n", num);

    doubleValue(&num);

    printf("Value after doubling: %d\n", num);

    return 0;
}
