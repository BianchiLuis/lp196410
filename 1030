#include <stdio.h>

int josephus(int n, int k) {
    int sobrevivente = 0;
    for (int i = 2; i <= n; i++) {
        sobrevivente = (sobrevivente + k) % i;
    }
    
    return sobrevivente + 1;
}

int main() {
    int nc;
    int n, k;
    if (scanf("%d", &nc) != 1) return 0;
    
    for (int i = 1; i <= nc; i++) {
        if (scanf("%d %d", &n, &k) == 2) {
            int resultado = josephus(n, k);
            printf("Case %d: %d\n", i, resultado);
        }
    }
    return 0;
}
