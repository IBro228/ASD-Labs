#include <stdio.h>

float first(float x) {
    return 10 * x * x * x + 7 * x / 5 + 2;
}

float second(float x) {
    return -x + 9;
}

int main() {
    float x;
    for (int i = 0; i < 11; i++) {
        printf("Input any number:");
        scanf_s("%f", &x);
        printf("result:");
        if ((x >= -49 && x < -10) || (x > 0 && x <= 10))
            printf("%f", first(x));
        else if (x > 20)
            printf("%f", second(x));
        else
            printf("X does not belong to the given interval");
        printf("\n");
    }
    return 0;
}