#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    char cor[20];
    char tam;
} Camiseta;

int comparar(const void *a, const void *b) {
    Camiseta *c1 = (Camiseta *)a;
    Camiseta *c2 = (Camiseta *)b;
    
    int corCmp = strcmp(c1->cor, c2->cor);
    if (corCmp != 0) return corCmp;
    
    if (c1->tam != c2->tam) {
        if (c1->tam == 'P') return -1;
        if (c2->tam == 'P') return 1;
        if (c1->tam == 'M') return -1;
        return 1;
    }
    
    return strcmp(c1->nome, c2->nome);
}

int main() {
    int n, primeiro = 1;
    
    while (scanf("%d", &n) && n != 0) {
        if (!primeiro) printf("\n");
        primeiro = 0;
        
        Camiseta array[n];
        for (int i = 0; i < n; i++) {
            scanf(" %[^\n]", array[i].nome);
            scanf("%s %c", array[i].cor, &array[i].tam);
        }
        
        qsort(array, n, sizeof(Camiseta), comparar);
        
        for (int i = 0; i < n; i++) {
            printf("%s %c %s\n", array[i].cor, array[i].tam, array[i].nome);
        }
    }
    
    return 0;
}
