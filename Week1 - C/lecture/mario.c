#include <stdio.h>

int main(void) {
    const int n = 3;

    for(int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            printf("#");
        }
        printf("\n");
    }
}
