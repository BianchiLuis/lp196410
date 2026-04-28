#include <stdio.h>
#include <string.h>
int main() {
    int n; 
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        char decod[60];
        int cod;
        scanf("%s", decod);
        scanf("%d", &cod);
        for (int j = 0; decod[j] != '\0'; j++) {
            decod[j] = decod[j] - cod;
            if (decod[j] < 'A') {
                decod[j] = decod[j] + 26;
            }
        }
        printf("%s\n", decod);
    }
    return 0;
}
