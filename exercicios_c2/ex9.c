#include <stdio.h>

int main() {

    float salario, imposto;

    printf("Digite o salario do funcionário: ");
    scanf("%f", &salario);

    if(salario <= 1903.98f) {
        imposto = 0;
    } else if(salario <= 2826.65f) {
        imposto = salario * 0.075f;
    } else if(salario <= 3751.05f) {
        imposto = salario * 0.15f;
    } else if(salario <= 4664.68f) {
        imposto = salario * 0.225f;
    } else {
        imposto = salario * 0.275f;
    }

    printf("Valor do imposto de renda a pagar: R$%.2f\n", imposto);

    return 0;
}
