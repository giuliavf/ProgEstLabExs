#include <stdio.h>

int decToBin (int n){
    if (n == 1) return 1;
    int bin;
    
}

int binToDec (int n){
    
}

int main(){
    int n,op,resp;

    scanf("%d", &n);
    scanf("%d", &op);

    switch(op){
        case 1: 
            resp = decToBin (n);      
            break;
        case 2: 
            resp = binToDec (n);           
            break;
    }

    printf("%d",resp);
    return 0;
}
