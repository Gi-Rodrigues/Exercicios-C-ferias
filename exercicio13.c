// Faça um programa que faça 5 perguntas para uma pessoa sobre um
// crime. As perguntas são: "Telefonou para a vítima?" "Esteve no local do
// crime?" "Mora perto da vítima?" "Devia para a vítima?" "Já trabalhou com a
// vítima?" O programa deve no final emitir uma classificação sobre a
// participação da pessoa no crime. Se a pessoa responder positivamente a 2
// questões ela deve ser classificada como "Suspeita", entre 3 e 4 como
// "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como
// "Inocente".

#include <locale.h>
#include <stdio.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
    int respostasPositivas = 0;
    
    printf("Responda as seguintes perguntas com '1' para sim e '0' para não:\n");
    
    int resposta;
    
    printf("Telefonou para a vítima? ");
    scanf("%d", &resposta);
    respostasPositivas += resposta;
    
    printf("Esteve no local do crime? ");
    scanf("%d", &resposta);
    respostasPositivas += resposta;
    
    printf("Mora perto da vítima? ");
    scanf("%d", &resposta);
    respostasPositivas += resposta;
    
    printf("Devia para a vítima? ");
    scanf("%d", &resposta);
    respostasPositivas += resposta;
    
    printf("Já trabalhou com a vítima? ");
    scanf("%d", &resposta);
    respostasPositivas += resposta;
    
    switch (respostasPositivas) {
        case 1:
            printf("Suspeita\n");
            break;
        case 2:
            printf("Cúmplice\n");
            break;
        case 3:
            printf("Assassino\n");
            break;
        default:
            printf("Inocente\n");
    }
    
    return 0;
}
