#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("What is the string? ");
    bool flag = true;
    for(int i = 0, n = strlen(text); i < n - 1; i++)
    {


        if(text[i] > text[i+1] && text[i] != '\0')
        {
            flag = false;
        }
    }

    if(flag)
        {
            printf("The string is in alphabetical order.\n");
        }
        else
        {
            printf("The string is not in alphabetical order.\n");
        }
}
