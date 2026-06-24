#include <stdio.h>

int main() {
    int h;
    
    while (scanf("%d", &h) && h != 0) {
        int max = h;
        while (h != 1) {
            if (h % 2 == 0) {
                h = h / 2;
            } else {
                h = 3 * h + 1;
            }
            if (h > max) max = h;
        }
        printf("%d\n", max);
    }
    
    return 0;
}
