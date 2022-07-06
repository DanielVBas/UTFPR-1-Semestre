#include <stdio.h>

int main(){

    int n,seq,cont=1,ant=0;
    printf("Qual o tamanho da sequencia?\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        printf("Qual o %d da sequencia?\n",i);
        scanf("%d",&seq);

    if(ant!=seq && i!=1){
        cont +=1;
    }
    ant=seq;
    }
    printf("Quantidade de segmentos = %d",cont);





    return 0;
}