#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int le_tamanho_vetor () {
    int t;
    printf("digite o tamanho do vetor: ");
    scanf ("%d", &t);
    return t;
}

void le_vetor (int *v, int tamanho){
    for (int i=0; i<tamanho; i++){
        printf ("digite o valor da %da posicao: ", i+1);
        scanf ("%d", &v[i]);
    }
} 

void mostra_vetor (int *v, int tamanho) {
    //printf ("\nveja seu vetor:\n");
    for (int i=0; i<tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void preenche_vetor (int *v, int tamanho) {
    for (int i=0; i<tamanho; i++) {
        v[i] =  rand() % (tamanho * 10); //preenche com numeros ate 10 vezes o tamanho do vetor
    }
}

int busca_linear (int *v, int tamanho, int x) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == x) {
            return 1;
        }
    }
    return 0; 
}

void bubble (int *v, int tamanho) {
    for (int i=1; i<tamanho; i++) {
        for (int j=0; j<tamanho-i; j++) {
            if(v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }   
}

int main () {
    srand(time(0));
    int tamanho = le_tamanho_vetor();
    int *v = (int *) malloc (tamanho * sizeof(int));
    //le_vetor (v, tamanho);
    preenche_vetor (v, tamanho);
    printf("vetor original: \n");
    mostra_vetor (v, tamanho);
    printf("\ndigite o valor para buscar: ");
    int x;
    scanf("%d", &x);
    if (busca_linear (v, tamanho, x)) {
        printf("%d foi encontrado no vetor pela busca linear\n", x);
    } else {
        printf("%d nao foi encontrado no vetor pela busca linear\n", x);
    }

    bubble (v, tamanho);
    printf ("\nvetor ordenado pelo bubble:\n");
    mostra_vetor (v, tamanho);
    return 0;
}
