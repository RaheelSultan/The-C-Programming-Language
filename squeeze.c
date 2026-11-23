#include <stdio.h>
#include <stdbool.h>

void squeeze(char s1[], char s2[]) {
    int i,j,k;
    bool matching_char = false;

    for (i = j = 0; s1[i] != '\0'; i++) {
        matching_char = false;
        for (k = 0; s2[k] != '\0' && !matching_char; k++)
            if (s1[i]==s2[k])
                matching_char = true;
        
        if (!matching_char)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}

int main(void) {
    char string1[] = "long text with many vowels";
    char string2[] = "aeiou";
    squeeze(string1, string2);
    printf(string1);
    return 0;
}