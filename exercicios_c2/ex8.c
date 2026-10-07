#include <stdio.h>
#include <math.h>

int main() {
    
    int a, b, c, delta, x1=0, x2=0;

    printf("Informe os coeficientes a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == 0) {
        puts("A deve ser diferente de zero");
    } else {
        delta = pow(b, 2) - 4 * a * c;
        printf("Delta = %d\n", delta);
        x1 = (-1*b + sqrt(delta)) / (2 * a);
        x2 = (-1*b - sqrt(delta)) / (2 * a);
    }

    printf("X1 = %d\n", x1);
    printf("X2 = %d\n", x2);

    return 0;
}
