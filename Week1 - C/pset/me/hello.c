#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for their name
    string name = get_string("What is your name? ");

    // Print hello message with user's name
    printf("hello, %s\n", name);

    return 0;
}
