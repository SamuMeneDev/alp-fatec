#include <stdio.h>


int main() {
    int n, indice=1, quadrado = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        if(indice % 2 == 0) {
            indice++;
        }
        quadrado += indice++;
       
    }
    printf("Quadrado de %d = %d\n", n, quadrado);
    
    return 0;
}
