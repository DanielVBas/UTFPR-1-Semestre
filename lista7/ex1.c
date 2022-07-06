#include <stdio.h>

int main(){

    int n,m;

    printf("Qual o numero de colunas da tabuada?");
    scanf("%d",&n);

    printf("Qual o numero de linhas da tabuada?");
    scanf("%d",&m);



    for(int i=1;i<=n;i++){


        for(int j=1;j<=m;j++){

            printf("%d ", i*j);
        }

        printf("\n");
    }


    return 0;
}