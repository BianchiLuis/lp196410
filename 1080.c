#include <stdio.h>

int main() {
    int v[100]; 
    int maior;
    int pos;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &v[i]);
    }
    maior = v[0];
    pos = 1; 
    for (int i = 1; i < 100; i++) {
        if (v[i] > maior) {
            maior = v[i];
            pos = i + 1; 
        }
    }
    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}
