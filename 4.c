#include <stdio.h>
#include <math.h>

float opcaoA (float x, float y){
    return x + y;
}

float opcaoB (float x, float y){
    return x - y;
}

float opcaoC (float x, float y){
    return x * y;
}

float opcaoD (float x, float y){
    return x / y;
}

float opcaoE (float x, float y){
    return pow(x,y);
}

int main(){
    int opc;
    float a,b,resp;

    scanf("%d",&opc);
    scanf("%f",&a);
    scanf("%f",&b);

    switch(opc){
        case 1: 
            resp == opcaoA(a,b);         
            break;
        case 2: 
            resp == opcaoB(a,b);           
            break;
        case 3: 
            resp == opcaoC(a,b);            
            break;
        case 4: 
            resp == opcaoD(a,b);            
            break;
        case 5: 
            resp == opcaoE(a,b);           
            break;
    }

    printf("%f\n",resp);
    return 0;
       
}
