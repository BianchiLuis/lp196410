#include <stdio.h>

int main() {
    int n, valor, menor, pos = 0;
    
    scanf("%d", &n);
    scanf("%d", &menor);
    
    for (int i = 1; i < n; i++) {
        scanf("%d", &valor);
        if (valor < menor) {
            menor = valor;
            pos = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    
    return 0;
}
