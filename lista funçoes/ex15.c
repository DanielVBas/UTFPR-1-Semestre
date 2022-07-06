#include <stdio.h>

void parImpar(int k){

    int par=0,impar=0,n;

    for(int i=1;i<=k;i++){
        scanf("%d",&n);
        if(n%2==0)par++;
        else impar++;
    }
    if(par==k)printf("0");
    else if(impar==k)printf("1");
    else printf("-1");
}

int main(){

    int k,n;
    printf("Digite o numero de termos que tera a sequencia:\n");
    scanf("%d",&k);
    printf("Digite %d numeros:",k);
    parImpar(k);
    return 0;
}