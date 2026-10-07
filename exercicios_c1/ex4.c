#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("O numero %d em base octal é igual a %a \n", num, num);
    
    return 0;    
}