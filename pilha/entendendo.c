#include <stdio.h>

void f1 (int a) {
    a = a + 10;
}

void f2 (int *a) {
    *a = + 10;
}

int main () {
    int a = 37;
    f1 (a);
    printf("a depois de f1: %d\n", a);
    f2 (&a);
    printf("a depois de f2: %d\n", a);
    return 0;

    int v[10];
    for (int i = 0; i < 100; i++){
        v[i] = i;
        printf ("%d ", v[i]);
    }
}


