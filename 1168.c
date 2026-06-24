#include <stdio.h>

int main() {
    int n, i, leds;
    char valor[105];
    int mapa[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    
    scanf("%d", &n);
    
    while (n--) {
        scanf("%s", valor);
        leds = 0;
        for (i = 0; valor[i] != '\0'; i++) {
            leds += mapa[valor[i] - '0'];
        }
        printf("%d leds\n", leds);
    }
    
    return 0;
}
