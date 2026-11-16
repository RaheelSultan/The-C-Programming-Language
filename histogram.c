#include <stdio.h>
#include <stdbool.h>
#define MAXLENGTH 50

int main(void) {
    int lengths[MAXLENGTH] = {};
    bool in_word = false;
    int current_length = 0;
    char c;

    int char_counts[128] = {};

    while ((c=getchar()) != EOF) {
        char_counts[c]++;
        if (c == ' ' || c == '\n' || c == '\t') {
            if (in_word) {
                lengths[current_length] += 1;
                current_length = 0;
                in_word = false;
            }
        }
        else {
            in_word = true;
            current_length++;
        }
    }

    printf("\n---WORD LENGTHS---\n");
    for (int i=1; i<MAXLENGTH; i++) {
        printf("%3d|", i);
        for (int j=0; j<lengths[i]; j++) {
            printf("\u2588");
        }
        printf("\n");
    }

    printf("---CHARACTER FREQUENCIES---\n");
    for (int i=1; i<128; i++) {
        printf("%c|", i);
        for (int j=0; j<char_counts[i]; j++) {
            printf("\u2588");
        }
        printf("\n");
    }
}