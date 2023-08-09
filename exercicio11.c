// Faça um programa em que o usuário entra com um número e o
// programa retorna se ele é par ou ímpar e se é positivo ou negativo e se é
// primo.

#include<stdio.h>

int main () {
    int n;  

    printf("Digite um numero para saber se ele é impar, par, negativo, positivo e primo: ");
    scanf("%d", &n);

    printf("O número digitado é:\n");

    if(n > 0) {
        printf("O número é positivo, ");
    } else {
        printf ("O numero é negativo, ");
    }



    if (n%2 == 0) {
        printf("é par ");
    } else {
        printf("é impar ");
    }

    if(n == 2 || n%2 != 0) {
        printf("e é primo.");
    } else {
        printf("e não é primo.");
    }

}