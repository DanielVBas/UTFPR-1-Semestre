#include <stdio.h>

int main(){

    int n,aux;

    printf("Digite um numero inteiro maior que zero:\n");
    scanf("%d",&n);

    for(int k=1;k<=n;k++){

        printf("%d ",k);
    }
    printf("\n");

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            if(j==1){
                printf("%d ",i);
            }
            aux= i*j;
            printf("%d ",aux);
        }
        printf("\n");
    }









    return 0;
}