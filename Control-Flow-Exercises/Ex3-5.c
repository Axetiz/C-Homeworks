#include <stdio.h>

void reverse(char s[]) {
    int i = 0, j, temp;
    while (s[i] != '\0') i++;
    j = i - 1;
    i = 0;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

void itob(int n, char s[], int b) {
    int i = 0, sign;
    unsigned int num;

    if ((sign = n) < 0)
        num = -n;
    else
        num = n;

    do {
        int rem = num % b;
        if (rem < 10)
            s[i++] = rem + '0';
        else
            s[i++] = rem - 10 + 'A';  // for hexadecimal digits
    } while ((num /= b) > 0);

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';
    reverse(s);
}

int main() {
    int number = 255;
    char str[50];

    itob(number, str, 16);
    printf("Decimal %d in base 16: %s\n", number, str);

    itob(number, str, 2);
    printf("Decimal %d in base 2: %s\n", number, str);

    itob(number, str, 8);
    printf("Decimal %d in base 8: %s\n", number, str);

    return 0;
}
