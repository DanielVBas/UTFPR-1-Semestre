#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10


void imprime_vetor(int vetor[], int tam);
void imprime_vetor_contrario(int vetor[], int tam);
void preencheVetor(int v[], int tam);

int main(){

    int vetor[TAM];

    preencheVetor(vetor,TAM);
    imprime_vetor(vetor,TAM);
    imprime_vetor_contrario(vetor,TAM);





    return 0;
}

void preencheVetor(int v[], int tam){

    srand(time(NULL));
    for(int i=0;i<tam;i++){
        v[i]= rand()%10;
    }
}

void imprime_vetor(int vetor[], int tam)
{

    for (int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
void imprime_vetor_contrario(int vetor[], int tam)
{

    for (int i = tam-1; i >=0; i--)
        printf("%d ", vetor[i]);
    printf("\n");
}