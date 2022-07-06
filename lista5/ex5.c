#include <stdio.h>

int main(){


    int n,i,aux,divisores=0;

    printf("Digite o numeros inteiros:\n");
    scanf("%d",&n);

    for(i=1;i<n;i++){

        aux= n%i;
        if(aux==0){

          divisores= divisores + i;
        }

    }
    if(divisores==n){
    printf("Eh um numero perfeito");

    }
    else{
    printf("nao eh perfeito");
    }


    return 0;
}
