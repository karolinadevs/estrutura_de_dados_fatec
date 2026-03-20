#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(0));
    int m = rand();
    int n = rand();
    printf("m = %d, n = %d\n", m, n);
    return 0;
}