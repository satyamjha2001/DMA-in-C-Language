#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *str, c;
    str = (char *)malloc(sizeof(char));
    int i = 0, j = 1;
    printf("Enter your string: ");
    while (c != '\n')
    {
        c = getc(stdin);
        j++;
        str = (char *)realloc(str, j * (sizeof(char)));
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    printf("\nEntered string is: %s\n", str);
    free(str);
    return 0;
}