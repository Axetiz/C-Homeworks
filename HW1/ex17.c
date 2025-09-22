/*
Exercise 1-17:
Write a program to print all input lines that are longer than 80 characters.
*/

#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

int main() {
    char line[MAXLINE];
    int c, i, len;

    while (1) {

	//Collecting Data
        len = 0;

        while ((c = getchar()) != EOF && c != '\n') {
            if (len < MAXLINE - 1)
                line[len++] = c;
        }

        if (c == '\n' && len < MAXLINE - 1)
            line[len++] = c;

        line[len] = '\0';

	//Printing Lines by checking the LIMIT
        if (len > LIMIT) {
            for (i = 0; i < len; i++)
                putchar(line[i]);
        }

        if (c == EOF)
            break;
    }

    return 0;
}
