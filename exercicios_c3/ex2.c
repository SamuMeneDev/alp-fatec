#include <stdio.h>

#define RESET 0

/**
 * Uso linux e não consigo usar o cabeçalho <conio.h> em minha máquina.
 * Criei essa função como substituta.
 */
void textcolor(int color) {
    if(color == RESET) {
        printf("\033[0m");
    } else {
        printf("\033[1;%dm", color+30);
    }
}

/**
 * O bloco de execução do for não está definido com {}
 */
int main() {
    int c;
    for (c=0; c<=15; c++) {
        textcolor(c);
        printf("Cor %d\n", c);
    }
    return 0;
}
