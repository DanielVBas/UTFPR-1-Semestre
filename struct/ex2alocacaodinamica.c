#include <stdio.h>

typedef struct{
    char nome;
    int dia;
    int mes;
} Aniversariantes;


int main(){
    int qtd;
    Aniversariantes *a;

    printf("Digite a qtd de aniversariantes:");
    scanf("%d", &qtd);

    a = (Aniversariantes*) malloc (qtd * sizeof (Aniversariantes));


    for(int c = 0; c < qtd; c++)
    {
        printf("Digite a inicial, dia e mes separados por espacos:");
        scanf(" %c %d %d", &a[c].nome , &a[c].dia, &a[c].mes);
    }

    for (int i=1;i<=12;i++){
        printf("Aniversariantes mês %d:", i);
        for(int j=0;j<qtd;j++){
            if(a[j].mes==i){
                printf(" %c",a[j].nome);

            }
        }
        printf("\n");
    }




    return 0;
}

