#include <stdio.h>
#include <math.h>
int main(){

    float n1,n2,n3,resultado;
    int op;

    printf("Digite 1 para media aritmetica, 2 para media ponderada, 3 para media geometrica e 4 para media harmonica.");
    scanf("%d", &op);

    printf("Digite 3 numeros:");
    scanf("%f %f %f", &n1,&n2, &n3);


    if (op==1){
        resultado = (n1+n2+n3)/3;
    }
    else if (op==2){
        resultado = (n1*1+n2*2+n3*3)/6;
    }
    else if (op==3){
        resultado =pow(n1*n2*n3,1.0/3.0);
    }
    else if (op==4){
        resultado = 3/(1/n1+1/n2+1/n3);
    }


    printf("O resultado foi: %.2f",resultado);

    return 0;
}