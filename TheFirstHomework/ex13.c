/*
Exercise 1-13:
Write a program to print a histogram of the lengths of words in its input.
It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

#include <stdio.h>

#define MAXLEN 20

int main() {
    int c, length = 0;
    int counts[MAXLEN] = {0};
    int i, j;

    //Collecting Values
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (length > 0) {
                if (length <= MAXLEN)
                    counts[length - 1]++;
                else
                    counts[MAXLEN - 1]++;
                length = 0;
            }
        } else {
            length++;
        }
    }

    if (length > 0) {
        if (length <= MAXLEN)
            counts[length - 1]++;
        else
            counts[MAXLEN - 1]++;
    }

    //Checking Non-Zero Case
    int all_zero = 1;
    for (i = 0; i < MAXLEN; i++) {
        if (counts[i] != 0) {
            all_zero = 0;
            break;
        }
    }

    if (all_zero) {
        printf("\nNo words found in the input.\n");
        return 0;
    }

    //removing corners with 0s
    int start = 0;
    int end = MAXLEN - 1;

    for (i = 0; i < MAXLEN; i++)
        if (counts[i] != 0) { start = i; break; }

    for (i = MAXLEN - 1; i >= 0; i--)
        if (counts[i] != 0) { end = i; break; }

    //Printing the Histogram
    printf("\nWord length histogram:\n");
    for (i = start; i <= end; i++) {
        if (i < MAXLEN - 1)
            printf("%2d: ", i + 1);
        else
            printf("%2d+: ", MAXLEN);

        for (j = 0; j < counts[i]; j++)
            printf("II ");

        printf("\n");
    }

    return 0;
}
