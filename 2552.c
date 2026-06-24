#include <stdio.h>

int main() {
    int n, m;
    
    while (scanf("%d %d", &n, &m) != EOF) {
        int mat[105][105];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    printf("9");
                } else {
                    int p = 0;
                    if (i > 0 && mat[i-1][j] == 1) p++;
                    if (i < n-1 && mat[i+1][j] == 1) p++;
                    if (j > 0 && mat[i][j-1] == 1) p++;
                    if (j < m-1 && mat[i][j+1] == 1) p++;
                    printf("%d", p);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}
