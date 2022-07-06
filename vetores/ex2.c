#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void preenche_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        vetor[i] = rand() % 20;
}
void imprime_vetor(int vetor[], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
        printf("%d,", vetor[i]);

}


int main(){

    int vetor[TAM],n;
    srand(time(NULL));

    preenche_vetor(vetor,TAM);
    imprime_vetor(vetor,TAM);

    printf("Qual a posição que deve ser removida? de o a 10?\n");
    scanf("%d",&n);

    for(int i=n;i<TAM-1;i++){

        vetor[i]=vetor[i+1];
    }

    imprime_vetor(vetor,TAM);

    return 0;
}
