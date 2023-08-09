#include <stdio.h>
#include <math.h>

int main() {
    int escolha;
    float base, altura, cateto1, cateto2, hipotenusa;
    float resultado;

    printf("Escolha uma opção:\n");
    printf("1 - Calcular área de um triângulo\n");
    printf("2 - Calcular hipotenusa de um triângulo\n");
    printf("3 - Calcular cateto de um triângulo\n");
    printf("4 - Calcular perímetro de um triângulo\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a base do triângulo: ");
        scanf("%f", &base);
        printf("Digite a altura do triângulo: ");
        scanf("%f", &altura);
        resultado = 0.5 * base * altura;
        printf("A área do triângulo é: %.2f\n", resultado);
    } else if (escolha == 2) {
        printf("Digite o cateto 1 do triângulo: ");
        scanf("%f", &cateto1);
        printf("Digite o cateto 2 do triângulo: ");
        scanf("%f", &cateto2);
        resultado = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
        printf("A hipotenusa do triângulo é: %.2f\n", resultado);
    } else if (escolha == 3) {
        printf("Digite a hipotenusa do triângulo: ");
        scanf("%f", &hipotenusa);
        printf("Digite o cateto conhecido do triângulo: ");
        scanf("%f", &cateto1);
        resultado = sqrt(hipotenusa * hipotenusa - cateto1 * cateto1);
        printf("O outro cateto do triângulo é: %.2f\n", resultado);
    } else if (escolha == 4) {
        printf("Digite o lado 1 do triângulo: ");
        scanf("%f", &cateto1);
        printf("Digite o lado 2 do triângulo: ");
        scanf("%f", &cateto2);
        printf("Digite o lado 3 do triângulo: ");
        scanf("%f", &hipotenusa);
        resultado = cateto1 + cateto2 + hipotenusa;
        printf("O perímetro do triângulo é: %.2f\n", resultado);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}