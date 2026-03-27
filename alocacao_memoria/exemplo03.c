#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    //*p = 100; coisas ruins podem acontecer

    p = (int *) malloc (sizeof(int));
    *p = 20;

    printf("Onde esta o p: %p\n",&p); // endereco de p
    printf("Valor que o p armazena: %p\n",p); // endereco da "caixinha" que foi alocada no ponteiro(onde ele aponta)
    printf("Valor do elemento que p aponta: %d\n",*p);// valor da caixinha
    //printf("Deu Certo\n");
    
    return 0;
}