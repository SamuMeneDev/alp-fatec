#include <stdio.h>

int main() {
    float totalLitros, distancia, consumo;
    
    printf("Digite a distancia em km: ");
    scanf("%f", &distancia);
    
    printf("Digite o total de litros: L");
    scanf("%f", &totalLitros);
    
    consumo = distancia / totalLitros;
    printf("O consumo do veiculo é igual a: %.2fL/km", consumo);
    
    return 0;    
}