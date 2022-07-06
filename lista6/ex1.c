#include <stdio.h>

int main(){

    int n=0,aux=0;

    while(n>=0){
        printf("Digite o numero que deseja saber1 qual eh o maior, caso queira sair digite um numero negativo:\n");
        scanf("%d",&n);
        
        if(n>aux || n==0){
            aux=n;
        }
        else{
            aux=aux;
        }

    }
    printf("O maior valor eh %d",aux);
    return 0;
}