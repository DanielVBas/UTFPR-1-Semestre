#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int * criaVetor(int tam, int lim);
void imprime(int v[],int tam);
int * expandeVetor(int *v, int tam, int n, int lim);

int main(){

    int *vetor,tam,lim,n;
    srand(time(NULL));

    printf("Digite o tamanho e o valor maximo que estara dentro:\n");
    scanf("%d %d",&tam,&lim);

    vetor=criaVetor(tam,lim);
    imprime(vetor,tam);

    printf("Quantos novos elementos vc deseja alocar?:\n");
    scanf("%d",&n);

    expandeVetor(vetor,tam,n,lim);
    imprime(vetor,tam+n);


    free(vetor);




    return 0;
}
int * criaVetor(int tam, int lim){
    int *vetor;
    vetor = (int *) malloc ( tam*sizeof(int) );

    for(int i=0;i<tam;i++){
        vetor[i]=rand()%lim+1;
    }

    return vetor;
}
void imprime(int v[],int tam){

    for(int i=0;i<tam;i++){
        printf("%d ",v[i]);
    }
}
int * expandeVetor(int *v, int tam, int n, int lim){
    int *vetor;
    vetor = (int *) realloc ( v,tam*sizeof(int));

    for(int i=tam;i<tam+n;i++){
        vetor[i]=rand()%lim+1;
    }

    return vetor;
}