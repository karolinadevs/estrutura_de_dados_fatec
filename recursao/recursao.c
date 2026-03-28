#include <stdio.h>

//pilha simples(uma operacao)
//trocou de int para float a função para poder retornar mais numeros
//1) fatorial
float fat(int n){
    //entra no if, se for vdd devolve true e para o codigo, se não for vdd, continua codigo e faz a conta
    if(n<=1){//criterio de parada, quando vai parar a recursão para não estourar
        return 1; //retornando verdade para poder parar a recursividade
    }
    return n* fat(n-1);//retorna conta fatorial
}

//arvore de recursão(mais de uma operaçao )
//2) fibonacci
int fib(int n){
    if(n<=1) return 1;
    return fib(n-1)+fib(n-2);
}

//3) soma 1 a n
int soma1an(int i, int n){
    if(i==n) return i;
    return i+ soma1an(i+1,n);
}

int soma1an_2(int n){
    if (n == 1) return 1;
    return n + soma1an_2 (n-1);
}
//pilha de memoria
void mostra1an(int n){
    if (n<10) 
        mostra1an(n+1);
    printf("%d ",n);    
}
//compilador transforma em laço (recurção de cauda)
void mostra1an_2(int n){
    printf("%d ",n);  
    if (n<10) 
        mostra1an_2(n+1);  
}
int soma_vet_rec(int v[],int n){
    if(n==0)return v[0];
    return v[n]+soma_vet_rec(v,n-1);
}
int main(){

    // for(int i =0; i<=14;i++){//forçando o estouro de int
    //     printf("fatorial de %d= %.0f\n",i, fat(i));
    // }
    //printf("fatorial de 5 = %d\n",fat(5));

    // for (int i = 0; i <= 46; i++)
    // {
    //     printf("fibonacci em %d = %d\n", i, fib(i));
    // }

    printf("soma 1 a 10: %d\n ",soma1an(1,10));
    printf("outro soma 1 a 10: %d\n ",soma1an_2(10));

    printf("\n");
    
    mostra1an(1);
    printf("\n");
    mostra1an_2(1);
    
    printf("\n");
    int v[5];
    for(int i=0; i<5; i++){
        v[i] =i+3;
    }
    printf("soma do vetor: %d\n", soma_vet_rec(v,4));// 4 é a ultima posição do vetor

    return 0;
}
//para ser eficiente usaria vetor (memorization)
//vai empilhando ate chegar no 1, qdo chega vai desempilhando e devolvendo o valor de n conforme for
//desempilhando ate chegar na "base"(o primeiro que foi empilhado(no caso o fatorial de 5)) 
//do empilhamento e devolver oq foi pedido

//(int tem limitações de bit que float não tem(tem mais bit(32)))
//float tem limitação de precisão(tem 6 digitos)
//(garante os 6 digitos mais significativos(a mantissa(base-23(o resto é expoent))do numero))(double garante 15)