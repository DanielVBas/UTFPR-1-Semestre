#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10


void imprime_vetor(int vetor[], int tam);
void preencheVetor(int v[], int n, int min , int max);

int main(){

    int min,vetor[N],max;

    printf("Digite o numero maximo e minimo que deve aparecer nesse vetor:\n");
    scanf("%d %d",&max,&min);

    preencheVetor(vetor,N,min,max);
    imprime_vetor(vetor,N);

    return 0;
}

void preencheVetor(int v[], int n, int min, int max){

    srand(time(NULL));
    for(int i=0;i<n;i++){
        v[i]= rand()%(max - min + 1) + min;
    }
}
void imprime_vetor(int vetor[], int tam)
{

    for (int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}