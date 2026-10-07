#include <stdio.h>
#include <math.h>

int main() {
    int x1, x2, y1, y2;
    double distancia;
    
    
    printf("Digite o par ordenado 1 (P): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Digite o par ordenado 2 (Q): ");
    scanf("%d %d", &x2, &y2);
    
    distancia = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    
    
    printf("A dintancia do ponto P para o ponto Q é de %f", distancia);
    
    return 0;    
}