#include <stdio.h>

int main() {

    int n, resultado=1;

    printf("Digite um número: ");
    scanf("%d", &n);

    if(resultado != 0) {
        for (int i = n; i > 1; i--) {
            resultado += i;
        }
    }
    
    printf("Termial de %d (%d?) = %d\n", n, n, resultado);

    return 0;
}
