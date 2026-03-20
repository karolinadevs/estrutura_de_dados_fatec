//arquivo de cabeçalho (header file).

#include <stdio.h>
#include <stdlib.h>

//boolean
#define SUCESSO 1 
#define FRACASSO 0

typedef struct pilha {
    int *v; //ponteiro de inteiro
    int topo; //inteiro
    int capacidade; 
} t_pilha; //apelido

void constroi_pilha (int capacidade, t_pilha *p); 
//void empilha (int e, t_pilha *p); //não tem saida
int empilha (int e, t_pilha *p);
int desempilha (t_pilha *p, int *desempilhado); //tem como saida um inteiro
int capacidade (t_pilha *p); //não tem entrada
int tamanho (t_pilha *p);
int pilha_vazia (t_pilha *p); //retorna booleano se a pilha estiver vazia
int pilha_cheia (t_pilha *p); //retorna booleano se a pilha estiver cheia
void mostra_pilha (t_pilha *p); //* = endereço

//toda vez que precisar modificar o valor do parametro, tem que passar pela referencia "*"
