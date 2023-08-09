// Faça um programa que, após um número inserido pelo usuário, retorne os
// resultados da multiplicação desse número os valores pares e inteiros entre -5
// e 101.

#include <stdio.h>

int main() {
    int numero;
    
    printf("Insira um número: ");
    scanf("%d", &numero);
    
    if (numero >= -5 && numero <= 101) {
        printf("Resultados da multiplicação do número %d com os valores pares e inteiros entre -5 e 101:\n", numero);
        
        for (int i = -5; i <= 101; i++) {
            if (i % 2 == 0) {
                printf("%d * %d = %d\n", numero, i, numero * i);
            }
        }
    } else {
        printf("O número inserido está fora do intervalo válido.\n");
    }
    
    return 0;
}