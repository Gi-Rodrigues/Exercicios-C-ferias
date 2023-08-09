// Crie um programa que recebe dois lados de um triângulo retângulo e
// retorna o valor do terceiro lado.

#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2; 
    
    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);
    
    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);
    
    float terceiroLado = sqrt(lado1 * lado1 + lado2 * lado2);
    
    printf("O valor do terceiro lado é: %.2f\n", terceiroLado);
    
    return 0;
}