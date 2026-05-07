#include <stdio.h>
#include <string.h>

void resolver() {
    int N;
    char linha[1100];
    if (scanf("%d", &N) != 1) return;
    getchar();
    while (N--) {
        if (fgets(linha, sizeof(linha), stdin) == NULL) break;
        linha[strcspn(linha, "\n")] = '\0';
        int tam = strlen(linha);
        for (int i = 0; i < tam; i++) {
            if ((linha[i] >= 'a' && linha[i] <= 'z') || (linha[i] >= 'A' && linha[i] <= 'Z')) {
                linha[i] = linha[i] + 3;
            }
        }
        for (int i = 0; i < tam / 2; i++) {
            char temp = linha[i];
            linha[i] = linha[tam - 1 - i];
            linha[tam - 1 - i] = temp;
        }
        int inicio_metade = tam / 2;
        for (int i = inicio_metade; i < tam; i++) {
            linha[i] = linha[i] - 1;
        }
        printf("%s\n", linha);
    }
}

int main() {
    resolver();
    return 0;
}
