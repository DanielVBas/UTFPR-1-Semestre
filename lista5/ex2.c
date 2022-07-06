#include <stdio.h>

int main(){

    int n,i,r;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&n);

    for(i=1;i<=100;i++){

        r=i%n;

        if(r==2){
            printf("%d\n",i);
        }

    }



    return 0;
}
