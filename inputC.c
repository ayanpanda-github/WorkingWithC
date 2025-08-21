#include <stdio.h>

int main(void)
{
    char name[100]; // Array to hold the name, size 100 characters
    printf("What's your name? "); // Prompt user for input
    scanf("%99s", name); // Read user input "%99s" - up to 99 characters
    printf("Hello, %s\n", name);// %s - format specifier for strings // %% = escape sequence for literal %
}
