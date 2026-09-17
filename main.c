#include <stdio.h>

int main(void)
{
    char c;

    printf("enter a character : ");
    scanf("%c", &c);

    c = c + 1;

    printf("the next character is %c\n", c);

    return 0;
}