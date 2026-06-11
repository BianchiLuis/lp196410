#include <stdio.h>

int josephus(int n, int m) {
    int sobrevivente = 0;
    for (int i = 2; i <= n; i++) {
        sobrevivente = (sobrevivente + m) % i;
    }
    return sobrevivente;
}

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        int m = 1;

        while (josephus(n - 1, m) != 11) {
            m++;
        }

        printf("%d\n", m);
    }

    return 0;
}
