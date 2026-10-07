#include <stdio.h>
int main() {
    printf("0 && 0 == %d\n", 0 && 0); // Falso E (&&) Falso == Falso
    printf("0 && 1 == %d\n", 0 && 1); // Falso E (&&) Verdadeiro == Falso
    printf("1 && 0 == %d\n", 1 && 0); // Verdadeiro E (&&) Falso == Falso
    printf("1 && 1 == %d\n", 1 && 1); // Verdadeiro E (&&) Verdadeiro == Verdadeiro
    return 0;
}