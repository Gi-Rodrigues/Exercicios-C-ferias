#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
    int lado1, lado2, lado3;

    printf("Informe o valor do lado 1: ");
    scanf("%d", &lado1);

    printf("Informe o valor do lado 2: ");
    scanf("%d", &lado2);

    printf("Informe o valor do lado 3: ");
    scanf("%d", &lado3);

    int sum = lado1 + lado2 + lado3;
    int max_lado = lado1;

    if (lado2 > max_lado) {
        max_lado = lado2;
    }

    if (lado3 > max_lado) {
        max_lado = lado3;
    }

    if (sum - max_lado > max_lado) {
        printf("Os lados informados formam um triângulo.\n");
    } else {
        printf("Os lados informados não formam um triângulo.\n");
    }

    return 0;
}
