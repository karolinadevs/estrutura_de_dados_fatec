#include <stdio.h>
#include <stdlib.h>
int main () {
    //int v[1000000];
    //int *v = (int *) malloc (600000000 * sizeof(int));
    
    int *v;
    while ((v = (int *)malloc(5000000*sizeof(int))) != NULL) {
        printf ("%p\n", v);
        free(v); //libera a regiao apontada por v 
    }
    //printf ("passou");
    return 0;
}
