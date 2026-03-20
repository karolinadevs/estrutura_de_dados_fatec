#include "pilha.h"

int main () {
    t_pilha p1;
    int capacidade;
    printf ("digite a capacidade da pilha 1: ");
    scanf ("%d", &capacidade); //& - referencia
    constroi_pilha (capacidade, &p1);

    printf("pilha foi construida\n");
    mostra_pilha (&p1);

    empilha(10, &p1);
    empilha(20, &p2);
    empilha(30, &p1);
    printf("pilha depois dos empilhamentos:\n");
    mostra_pilha(&p1);

    int saiu;
    desempilha(&p1, &saiu);

    printf("%d foi desempilhado\n", saiu);

    mostra_pilha (&p1);
    return 0;
}

//gcc -c -> compila biliotecas


