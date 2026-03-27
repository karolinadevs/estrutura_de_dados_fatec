#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, i, tamanho;
    float *vf;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanho);
    v = (int *) malloc(tamanho * sizeof(int));
    vf = (float*) malloc (tamanho * sizeof(float));

    for (i = 0; i<tamanho;i++){
        v[i] = i *2;
        vf[i] = v[i]*0.75;
    }

    printf("\nO vetor de inteiros:\n");
    for(i =0; i< tamanho; i++){
        printf("%d ",v[i]);
    }

    printf("\n\nO vetor de Floats:\n");
    for(i =0; i< tamanho; i++){
        printf("%.3f ",vf[i]);
    }

    return 0;
}