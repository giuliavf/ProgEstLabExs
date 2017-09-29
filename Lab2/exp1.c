#include <stdio.h>
#include <math.h>

int fatorial (int x);
double funcao (int k);
double somatorio (int n);
double ramanujan (int k);

main() {
    int k;
    double pi;

    //Entrada
    printf("Entre com o valor de k: ");
    scanf("%d", &k);

    //Processamento
    pi = ramanujan (k);

    //Saída
    printf("Valor de pi: %lf \n",pi);    
}

int fatorial (int x) {

    for (int i=x-1; i>0; i--){
        x=x*i;
    }
    return x;
}

double funcao (int k) {

/*Valores n_: intermediários
* Valores f_: a serem inseridos na fórmula
*/
    double n1, n2, f1, f2, f3, f4, result;

    n1 = 4*k;    
    n2 = fatorial (k);

    f1 = fatorial (n1);
    f2 = (1103.0+26390.0*k);  
    f3 = pow(n2,4);
    f4 = pow(396.0,4*k);

    result = f1*f2/(f3*f4);
    return result;
}

double somatorio (int n) {
    double result=0.0;

    for (int i=0; i<n; i++) {
        result += funcao (n);
    }
    return result;
}

double ramanujan (int k) {
    double cte = (2*sqrt(2))/9801.0;
    double result = 1/(cte * somatorio (k));
    return result;
}



