#include<stdio.h>
#include<stdlib.h>

typedef struct coordenada
{
    int x;
    int y;
} Coordenada;

int** alocaMatriz(int nl, int nc);
void imprimeMatriz(int **m, int tam);
void imprimeCriativ(int **m, int tam); //a ser implementada na fase das tarefas
void inicializaLabirinto(int **m, int tam);
void preencheMatrizCusto(int **m, int tam, int xQueijo, int yQueijo);
Coordenada* calculaCaminho (int **m, int tam, int xRato, int yRato, int *nroPassos);
//int testaCoordenadas(Coordenada c, int tam, char alvo);//a ser implementada na fase dos desafios

int main(){
    int **lab,
        tam, //tamanho fixo para fase de testes
        nPassos, //vai armazenar o tamanho do caminho c
        i;
    Coordenada *c, //armazena as coordenadas do caminho
    cRato,//coordenadas do Rato
    cQueijo; //coordenadas do Queijo


     tam=10;


    cQueijo.x=5;
    cQueijo.y=2;

    cRato.x=8;
    cRato.y=8;


    lab = alocaMatriz(tam, tam); //aloca labirinto
    inicializaLabirinto(lab, tam); //inicializa com configura��o padr�o
    imprimeMatriz(lab, tam); //imprime
    preencheMatrizCusto(lab, tam, cQueijo.x, cQueijo.y); //preenche a matriz de custo, considerando a
                                        //(5,2) como localiza��o do queijo - configura��o fixa
                                        // para facilitar os testes

    imprimeMatriz(lab, tam);

    c=calculaCaminho(lab, tam, cRato.x, cRato.y, &nPassos); // preenche c com coordenadas do caminho entre as coordenadas
                                        // do rato (8,8). Depois, alterar de tal forma
                                            // a ler do teclado.

    //imprimir caminho de forma criativa
    //desalocar todos vetores e matrizes alocados dinamicamente
     imprimeMatriz(lab, tam);
    return 0;
}

int** alocaMatriz(int nl, int nc){

    int **m, i;

    m = (int**)malloc((unsigned int) nl * sizeof(int*));

    for(i=0; i<nl; i++)
        m[i] = (int*) malloc(nc * sizeof(int));


    return m;

}

void imprimeMatriz(int **m, int tam){

    int i,j;

    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
    printf("\n");
}



void inicializaLabirinto(int **m, int tam){

    int i,j;

    for(i=0; i<tam; i++)
        for(j=0; j<tam; j++){
            m[i][j] = -1;
        }



    m[2][0] = -2;
    m[2][1] = -2;
    m[2][2] = -2;
    m[2][3] = -2;
    m[3][3] = -2;
    m[3][4] = -2;
    m[4][4] = -2;
    m[5][4] = -2;
    m[6][4] = -2;
}


void preencheMatrizCusto(int **m, int tam, int xQueijo, int yQueijo){

    int i, j,
        aux = 0,
        flag=1;

    m[xQueijo][yQueijo] = 0;
    while(flag == 1){
        flag=0;
        for(i=1; i<tam-1; i++){
            for(j=1; j<tam-1; j++)
                if(m[i][j]==aux){
                    if(m[i-1][j]==-1)
                        m[i-1][j]=aux+1;
                    if(m[i+1][j]==-1)
                        m[i+1][j]=aux+1;
                    if(m[i][j-1]==-1)
                        m[i][j-1]=aux+1;
                    if(m[i][j+1]==-1)
                        m[i][j+1]=aux+1;
                    flag=1;
                }
        }
        aux++;
    }
}


Coordenada* calculaCaminho (int **m, int tam, int xRato, int yRato, int *nroPassos){

    Coordenada *caminho;
    int i, aux;


    *nroPassos = m[xRato][yRato];


    aux = *nroPassos;


    caminho = (Coordenada*) malloc(aux*sizeof(Coordenada));
    if(caminho==NULL)
    {
        printf("Erro de alocacao de memoria!\n");
        printf("Nao foi possivel alocar %d bytes",aux);
        getchar();
    }

    caminho[0].x = xRato;
    caminho[0].y = yRato;


    for(i=1; i<=*nroPassos; i++){

        if(m[xRato-1][yRato]==aux-1)
            xRato--;
        else if(m[xRato+1][yRato]==aux-1)
            xRato++;
        else if(m[xRato][yRato-1]==aux-1)
            yRato--;
        else if(m[xRato][yRato+1]==aux-1)
            yRato++;

        caminho[i].x = xRato;
        caminho[i].y = yRato;

        aux--;

    }


      for(i=0; i<=*nroPassos ; i++){
            if(m[caminho[i].x][caminho[i].y]!=0)
            m[caminho[i].x][caminho[i].y]=-4;//tra�ar o caminho no labirinto
    }

    return caminho;
}
