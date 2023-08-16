// Faça um programa que recebe quatro números e o programa retorna o 
// maior deles ou o menor deles. O usuário escolhe qual mostrar. 

#include <stdio.h>
#include <locale.h>
int main () 
{
   int n1, n2, n3, n4;
   int opcao;
   setlocale(LC_ALL, "portuguese");

   printf("digite o 1 numeroa: ");
   scanf("%d", &n1);

   printf("digite o 2 numero: ");
   scanf("%d", &n2);

   printf("digite o 3 numero: ");
   scanf("%d", &n3);

   printf("digite o 4 numero: ");
   scanf("%d", &n4);

   printf("Digite 1 para imprimir o maior valor e 2 para o menor: ");
   scanf("%d", &opcao);

     if (opcao == 1) {
        int maior = n1;

        if (n2 > maior)
            maior = n2;
        if (n3 > maior)
            maior = n3;
        if (n4 > maior)
            maior = n4;

        printf("O maior valor é: %d\n", maior);
    } else if (opcao == 2) {
        int menor = n1;

        if (n2 < menor)
            menor = n2;
        if (n3 < menor)
            menor = n3;
        if (n4 < menor)
            menor = n4;

        printf("O menor valor é: %d\n", menor);
    } else {
        printf("Opção inválida!\n");
    }
   
   return 0;


}  

    
