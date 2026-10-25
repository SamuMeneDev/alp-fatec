#include <stdio.h>

int main() {

    int n, i;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Contagem Regressiva...\n");

    for(i=n; i>=0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
