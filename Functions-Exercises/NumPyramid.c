#include <stdio.h>

void print_pyramid(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n - i; j++) 
            printf(" ");

        for (int j = 1; j <= i; j++) 
            printf("* ");

        printf("\n");
    }
}

int main() 
{
    int rows;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    print_pyramid(rows);

    return 0;
}
