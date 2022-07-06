#include <stdio.h>

int main(){

    int n,multi;

    printf("Digite o numero  para ver se ele eh natural triangular\n");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){

        multi=i*(i+1)*(i+2);

        if(multi==n){
            printf("O numero %d eh triangular\n",n);
            break;

        }


    }




    return 0;
}