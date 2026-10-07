#include <stdio.h>

int main() {

    float peso, altura, imc;

    printf("Digite seu peso e sua altura: ");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5f) {
        puts("Magro");
    } else if(imc <= 30) {
        puts("Normal");
    } else {
        puts("Obeso");
    }

    return 0;
}
