#include <stdio.h>

int main() {

    int n, x, resultado = 1;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Digite o valor do expoente: ");
    scanf("%d", &n);

    if(n != 0){
        for (int i = 1; i <= n; i++) {
            resultado *= x;
        }
    }
    
    printf("Resultado (%d^%d) = %d\n", x, n, resultado);

    return 0;
}
