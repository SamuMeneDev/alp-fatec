#include <stdio.h>

int main() {
    
    float x, y;
    char o;

    printf("Expressão? ");
    scanf("%f %c %f", &x, &o, &y);

    switch (o)
    {
    case '+':
        printf("Valor = %.2f\n", x+y);
        break;
    case '-':
        printf("Valor = %.2f\n", x-y);
        break;
    case '*':
        printf("Valor = %.2f\n", x*y);
        break;
    case '/':
        if(y!=0) {
            printf("Valor = %.2f\n", x/y);
        } else {
            printf("Não é possivel dividir por zero!\n");
        }
        break;
    default:
        printf("Operador inválido: %c\n", o);
        break;
    }

    return 0;
}
