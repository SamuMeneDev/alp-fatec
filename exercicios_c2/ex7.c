#include <stdio.h>

#define RESET 0
#define RED 31
#define YELLOW 33
#define GREEN 32

/**
 * Uso linux e não consigo usar o cabeçalho <conio.h> em minha máquina.
 * Criei essa função como substituta.
 */
void textcolor(int color) {
    if(color == RESET) {
        printf("\033[0m");
    } else {
        printf("\033[1;%dm", color);
    }
}

int main() {
    int faltas;
    float media;

    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%d", &faltas);

    printf("Digite a média do aluno: ");
    scanf("%f", &media);

    if(faltas <= 5) {
        if(media >= 6) {
            textcolor(GREEN);
            puts("Aluno Aprovado");
        } else if(media >= 4) {
            textcolor(YELLOW);
            puts("Aluno de Recuperação");
        } else {
            textcolor(RED);
            puts("Aluno Reprovado");
        }
    } else {
        textcolor(RED);
        puts("Aluno Reprovado");
    }

    return 0;
}
