#include <cs50.h>
#include <stdio.h>

int get_n(void);
void meow(int n);

int main(void) {
    int n = get_n();
    meow(n);
}

int get_n(void) {
    // Prompt user for number of meows
    int n;
    do {
        n = get_int("Number of meows? ");
    } while (n < 0);
    return n;
}

void meow (int n) {
    // Print "meow" n times
    for (int i = 0; i < n; i++) {
        printf("meow\n");
    }
}
