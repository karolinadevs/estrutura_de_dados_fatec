/*construir um programa que le um vetor de tamanho escolhido pelo usuario,
mostrar esse vetor, encontrar o maior elemento e mostra-lo*/

#include <stdio.h>
#include <stdlib.h>

int le_tamanho_vetor () {
    int t;
    printf("Digite o tamanho do vetor: ");
    scanf ("%d", &t);
    return t;
}

//void entra quando não retorna nada
void le_vetor (int *v, int tamanho){
    for (int i=0; i<tamanho; i++){
        printf ("Digite o valor da %da posicao: ", i+1);
        scanf ("%d", &v[i]);
    }
} 

void mostra_vetor (int *v, int tamanho) {
    printf ("\nVeja seu vetor:\n");
    for (int i=0; i<tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int encontra_maior (int *v, int tamanho) {
    int maior = v[0];
    for (int i=1; i<tamanho; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior; 
} 

int main () {
    int tamanho = le_tamanho_vetor();
    int *v = (int *) malloc (tamanho * sizeof(int));
    le_vetor (v, tamanho);
    mostra_vetor (v, tamanho);
    printf("O maior elemento e %d\n", encontra_maior(v, tamanho));
    return 0;
}

int soma (int *v, int tamanho) {
    int s = 0;
    for (int i=0; i < tamanho; i++) {
        s = s + v[i];
    }
    return s;
}

float media (int *v, int tamanho) {
    float media = (float) soma_vetor(v, tamanho)/tamanho; //casting
    return media;
}

int main () {
    int tamanho = le_tamanho_vetor();
    int *v = (int *) malloc (tamanho * sizeof(int));
    le_vetor (v, tamanho);
    mostra_vetor (v, tamanho);
    printf("o maior elemento eh %d\n", encontra_maior(v, tamanho));
    printf("a posicao do maior elemento eh %d\n", encontra_maior(v, tamanho));
    printf("soma dos valores do vetor: %d\n", soma(v, tamanho));
    printf("media dos valores: %f\n", media(v, tamanho));
    return 0;
}
