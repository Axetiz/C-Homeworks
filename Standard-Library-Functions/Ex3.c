#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    int rounded;

    printf("Enter a floating-point number: ");
    scanf("%lf", &num);


    printf("\nSquare root: %f\n\n", sqrt(num));

    rounded = (int)(num + 0.5);
    printf("Rounded to nearest integer: %d\n\n", rounded);

    printf("Sine (radians): %f\n", sin(num));


    return 0;
}
