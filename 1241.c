#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[1005], b[1005]; 
    if (scanf("%d", &n) != 1) return 0;
    while (n--) {
        scanf("%s %s", a, b);
        int lenA = strlen(a);
        int lenB = strlen(b);
        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            if (strcmp(a + (lenA - lenB), b) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }
    return 0;
}
