#include <stdio.h>
#include <stdlib.h>

int main() {
    char placa[8];
    int ultimoNum;

    printf("Digite a placa do veículo: ");
    if(scanf("%7s", placa) != 1) {
        printf("Erro na leitura da placa\n");
        return 1;
    }
    
    ultimoNum = placa[6] - '0';

    switch (ultimoNum) {
    case 1:
    case 2:
        puts("Segunda-Feira");
        break;
    case 3:
    case 4:
        puts("Terça-Feira");
        break;
    case 5:
    case 6:
        puts("Quarta-Feira");
        break;
    case 7:
    case 8:
        puts("Quinta-Feira");
        break;
    case 9:
    case 0:
        puts("Sexta-Feira");
        break;
    default:
        break;
    }

    return 0;
}
