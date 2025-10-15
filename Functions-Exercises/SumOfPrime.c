#include <stdio.h>

int is_prime(int n) 
{
    if (n < 2) 
        return 0;

    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
            return 0;
    }

    return 1;
}

void check_sum_of_primes(int n) 
{
    int found = 0;

    for (int i = 2; i <= n / 2; i++) 
    {
        if (is_prime(i) && is_prime(n - i)) 
        {
            printf("%d = %d + %d\n", n, i, n - i);
            found = 1;
        }
    }

    if (!found) 
    {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    }
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nChecking combinations for %d:\n\n", num);
    check_sum_of_primes(num);

    return 0;
}
