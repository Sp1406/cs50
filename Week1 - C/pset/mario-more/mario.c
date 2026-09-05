#include <cs50.h>
#include <stdio.h>

#define SPACES 2 // Number of spaces between the two halves of the pyramid

#define MAX_HEIGHT 8 // Maximum height of the pyramid

void print_pyramid(int height);
void print_character_n_times(int times, char character);

int main(void)
{
    int height;

    // Prompt user for pyramid's height
    do
    {
        height =
            get_int("What should the height of the pyramid be? It can only be between 1 and %i: ",
                    MAX_HEIGHT);
    }
    while (height < 1 || height > MAX_HEIGHT); // Prompts the user until they enter a valid height

    print_pyramid(height);
}

void print_pyramid(int height)
{
    // row is the current row number, starting from 0
    for (int row = 0; row < height; row++)
    {
        // Printing spaces to make the pyramid right-aligned
        print_character_n_times((height - row - 1), ' ');

        // Printing the "bricks"
        print_character_n_times(row + 1, '#');

        // Printing the space in the middle of the pyramid
        print_character_n_times(SPACES, ' ');

        // Printing the bricks of the left-aligned pyramid
        print_character_n_times(row + 1, '#');

        printf("\n");
    }
}

void print_character_n_times(int times, char character)
{
    // col is the current column number, starting from 0
    for (int col = 0; col < times; col++)
    {
        printf("%c", character);
    }
}
