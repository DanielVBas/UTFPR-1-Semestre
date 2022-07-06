#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LIM 10
#define TAM 10

int * criaVetor(int tam, int lim);
void imprime(int v[],int tam);
int repeticoes(int v[],int **v_s_repeticao, int tam);
int main(){
    
    srand(time(NULL));
    int *vetor,*vetor_s_repeticoes,*valor_s_repeticoes;
    vetor=criaVetor(TAM,LIM);
    imprime(vetor,TAM);
    valor_s_repeticoes=repeticoes(vetor,&vetor_s_repeticoes,TAM);
    printf("\n");
    imprime(vetor_s_repeticoes,valor_s_repeticoes);

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
int repeticoes(int v[],int **v_s_repeticao, int tam){

    int rep=0,vetor_d=1,tam_v_destino=1;
    int *v_aux = (int *) malloc(sizeof(int));
    v_aux[0] = v[0];

    for(int i=0;i<tam;i++){
        for(int j=0;j<tam_v_destino;j++){
            if(v[i]==v_aux[j] ){

                rep=1;
                break;
            }
        }
        if (rep==0){
            v_aux = (int *) realloc(v_aux, (tam_v_destino + 1) * sizeof(int));
            v_aux[tam_v_destino] = v[i];
            tam_v_destino++;
        }
        rep=0;
    }
    *v_s_repeticao =v_aux;
    return tam_v_destino;
}