#include <stdio.h>

void imprimir(int vet[], int tamanho, const char *nome) {
    for (int i = 0; i < tamanho; i++) {
        printf("%s[%d] = %d\n", nome, i, vet[i]);
    }
}

int main() {
    int par[5], impar[5];
    int p = 0, imp = 0, num, i;
    
    for (i = 0; i < 15; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            par[p++] = num;
            if (p == 5) {
                imprimir(par, 5, "par");
                p = 0;
            }
        } else {
            impar[imp++] = num;
            if (imp == 5) {
                imprimir(impar, 5, "impar");
                imp = 0;
            }
        }
    }
    
    imprimir(impar, imp, "impar");
    imprimir(par, p, "par");
    
    return 0;
}
