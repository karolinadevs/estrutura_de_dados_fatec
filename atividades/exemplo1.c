#include <stdio.h>

int main() {
    int i, v[5];
    printf("tamanho de i = %d\n", sizeof(i));
    printf("tamanho de v = %d\n", sizeof(v));
    printf ("endereco inicial de i: %p\n", &i);
    printf ("endereco inicial de v; %p\n", &v);
    for (i=0;i<5;i++) {
        v[i] = i * 10;
    }
    printf ("valor de i quando saiu do laco: %d\n", i);
    for (i=0;i<5;i++) {
        printf("posicao:%p , valor:%d\n", &v[i], v[i]);
    }
    
    return 0;
}