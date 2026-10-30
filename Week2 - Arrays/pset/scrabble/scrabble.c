#include <cs50.h>
#include <stdio.h>
#include <string.h>

int calc_point(string);
string toUpper(string);

int main()
{
    int player1, player2;
    string word1, word2;

    word1 = get_string("Player 1: ");
    word2 = get_string("Player 2: ");

    player1 = calc_point(word1);
    player2 = calc_point(word2);

    if (player1 > player2)
        printf("Player 1 Wins!\n");
    else
    {
        if (player1 == player2)
            printf("Tie!\n");
        else
            printf("Player 2 Wins!\n");
    }

    return 0;
}

// Function to calculate points from the individual characters of the string
int calc_point(string word)
{
    int point, sum = 0;

    word = toUpper(word);

    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'L' ||
            word[i] == 'N' || word[i] == 'O' || word[i] == 'R' || word[i] == 'S' ||
            word[i] == 'T' || word[i] == 'U')
            point = 1;
        else if (word[i] == 'D' || word[i] == 'G')
            point = 2;
        else if (word[i] == 'B' || word[i] == 'C' || word[i] == 'M' || word[i] == 'P')
            point = 3;
        else if (word[i] == 'F' || word[i] == 'H' || word[i] == 'V' || word[i] == 'W' ||
                 word[i] == 'Y')
            point = 4;
        else if (word[i] == 'K')
            point = 5;
        else if (word[i] == 'J' || word[i] == 'X')
            point = 8;
        else if (word[i] == 'Q' || word[i] == 'Z')
            point = 10;
        else
            point = 0;

        sum += point;
    }

    return sum;
}

// Function to convert all characters of the input words to uppercase for simplicity
string toUpper(string word)
{
    int len = strlen(word);
    string newWord = word;

    for (int i = 0; i < len; i++)
    {
        if (word[i] >= 97 && word[i] <= 122)
            newWord[i] = (char) ((int) word[i] - 32);
        else
            newWord[i] = word[i];
    }

    return newWord;
}
