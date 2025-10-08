#include <stdio.h>

void expand(char s1[], char s2[]) {
    int i = 0, j = 0;
    char start, end;

    while (s1[i] != '\0') {
        if (s1[i] == '-' && i > 0 && s1[i+1] != '\0') {
            start = s1[i-1];
            end = s1[i+1];
            if (start < end) {
                for (char c = start + 1; c <= end; c++)
                    s2[j++] = c;
                i++;
            } else {
                s2[j++] = s1[i];
            }
        } else {
            s2[j++] = s1[i];
        }
        i++;
    }
    s2[j] = '\0';
}

int main() {
    char shorthand[] = "a-d0-3x-z";
    char expanded[100];

    expand(shorthand, expanded);

    printf("Original: %s\n", shorthand);
    printf("Expanded: %s\n", expanded);

    return 0;
}
