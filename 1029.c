#include <stdio.h>

int chamadas;

int fib(int n) {
    chamadas++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int t, n;
    
    scanf("%d", &t);
    while (t--) {
        chamadas = 0;
        scanf("%d", &n);
        int resultado = fib(n);
        printf("fib(%d) = %d calls = %d\n", n, chamadas - 1, resultado);
    }
    
    return 0;
}
