#include <stdio.h>

int main(){

    int n,m,ant=0;

    printf("Quantos numeros tera a sequencia?\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        printf("Qual o %d numero?\n",i);
        scanf(" %d",&m);

        if(ant<m || i==1){

            ant=m;

            if(i==n){
                printf("sim");
            }
            continue;
        }
        else{
            printf("Nao");
            break;
        }




    }



    return 0;
}