#include <stdio.h>

void to_str(int n, char s[]) {

    int i = 0, j;

    if (n == 0) {
        s[i++] = '0';
    } 
    else 
    {
        if (n < 0) 
	{
            s[i++] = '-';
            n = -n;
        }

        int start = i;

        while (n > 0) 
	{
            s[i++] = (n % 10) + '0';
            n /= 10;
        }

        for (j = start; j < (i + start) / 2; j++) 
	{
            char tmp = s[j];
            s[j] = s[i - 1 - (j - start)];
            s[i - 1 - (j - start)] = tmp;
        }
    }
    s[i] = '\0';
}

int main() {
    int num;
    char str[20];
    scanf("%d", &num);
    to_str(num, str);
    printf("%s\n", str);
    return 0;
}

