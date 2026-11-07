#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rotate(char, int);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("plaintext:  ");
    int len = strlen(plaintext);

    printf("ciphertext: ");
    for (int i = 0; i < len; i++)
    {
        printf("%c", rotate(plaintext[i], k));
    }

    printf("\n");

    return 0;
}

char rotate(char ch, int key)
{
    char cipher_char;

    if (isupper(ch))
    {
        cipher_char = ((ch - 'A' + key) % 26) + 'A';
    }
    else if (islower(ch))
    {
        cipher_char = ((ch - 'a' + key) % 26) + 'a';
    }
    else
    {
        cipher_char = ch;
    }

    return cipher_char;
}
