/*
Exercise 1-19:
Write a function reverse(s) that reverses the character string s.
Use it to write a program that reverses its input a line at a time.
*/

#include <stdio.h>

#define MAXLINE 1000

//Reversing Line Function
void reverse(char s[], int len) {
    int i, j;
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char line[MAXLINE];
    int c, len, i;

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

	//Printing Lines
        if (len > 0) {
            if (line[len - 1] == '\n')
                reverse(line, len - 1);
            else
                reverse(line, len);

            for (i = 0; i < len; i++)
                putchar(line[i]);
        }

        if (c == EOF)
            break;
    }

    return 0;
}
