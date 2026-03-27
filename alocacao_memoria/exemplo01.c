#include <stdio.h>

int main(){
    int i, v[5];
    printf("Tamanho do Inteiro i: %d\n", sizeof(i));
    printf("Tamanho do Inteiro v: %d\n", sizeof(v));
    printf("Endereco Inicial de i: %p\n",&i);
    printf("Endereco Inicial de v: %p\n",&v);
    for (i = 0; i < 5; i++)
    {
        v[i]= i*10;
    }
    printf("Valor do i Quando Saiu do Laco: %d\n",i);
    for (i = 0; i < 5; i++)
    {
        printf("Posicao: %p, Valor: %d\n", &v[i], v[i]);
    }
    
    return 0;
}