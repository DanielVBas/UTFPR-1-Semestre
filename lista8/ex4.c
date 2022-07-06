#include <stdio.h>

int main(){

    int n1,n2,c,d,u,permut;

    printf("Digite os dois numeros que deseja vericar se sao permutacoes:\n");
    scanf("%d %d",&n1,&n2);

    c=n1/100;
    d=n1/10%10;
    u=n1%10;

    permut=d*100+u*10+c;

    if(permut==n2){

        printf("O numero %d eh permutacao de %d",n1,n2);
    }
    else{
        printf("os numeros nao sao permutacao");
    }



    return 0;
}