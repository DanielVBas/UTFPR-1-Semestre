#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10


void imprime_vetor(int vetor[], int tam);
void preencheVetor(int v[], int n, int lim);

int main(){

    int lim,vetor[N];

    printf("Digite o numero maximo que deve aparecer nesse vetor:\n");
    scanf("%d",&lim);

    preencheVetor(vetor,N,lim);
    imprime_vetor(vetor,N);

    return 0;
}

void preencheVetor(int v[], int n, int lim){

    srand(time(NULL));
    for(int i=0;i<n;i++){
        v[i]= rand()%lim;
    }
}
void imprime_vetor(int vetor[], int tam)
{

    for (int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}