#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int custo_cidades (int* cidades, int n_cidades, int** m);
int **alocaMatriz(int lin, int col);
void preenche_matriz(int lin,int col,int **m);
int * alocaVetor(int tam);
void preenche_itinerario(int v[],int viagem);

int main(){

    int tam_custos,viagem,custos;
    int **matriz;
    int *itinerario;
    printf("Qual vai ser o tamanho da matriz de custos?\n");
    scanf("%d",&tam_custos);

    matriz=alocaMatriz(tam_custos,tam_custos);
    preenche_matriz(tam_custos,tam_custos,matriz);

    printf("Qual vai ser o tamanho da viagem?\n");
    scanf("%d",&viagem);

    itinerario=alocaVetor(viagem);
    preenche_itinerario(itinerario,viagem);

    custos=custo_cidades(itinerario,viagem,matriz);

    
    printf("O custo eh : %d",custos);

    return 0;
}

int **alocaMatriz(int lin, int col){
    int **m;
    m=(int **)malloc(lin*sizeof(int*));

    for (int i=0;i<col;i++)m[i]=(int **)malloc(col*sizeof(int*));

    return m;
}

void preenche_matriz(int lin,int col,int **m){

    int n;
    for (int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            printf("Digite o custo da viagem da cidade %d ate a cidade %d:\n",i,j);
            scanf("%d",&n);
            m[i][j]=n;
        }
    }
}
int * alocaVetor(int tam){
    int *vetor;
    vetor = (int *) malloc ( tam*sizeof(int) );
    return vetor;
}
void preenche_itinerario(int* v,int viagem){
    int n;
    for(int i=0;i<viagem;i++){
        printf("Qual a cidade n %d da viagem?\n",i+1);
        scanf("%d",&n);
        v[i]=n;
    }
}
int custo_cidades(int* cidades, int n_cidades, int** m){
    int soma=0;
    for (int i=0;i<n_cidades-1;i++){
        soma+=m[cidades[i]][cidades[i+1]];
    }

    return soma;
}