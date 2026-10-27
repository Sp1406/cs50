#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("What is the string? ");

    for(int i = 0, n = strlen(text); i < n; i++)
    {
        printf("%c", text[i]);
    }
    printf("\n");
}
