#include <stdio.h>

int celsius_to_fahr(float lower, float upper, float step) {
    float celsius = lower;
    float fahr;
    printf("C  |F\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f %5.1f \n", celsius, fahr);
        celsius += step;
    }
    return 0;
}

int fahr_to_celsius(float lower, float upper, float step) {
    float fahr = lower;
    float celsius;
    printf("F  |C\n");
    while (fahr <= upper) {
        celsius = (fahr - 32.0) * (5.0/9.0);
        printf("%3.0f %5.1f \n", fahr, celsius);
        fahr += step;
    }
    return 0;
}

int celsius_to_fahr_v2(float lower, float upper, float step) {
    float celsius;
    printf("C  |F\n");
    for (celsius = upper; celsius >= lower; celsius -= step) {
        printf("%3.f %5.1f\n", celsius, celsius * (9.0/5.0) + 32.0);
    }
    return 0;
}

int main(void) {
    float lower = 0;
    float upper = 200;
    float step = 16;
    /*celsius_to_fahr(lower, upper, step);
    printf("\n");
    fahr_to_celsius(lower, upper, step);
    printf("\n");*/
    celsius_to_fahr_v2(lower, upper, step);
    return 0;
}
