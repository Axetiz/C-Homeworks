#include <stdio.h>

void copyArray(int *source, int *destination, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(destination + i) = *(source + i);
    }
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int source[n];
    int destination[n];

    printf("\nEnter %d integers for the source array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", source + i);
    }

    copyArray(source, destination, n);

    printf("\nElements of the destination array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(destination + i));
    }
    printf("\n\n");

    return 0;
}
