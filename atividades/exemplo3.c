#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    //*p - 100; coisas ruins podem ruir
    
    p = (int *) malloc (sizeof(int));
    *p = 20;

    printf("onde esta o p: %p\n", &p); // endereco de p
    printf("valor que o p amarzena: %p\n", p); // endereco da caixa verde
    printf("endereco onde o p aponta: %d\n", *p); //vetor da caixinha verde


    //printf("deu certo!\n");
    return 0;

}