#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("What is the string? ");

    for(int i = strlen(text) - 1; i >= 0; i--)
    {
        printf("%c", text[i]);
    }
    printf("\n");
}
