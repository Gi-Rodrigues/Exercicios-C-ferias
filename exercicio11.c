// Faça um programa em que o usuário entra com um número e o
// programa retorna se ele é par ou ímpar e se é positivo ou negativo e se é
// primo.

#include<stdio.h>
#include<locale.h>

int main () {
    int n;
	setlocale(LC_ALL, "portuguese");
	  
    printf("Digite um numero para saber se ele é impar, par, negativo, positivo e primo: ");
    scanf("%d", &n);

    printf("O número digitado é:\n");

    if(n > 0) {
        printf("%d é positivo, ", n);
    } else {
        printf ("%d, é negativo, ", n);
    }



    if (n%2 == 0) {
        printf("%d, é par ", n);
    } else {
        printf("%d, impar ", n);
    }

    if(n == 2 || n%2 != 0) {
        printf("%d, é primo.", n);
    } else {
        printf("%d, não é primo.", n);
    }

}
