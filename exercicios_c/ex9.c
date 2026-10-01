#include <stdio.h>

int main() {
    float f, c;
    
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &f);
    
    c = (f-32) * (5.0/9);
    
    printf("A temperatura em Celsius é igual a %.2fC", c);
    
    return 0;    
}