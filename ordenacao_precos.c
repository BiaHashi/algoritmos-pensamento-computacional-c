
#include <stdio.h>

#define TAM 10

int main(void) {
    float precos[TAM] = {
        12.50, 4.20, 19.90, 8.75, 35.00,
        6.30, 24.90, 15.60, 3.99, 42.50
    };

    int i, j;
    float temp;

    // Exibir os valores originais
    printf("====================================\n");
    printf("  PRECOS ORIGINAIS DO SUPERMERCADO\n");
    printf("====================================\n");

    for (i = 0; i < TAM; i++) {
        printf("Produto %02d: R$ %.2f\n", i + 1, precos[i]);
    }

    // Bubble Sort - ordem crescente
    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - 1 - i; j++) {
            if (precos[j] > precos[j + 1]) {
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    printf("\n====================================\n");
    printf("       ORDEM CRESCENTE\n");
    printf("====================================\n");

    for (i = 0; i < TAM; i++) {
        printf("R$ %.2f\n", precos[i]);
    }

    // Bubble Sort - ordem decrescente
    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - 1 - i; j++) {
            if (precos[j] < precos[j + 1]) {
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    printf("\n====================================\n");
    printf("       ORDEM DECRESCENTE\n");
    printf("====================================\n");

    for (i = 0; i < TAM; i++) {
        printf("R$ %.2f\n", precos[i]);
    }

    printf("\nOrdenacao concluida com sucesso!\n");

    return 0;
}
