#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void preenche_vetor(int vetor[], int tam)
{
    srand(time(NULL));
    for (int i = 0; i < tam; i++)
        vetor[i] = rand() % 10;
}
void imprime_vetor(int vetor[], int tam)
{

    for (int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
int main(){

    int v1[TAM],v2[TAM];

    preenche_vetor(v1,TAM);
    preenche_vetor(v2,TAM);

    printf("Vetor 1:\n");
    imprime_vetor(v1,TAM);
    printf("Vetor 2:\n");
    imprime_vetor(v2,TAM);

    for(int i=0;i<TAM;i++){

        printf("%d + %d=%d\n",v1[i],v2[TAM-1-i],v1[i]+v2[TAM-1-i]);
    }

    return 0;
}