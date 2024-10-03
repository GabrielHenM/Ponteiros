#include <stdio.h>

void separar(float numero, int *parteInteira, float *parteFracionaria) {

    *parteInteira = (int)numero;
    *parteFracionaria = numero - *parteInteira;

}

int main() {

    float numero, parteFrac;
    int parteInt;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    separar(numero, &parteInt, &parteFrac);

    printf("Parte inteira: %d\n", parteInt);
    printf("Parte fracionaria: %.2f\n", parteFrac);


    return 0;
}
