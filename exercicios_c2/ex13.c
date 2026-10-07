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

    if(ultimoNum == 1 || ultimoNum == 2) {
        puts("Segunda-Feira");
    } else if(ultimoNum == 3 || ultimoNum == 4) {
        puts("Terça-Feira");
    } else if(ultimoNum == 5 || ultimoNum == 6) {
        puts("Quarta-Feira");
    } else if(ultimoNum == 7 || ultimoNum == 8) {
        puts("Quinta-Feira");
    } else if(ultimoNum == 9 || ultimoNum == 0) {
        puts("Sexta-Feira");
    }
    return 0;
}
