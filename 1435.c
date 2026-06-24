#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) && n != 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int min = i;
                if (j < min) min = j;
                if (n - 1 - i < min) min = n - 1 - i;
                if (n - 1 - j < min) min = n - 1 - j;
                
                if (j == 0) printf("%3d", min + 1);
                else printf(" %3d", min + 1);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
