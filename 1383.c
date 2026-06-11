#include <stdio.h>
#include <stdbool.h>

#define TAMANHO 9

bool validar_sudoku(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        bool visto[10] = {false};
        for (int j = 0; j < TAMANHO; j++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || visto[num]) return false;
            visto[num] = true;
        }
    }

    for (int j = 0; j < TAMANHO; j++) {
        bool visto[10] = {false};
        for (int i = 0; i < TAMANHO; i++) {
            int num = matriz[i][j];
            if (num < 1 || num > 9 || visto[num]) return false;
            visto[num] = true;
        }
    }

    for (int linha_bloco = 0; linha_bloco < TAMANHO; linha_bloco += 3) {
        for (int col_bloco = 0; col_bloco < TAMANHO; col_bloco += 3) {
            bool visto[10] = {false};
            
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int num = matriz[linha_bloco + i][col_bloco + j];
                    if (num < 1 || num > 9 || visto[num]) return false;
                    visto[num] = true;
                }
            }
        }
    }

    return true;
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) return 0;

    for (int k = 1; k <= n; k++) {
        int matriz[TAMANHO][TAMANHO];

        for (int i = 0; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Instancia %d\n", k);
        if (validar_sudoku(matriz)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        
        printf("\n");
    }

    return 0;
}
