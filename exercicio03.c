// Faça um programa que solicite o número de alunos de uma sala. A seguir
// peça as notas desses alunos e, por fim, retorne ao usuário a MAIOR nota
// entre os alunos

#include <stdio.h>
#include <locale.h>


int main() {
    int quantAlunos, maiorNota = 0, ultimaNotaDigitada;

    printf("Digite a qunatidade de alunos da sala: ");
    scanf("%d", &quantAlunos);

    for(int i = 0; i < quantAlunos; i++) {
        char nota[100];
        sprintf(nota, "Digite a nota do aluno número %d: ", i+1);
        printf("%s", nota);
        scanf("%d", &ultimaNotaDigitada);

        if(ultimaNotaDigitada > maiorNota) {
            maiorNota = ultimaNotaDigitada;
        }
    }

    char resultado[100];
    sprintf(resultado, "A maior nota da sala é: %d", maiorNota);
    printf("%s", resultado);
    
    return 0;
}

