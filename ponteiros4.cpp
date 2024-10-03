#include <stdio.h>

#define PI 3.14159

void calcular(float raio, float *area, float *volume) {

    *area = 4 * PI * raio * raio;
    *volume = (4.0/3.0) * PI * raio * raio * raio;

}

int main() {

    float raio, area, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    calcular(raio, &area, &volume);

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;

}
