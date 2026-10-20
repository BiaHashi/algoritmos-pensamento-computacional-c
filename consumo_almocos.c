
#include <stdio.h>

#define DIAS 7

int main(void) {
    int almocos[DIAS];
    int total = 0;
    int i;
    float media;

    const char *dias[DIAS] = {
        "Segunda-feira",
        "Terca-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira",
        "Sabado",
        "Domingo"
    };

    // Apresentacao do sistema
    printf("========================================\n");
    printf("    SISTEMA DE CONTROLE DE ALMOCOS\n");
    printf("========================================\n");
    printf("Registro semanal de almocos servidos.\n\n");

    // Leitura dos dados e armazenamento no vetor
    for (i = 0; i < DIAS; i++) {
        int valido = 0;

        while (!valido) {
            int resultado;
            int caractere;

            printf("%s - Quantidade: ", dias[i]);
            resultado = scanf("%d", &almocos[i]);

            // Limpeza dos caracteres restantes
            do {
                caractere = getchar();
            } while (caractere != '\n' && caractere != EOF);

            // Validacao dos dados
            if (resultado == 1 && almocos[i] >= 0) {
                valido = 1;
            } else {
                printf("Entrada invalida! Digite um inteiro nao negativo.\n");
            }

            if (caractere == EOF && !valido) {
                printf("Entrada encerrada.\n");
                return 1;
            }
        }

        total += almocos[i];
    }

    // Calculo da media diaria - desafio bonus
    media = (float) total / DIAS;

    // Relatorio final
    printf("\n========================================\n");
    printf("         RELATORIO SEMANAL\n");
    printf("========================================\n");

    for (i = 0; i < DIAS; i++) {
        printf("%-15s : %d almocos\n",
               dias[i], almocos[i]);
    }

    printf("----------------------------------------\n");
    printf("Total semanal : %d almocos\n", total);
    printf("Media diaria  : %.2f almocos\n", media);
    printf("========================================\n");

    printf("\nObrigado por utilizar o sistema!\n");

    return 0;
}