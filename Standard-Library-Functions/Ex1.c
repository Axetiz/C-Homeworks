#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[101], str2[101];
    char copy[101];
    char concat[202];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';


    strcpy(concat, str1);
    strcat(concat, str2);

    printf("\nConcatenated string: %s\n\n", concat);

    if (strcmp(str1, str2) == 0)
        printf("The strings are the same.\n\n");
    else
        printf("The strings are different.\n\n");

    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n\n", strlen(str2));

    strcpy(copy, str1);
    printf("Copy of the first string: %s\n", copy);

    return 0;
}
