#include <stdio.h>
#include <ctype.h>
int main() {
    char frase[60]; 
    while (fgets(frase, sizeof(frase), stdin) != NULL) {
        int caps = 1;
        for (int i = 0; frase[i] != '\0'; i++) {
            if ((frase[i] >= 'A' && frase[i] <= 'Z') || (frase[i] >= 'a' && frase[i] <= 'z')) {
                if (caps) {
                    frase[i] = toupper(frase[i]); 
                } else {
                    frase[i] = tolower(frase[i]); 
                }
                caps = !caps; 
            }
        }
        printf("%s", frase);
    }
    return 0;
}
