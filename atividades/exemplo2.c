#include <stdio.h>
#include <stdlib.h>

int main() {
    int i; // i é um inteiro
    int *pi; // pi é um PONTEIRO de inteiro
    printf("valor de i: %d\n", i);
    printf("valor de pi: %p\n", pi);

    i = 10;
    pi = &i; // o pi recebe o endereço de i

    printf("valor de i: %d\n", i);
    printf("valor de pi: %p\n", pi);

    *pi = 30;// o conteúdo apontado por pi = 30, no caso o i
    printf ("valor de i: %d\n", i);



    return 0;

}