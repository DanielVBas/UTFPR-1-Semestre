#include <stdio.h>

int main(){

    int t,primos=0,n,ver,j,soma=0;

    printf("Qual a quantidade de numeros para ser verificado?\n");
    scanf("%d",&t);

    for(int i=1;i<=t;i++){

        if(primos==2){
            soma+=n;
        }
        printf("Entre com o numero:\n");
        scanf("%d",&n);

        

        primos=0;

        for(j=1;j<=n;j++){

            if(n%j==0){
                primos++;
            }
    

        


        }
               
    }
    printf("A soma eh %d",soma);





    return 0;
}