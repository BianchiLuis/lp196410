#include <stdio.h>
 
int main() {
    int v1, v2, i, soma;
    i=0;
    soma=0;
    scanf("%d%d",&v1, &v2);
    if(v1<v2){
        i=v2;
        v2=v1;
        v1=i;
    }
    for(i=v2;i<v1;i++){
        if(i%2!=0 && i!=v2){
           soma+=i;
        }
    }
    printf("%d\n", soma);
    return 0;
}
