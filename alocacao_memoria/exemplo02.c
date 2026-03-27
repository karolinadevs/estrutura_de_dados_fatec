#include <stdio.h>
#include <stdlib.h>

int main(){

    int i; // i e um inteiro
    int *pi; // pi e um ponteiro de inteiro
    printf("Valor de i: %d\n", i);
    printf("Valor de pi: %p\n", pi);

    i = 10;
    pi = &i;// pi recebe o endereco de i
    printf("Valor de i: %d\n", i);
    printf("Valor de pi: %p\n", pi);

    *pi = 30; // O conteudo apontado por pi = 30, no caso o i
    printf("Valor de i: %d\n", i);

    return 0;
}