#include <stdio.h>

int main() {
    int sides[3];

    for (int i = 0; i < 3; i++) {
        printf("Informe o valor do lado %d: ", i + 1);
        scanf("%d", &sides[i]);
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += sides[i];
    }

    if (sum - sides[0] > sides[0] && sum - sides[1] > sides[1] && sum - sides[2] > sides[2]) {
        printf("Os lados informados formam um triângulo.\n");
    } else {
        printf("Os lados informados não formam um triângulo.\n");
    }

    return 0;
}