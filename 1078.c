#include <stdio.h>

int main()
{
    int N, resultado;
    scanf("%d", &N);
    for(int i = 1; i<11; i++){
        resultado = N*i;
        printf("%d x %d = %d\n", i, N, resultado);
    }
    

    return 0;
}
