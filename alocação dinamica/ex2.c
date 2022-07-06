#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LIM 10

int * criaVetor(int tam, int lim);
void imprime(int v[],int tam);
void vetor_mutiplicado(int v1[],int v2[], int tam1, int tam2,int v_mult[]);

int main(){

    int *vetor1,*vetor2,tam1,tam2,lim,n,*vetor_mult;
    srand(time(NULL));

    printf("Digite o tamanho do primeiro e do segundo vetor:\n");
    scanf("%d %d",&tam1,&tam2);

    vetor1=criaVetor(tam1,LIM);
    vetor2=criaVetor(tam2,LIM);
    vetor_mult=criaVetor(tam1*tam2,LIM);
    printf("\nVetor 1:\n");
    imprime(vetor1,tam1);
    printf("\nVetor 2:\n");
    imprime(vetor2,tam2);
     
    vetor_mutiplicado(vetor1,vetor2,tam1,tam2,vetor_mult);
    printf("\nVetor Multiplicado:\n");

    imprime(vetor_mult,tam2*tam1);

    free(vetor1);
    free(vetor2);
    free(vetor_mult);




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

void vetor_mutiplicado(int v1[],int v2[], int tam1, int tam2,int v_mult[]){

    int k=0;
    for(int i=0;i<tam1;i++){
        for(int j=0;j<tam2;j++){
            v_mult[k]=v1[i]*v2[j];
            k+=1;
        }
    }
}
