#include <stdio.h>

int main() {
    int dia, mes, ano;
    int passo1, passo2, passo3;

    printf("Digite sua data de nascimento (somente números, ex: 13 06 1970): ");
    
    if (scanf("%d %d %d", &dia, &mes, &ano) != 3) {
        printf("Entrada inválida.\n");
        return 1;
    }

    // Se o mês for menor que 10 (ex: 6), multiplica o dia por 100 e soma o mês (1300 + 6 = 1306)
    int diaMesJuntos = (mes < 10) ? (dia * 100) + mes : (dia * 100) + mes; 
    
    if (mes < 10) {
        passo1 = (dia * 100) + mes + ano;   // Ex: 1306 + 1970 = 3276
    } else {
        passo1 = (dia * 100) + mes + ano;   // Ex: 1312 + 1970
    }

    // Separar os dois primeiros dígitos dos dois últimos de passo1
    passo2 = (passo1 / 100) + (passo1 % 100); // 32 + 76 = 108

    passo3 = passo2 % 5;

    switch (passo3) {
        case 0: puts("Tímido"); break;
        case 1: puts("Sonhador"); break;
        case 2: puts("Paquerador"); break;
        case 3: puts("Atraente"); break;
        case 4: puts("Irresistível"); break;
        default: break;
    }

    return 0;
}
