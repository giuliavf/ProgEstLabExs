#include <stdio.h>

int fibMem[1000];

int fib (int n){
    if (n==0) return 0;
    if (n<=2) return 1;
    /* altere a linha abaixo */
    return fib(n-1) + fib(n-2);
}

int main (){
    int n;

    fibMem[1] = 1;
    fibMem[2] = 1;

    scanf("%d", &n); // aqui, será inserido o valor a se verificar se está na série
    printf("%d\n", fib(n)); // aqui, se mostrará se o valor 
    return 0;
}
