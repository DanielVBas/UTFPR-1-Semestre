#include <stdio.h>
#define TAM 100

int main(){

    int vetor[TAM],n,ver;

    

    for(int i=0;i<TAM;i++){


        printf("Entre com um numero inteiro para entrar na colocação:%d\n",i+1);
        scanf("%d",&n);
        if(n==665)break;

        for(int j=0;j<=i;j++){
            if(vetor[j]==n){
                printf("Numero ja existente na lista, escolha outro %d:\n",j);
                i-=1;
                break;
            }
            if(j==i){ 
                vetor[i]=n;
                printf("%d",vetor[j]);
                break;
            }
        }
        
    }



    return 0;
}