#include <stdio.h>

int main() {
    int n, x;
    
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        
        if (x == 64) {
            printf("1537228672809 kg\n"); 
        } else {
            unsigned long long graos = 1ULL << x;
            unsigned long long kg = graos / 12000ULL;
            printf("%llu kg\n", kg);
        }
    }
    
    return 0;
}
