#include <stdio.h>

int main() {

    int i;
	
    while (i != 1) {
        printf("Escolha um numero de 1 a 10:");
        scanf("%d", &i);

        if (i == 1)
            printf("Parabens, voce acertou!\n");
        else
            printf("Você errou, tente novamente.\n");
    }

    return 0; 
}
