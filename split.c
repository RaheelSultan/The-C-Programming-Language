#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool in_word = false;
    char c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (in_word) {
                putchar('\n');
                in_word = false;
            }
        }
        else {
            in_word = true;
            putchar(c);
        }
    }
    return 0;
}