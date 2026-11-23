#include <stdio.h>
#include <stdbool.h>

#define TABSPACE 8 /*spacing between tab breaks*/

int main(void) {
    int current_pos = 0; /*the column of the last read character*/
    int last_pos = 0; /*the column of the last printed character*/
    bool in_blank = false;
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar(c);
            current_pos = 0;
            last_pos = 0;
            in_blank = false;
        }
        else if (c == ' ') {
            in_blank = true;
            current_pos++;
        }
        else if (c == '\t') {
            in_blank = true;
            current_pos++;
            while (current_pos % TABSPACE != 0) current_pos++;
        }
        else {
            if (in_blank) {
                while (last_pos/TABSPACE < current_pos/TABSPACE) {
                    putchar('\t');
                    last_pos++;
                    while (last_pos % TABSPACE != 0) last_pos++;
                }
                while (last_pos < current_pos) {
                    putchar(' ');
                    last_pos++;
                }
            }
            putchar(c);
            last_pos++;
            current_pos++;
            in_blank = false;
        }
    }
    return 0;
}