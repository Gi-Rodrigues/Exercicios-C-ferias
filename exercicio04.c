// Faça um programa que solicite 10 valores ao usuário. E retorne quantos
// números são positivos e menores que 10.

#include <stdio.h>
#include <locale.h>

int main () {
  int inputNumber;
  int count;

  setlocale (LC_ALL, "portuguese");

  for(int i = 0; i < 10; i++) {

    char instruction[100];
    sprintf(instruction, "Digite o %d° numero: ", i+1);
    printf("%s", instruction);
    scanf("%d", &inputNumber);

    if(inputNumber > 0 && inputNumber < 10) {
      count++;
    }
  }  

  char result[100];

  sprintf(result, "Você digitou %d números que são positivos e menores do que 10.", count);
  printf("%s", result);

return 0;

}