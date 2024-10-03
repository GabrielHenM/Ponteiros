#include <stdio.h>

void encontrarMinMax(int vetor[], int tamanho, int *min, int *max) {

    *min = vetor[0];
    *max = vetor[0];

    for(int i = 1; i < tamanho; i++) {

        if(vetor[i] < *min) {
            *min = vetor[i];
        }

        if(vetor[i] > *max) {
            *max = vetor[i];
        }
    }
}

int main() {

    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do vetor:\n");

    for(int i = 0; i < tamanho; i++) {

        scanf("%d", &vetor[i]);
    }

    int min, max;
    encontrarMinMax(vetor, tamanho, &min, &max);

    printf("Menor valor: %d\n", min);
    printf("Maior valor: %d\n", max);

    return 0;
}

