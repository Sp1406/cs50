#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int calc_words(string);
int calc_sentence(string);
int calc_letters(string);

int main()
{
    int letterCount, wordCount, sentenceCount, grade;
    string text;

    text = get_string("Text: ");

    letterCount = calc_letters(text);
    wordCount = calc_words(text);
    sentenceCount = calc_sentence(text);

    // Average number of letters per 100 words in Coleman-Liau Index
    double L = (letterCount / (double) wordCount) * 100;
    // Average number of sentences per 100 words in Coleman-Liau Index
    double S = (sentenceCount / (double) wordCount) * 100;

    // Coleman-Liau Index Formula
    double CLI = (0.0588 * L) - (0.296 * S) - 15.8;

    // Rounding off the score from Coleman-Liau Index to get the grade
    grade = round(CLI);

    if (grade < 1)
        printf("Before Grade 1\n");
    else if (grade >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %d\n", grade);
}

// Function to calculate letter count
int calc_letters(string text)
{
    int count = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
            count++;
    }

    return count;
}

// Function to calculate word count
int calc_words(string text)
{
    int count = 1;

    for (int i = 0, len = strlen(text); i < (len - 1); i++)
    {
        if (text[i] == ' ')
            count++;
    }

    return count;
}

// Function to calculate sentence count
int calc_sentence(string text)
{
    int count = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
            count++;
    }

    return count;
}
