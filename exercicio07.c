// Faça um programa que mostre os números pares no intervalo solicitado pelo
// usuário. Pergunte ao usuário quer realizar o programa novamente (digitando1) 
//ou terminá-lo (digitando 2 ou outra tecla)

#include <stdio.h>

int main () {
    int inicio, fim;
    printf("Digite um intervalo de números para ver os números pares desse intervalo.\n Inicio do intervalo: ");
    scanf("%d", &inicio);
    
    printf("Fim do intervalo: ");
    scanf("%d", &fim);

    for(int i = inicio; i <= fim; i++) {
        if(i%2 == 0) {
            printf("%d, ", i);
        }   
    }

    return 0;
}