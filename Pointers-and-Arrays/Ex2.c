#include <stdio.h>

void calculateSumAndAverage(int *arr, int size, int *sum, double *avg)
{
    *sum = 0;
    for (int i = 0; i < size; i++)
    {
        *sum += *(arr + i);
    }
    *avg = (double)(*sum) / size;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    int sum;
    double average;

    calculateSumAndAverage(arr, n, &sum, &average);

    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
