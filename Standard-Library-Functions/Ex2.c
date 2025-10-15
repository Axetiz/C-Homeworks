#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;
    struct tm *t;

    now = time(NULL);
    t = localtime(&now);

    printf("Current date: %04d-%02d-%02d\n", 
           t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);

    printf("Current time: %02d:%02d:%02d\n", 
           t->tm_hour, t->tm_min, t->tm_sec);

    return 0;
}
