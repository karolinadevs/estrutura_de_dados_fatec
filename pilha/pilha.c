#include "pilha.h"

void constroi_pilha (int capacidade, t_pilha *p) {
    p -> topo = 0;
    p -> v = (int *) malloc (sizeof(int) * capacidade);
    p -> capacidade = capacidade; //em java = this.capacidade
}
// -> operador seta

int capacidade (t_pilha *p) {
    return p -> topo; 
}

int pilha_vazia (t_pilha *p) {
    //primeira forma - didatico
    //if (p -> topo == 0) return 1;
    //else return 0;

    //segunda forma - nao precisa de else
    //if (p -> topo == 0) return 1;
    //return 0;

    //terceira forma
    //return (!(p->topo == 0));

    //quarta forma
    return (!p->topo); 

    //quinta forma
    //return p->topo == 0 ? 1 : 0; //if else compactado 
    
    //sexta forma
    //return p->topo ? 0 : 1;
    //se p.topo for maior que 0, p.topo nao esta vazio
    //se p.todo for igual a 0, p.todo esta vazio
}

int pilha_cheia (t_pilha *p) {
    return p-> capacidade == p-> topo; 
}

//FRACASSO = 0
//SUCESSO = 1
int empilha (int e, t_pilha *p) {
    if(pilha_cheia(p)) return FRACASSO;
    p -> v [p->topo++] = e; //pos incremento - faz atribuicao primeiro e soma depois
    //p -> topo ++;
    return SUCESSO; 
}

int desempilha (t_pilha *p, int *desempilhado) {
    if(pilha_vazia(p)) return FRACASSO;
    //p -> topo --;
    *desempilhado = p->v[--p->topo]; //operador * = vai onde ele aponta //desreferenciação
    return SUCESSO;
}

// "% " = tipo
// i % j = resto

void mostra_pilha (t_pilha *p) {
    if (pilha_vazia(p)) printf("pilha vazia\n");
    else {
        for (int i = p -> topo - 1; i >= 0; i--) {
            printf ("%d ", p -> v[i]);
        }
        printf("\n");
    }
}

