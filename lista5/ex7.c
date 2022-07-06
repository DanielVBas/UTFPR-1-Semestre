#include <stdio.h>

int main(){

    int n,i,n1=0,n2=1,soma=0;


    printf("Digite um numero:\n");
    scanf("%d",&n);
    n-=2;
    printf("%d %d ",n1,n2);
    for(i=0;i<n;i++){

        soma=n1+n2;

        printf("%d ",soma);
        n1=n2;
        n2=soma;

    }


}
