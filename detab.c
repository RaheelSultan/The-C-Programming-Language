#include <stdio.h>

#define TABSPACE 8 /*spacing between tab breaks*/

int main(void) {
    int current_pos = 0;
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar(c);
            current_pos = 0;
        }
        else if (c == '\t') {
            while (current_pos < TABSPACE) {
                putchar(' ');
                current_pos++;
            }
        }
        else {
            putchar(c);
            current_pos++;
        }
        if (current_pos == TABSPACE)
            current_pos = 0;
    }
    return 0;
}