#include <stdio.h>

int main() {

    int a, b;
    printf("Digite o numero A e o B: ");
    scanf("%d %d", &a, &b);

    if(a > b) {
        printf("%d é maior que %d\n", a, b);
    } else if(a == b) {
        puts("Os dois números são iguais");
    } else {
        printf("%d é maior que %d\n", b, a);
    }
    return 0;
}
