#include <stdio.h>

int main(){

    int n,funcacao;

    printf("Entre com um numero inteiro maior que 0\n");
    scanf("%d",&n);

    for(int i= -n;i<=n;i++){

        if(i<0){
        printf("%d ",i);
        }
        else{
            printf(" %d ",i);
        }
        funcacao = i*i+i+1;

        for(int j =0; j< funcacao;j++){

            printf(".");
        }

    printf("*\n");

    }






    return 0;
}