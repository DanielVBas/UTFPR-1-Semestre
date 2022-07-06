#include <stdio.h>
#include <math.h>

int main(){

    int n, u,d,c,resultado;

    printf("Entre com um numero entre 100 e 999:");
    scanf("%d", &n);

    if(n <100 || n>999){
        printf("Numero invalido, tente novamente");
    }
    else{
        u = n%10;
        d = (n%100)/10;
        c= n/100;

        resultado = pow(c,3)+pow(d,3)+pow(u,3);

        if(n==resultado){
            printf("O numero %d eh um numero narcisista",n);
        }
        else{
            printf("O numero %d nao eh um numero narcisista",n);
        }

    }







    return 0;
}