#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;

    printf("Qual o peso e a altura? ");
    scanf("%f %f", &peso, &altura);

    imc = peso/ pow(altura, 2);

    printf("IMC = %.1f\n", imc);
    
    if(imc<=30) printf("Não está obeso!\n");
    else printf("Está obeso!\n");
    
    return 0;
}