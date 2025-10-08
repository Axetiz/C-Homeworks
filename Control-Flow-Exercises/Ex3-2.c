#include <stdio.h>

void escape(char result[], char original[]) {
    int i = 0, j = 0;
    while (original[i] != '\0') {
        if (original[i] == '\n') {
            result[j++] = '\\';
            result[j++] = 'n';
        } else if (original[i] == '\t') {
            result[j++] = '\\';
            result[j++] = 't';
        } else {
            result[j++] = original[i];
        }
        i++;
    }
    result[j] = '\0';
}

void unescape(char result[], char original[]) {
    int i = 0, j = 0;
    while (original[i] != '\0') {
        if (original[i] == '\\') {
            i++;
            if (original[i] == 'n') {
                result[j++] = '\n';
            } else if (original[i] == 't') {
                result[j++] = '\t';
            } else {
                result[j++] = '\\';
                result[j++] = original[i];
            }
        } else {
            result[j++] = original[i];
        }
        i++;
    }
    result[j] = '\0';
}

int main() {
    char text[] = "Hello\tWorld\nC Programming!";
    char escaped[100], unescaped[100];

    escape(escaped, text);
    printf("Escaped version: %s\n", escaped);

    unescape(unescaped, escaped);
    printf("Unescaped version:\n%s\n", unescaped);

    return 0;
}
