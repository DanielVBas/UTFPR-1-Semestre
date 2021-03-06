#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <Windows.h>
    #define LIMPA "cls"
#else
    #include <unistd.h>
    #define LIMPA "clear"
#endif

#define ORG 'X'
#define VAZ '.'
#define TAM 101
#define TMP_ESPERA 1

///////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

char **alocaMatriz(int n_linhas, int n_colunas);
void desalocaMatriz(char **matriz, int n_linhas);
void limpaMatriz(char **m, int nL, int nC);
void inicBlinker(char **m, int nL, int nC);
void inicBloco(char **m, int nL, int nC);
void inicSapo(char **m, int nL, int nC);
void inicGlider(char **m, int nL, int nC);
void inicLWSS(char **m, int nL, int nC);
void menuInicJogo(char **mat, int nL, int nC);
void imprimeMatriz(char **mat, int n_linhas, int n_colunas);
void copiaMatriz(char **mAnterior, char **mAtual, int nL, int nC);
void atualizaMat(char **mAtual, char **mAnt, int n_linhas, int n_colunas);
void vizinhos_possiveis(int *length, int number, int limit, int positions[]);
char calcula_vivo_morto(int pos_x_possiveis[], int pos_y_possiveis[], int tam_x, int tam_y, char **mAnt, int x_atual, int y_atual);

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void jogaJogoVida(char **mAtual, int nL, int nC, int nCiclos);


int main()
{

    char **mat, jogarNovamente;

    int nL,nC,nCiclos; //fornecidos pelo usuario

    do
    {  
        printf("Digite o numero de linhas da matriz, o numero  de colunas da matriz, e o numero de ciclos, separados por espaços (valores inteiros): ");
        scanf("%d %d %d", &nL, &nC, &nCiclos);

        mat = alocaMatriz(nL,nC);

        menuInicJogo(mat,nL,nC);
        jogaJogoVida(mat,nL,nC,nCiclos);

        printf("Deseja jogar novamente? Digite qualquer caractere para continuar, ou \"n\"/\"N\" para finalizar: ");
        scanf("%c", &jogarNovamente);
    } while (jogarNovamente != 'n' && jogarNovamente != 'N');

    desalocaMatriz(mat,nL);
}

void limpaMatriz(char **m, int nL, int nC)
{
    int i,j;
    for(i=0;i<nL;i++)
        for(j=0;j<nC;j++)
            m[i][j]=VAZ;
}

void inicBlinker(char **m, int nL, int nC)
{
    char padrao[1][3]={{ORG,ORG,ORG}};
    int i,j, xInic=nL/2, yInic=nC/2;

    limpaMatriz(m,nL,nC);

    for(i=0;i<1;i++)
        for(j=0;j<3;j++)
            m[xInic+i][yInic+j]=padrao[i][j];
}

void inicBloco(char **m, int nL, int nC)
{
    char padrao[2][2]={{ORG,ORG},{ORG,ORG}};
    int i,j,xInic=nL/2, yInic=nC/2;

    limpaMatriz(m,nL,nC);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            m[xInic+i][yInic+j]=padrao[i][j];
}

void inicSapo(char **m, int nL, int nC)
{
    char padrao[2][4]={{VAZ,ORG,ORG,ORG},{ORG,ORG,ORG,VAZ}};
    int i,j,xInic=nL/2, yInic=nC/2;

    limpaMatriz(m,nL,nC);

    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
            m[xInic+i][yInic+j]=padrao[i][j];

}

void inicGlider(char **m, int nL, int nC)
{
    char padrao[3][3]={{ORG,ORG,ORG},{ORG,VAZ,VAZ},{VAZ,ORG,VAZ}};
    int i,j,xInic,yInic;

    limpaMatriz(m,nL,nC);

    xInic=nL-4;
    yInic=nC-4;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            m[xInic+i][yInic+j]=padrao[i][j];
}

void inicLWSS(char **m, int nL, int nC)
{
    char padrao[4][5]={{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,VAZ},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,ORG,ORG,ORG,VAZ}};
    int i,j,xInic,yInic;

    limpaMatriz(m,nL,nC);

    xInic=nL-5;
    yInic=nC-6;

    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            m[xInic+i][yInic+j]=padrao[i][j];

}

void menuInicJogo(char **mat, int nL, int nC)
{
    int opcao;

    printf("(1)Bloco\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS\nEntre com a opcao: ");
    scanf("%d",&opcao);
    switch(opcao)
    {
        case 1:   inicBloco(mat,nL,nC); break;
        case 2:   inicBlinker(mat,nL,nC); break;
        case 3:   inicSapo(mat,nL,nC); break;
        case 4:   inicGlider(mat,nL,nC); break;
        case 5:   inicLWSS(mat,nL,nC); break;
    }

    imprimeMatriz(mat,nL,nC);// TO DO

    printf("Se inicializacao correta digite ENTER para iniciar o jogo..."); 
    while(getchar()!='\n')
    ; 
    getchar();

}
void jogaJogoVida(char **mAtual, int nL, int nC, int nCiclos)
{
    char **mAnt;
    int c;

    //imprimindo na tela a matriz inicial
    system(LIMPA);
    imprimeMatriz(mAtual,nL,nC);
    // getchar();
    sleep(TMP_ESPERA);

    mAnt = alocaMatriz(nL,nC);

    for(c=1;c<=nCiclos;c++)
    {
        copiaMatriz(mAnt,mAtual,nL,nC);

        atualizaMat(mAtual,mAnt,nL,nC);
        system(LIMPA);
        imprimeMatriz(mAtual,nL,nC);
        
        sleep(TMP_ESPERA);
    }

    desalocaMatriz(mAnt,nL);
}

char **alocaMatriz(int n_linhas, int n_colunas)
{
    char **matriz = (char **) malloc(n_linhas * sizeof(char *));

    for (int i = 0; i < n_linhas; i++)
        matriz[i] = (char *) malloc(n_colunas * sizeof(char));

    return matriz;
}

void desalocaMatriz(char **matriz, int n_linhas)
{
    for (int i = 0; i < n_linhas; i++)
        free(matriz[i]);

    free(matriz);
}

void imprimeMatriz(char **mat, int n_linhas, int n_colunas)
{
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
            printf("%c", mat[i][j]);
        
        printf("\n");
    }
}

void copiaMatriz(char **mAnterior, char **mAtual, int nL, int nC)
{
    int l, c;
    for(l = 0; l < nL; l++)
        for(c = 0; c < nC; c++) mAnterior[l][c] = mAtual[l][c];
}

void atualizaMat(char **mAtual, char **mAnt, int n_linhas, int n_colunas)
{
    int pos_x_possiveis[3], pos_y_possiveis[3], tam_x, tam_y;

    for (int i = 0; i < n_linhas; i++)
    {
        vizinhos_possiveis(&tam_x, i, n_linhas, pos_x_possiveis);
        for (int j = 0; j < n_colunas; j++)
        {
            vizinhos_possiveis(&tam_y, j, n_colunas, pos_y_possiveis);

            mAtual[i][j] = calcula_vivo_morto(pos_x_possiveis, pos_y_possiveis, tam_x, tam_y, mAnt, i, j);
        }
    }
}

void vizinhos_possiveis(int *tamanho, int pos_atual, int tam_matriz, int vizinhos[])
{
    // coloca em um array as posicoes vizinhas possiveis

    if ((pos_atual - 1) < 0)
        vizinhos[0] = pos_atual,
        vizinhos[1] = pos_atual + 1,
        *tamanho = 2;

    else if ((pos_atual + 1) > (tam_matriz - 1))
        vizinhos[0] = pos_atual - 1,
        vizinhos[1] = pos_atual,
        *tamanho = 2;
    
    else
        vizinhos[0] = pos_atual - 1,
        vizinhos[1] = pos_atual,
        vizinhos[2] = pos_atual + 1,
        *tamanho = 3;
}

char calcula_vivo_morto(int pos_x_possiveis[], int pos_y_possiveis[], int tam_x, int tam_y, char **mAnt, int x_atual, int y_atual)
{
    /* Uma célula viva morre de solidão se tiver menos de duas vizinhas vivas.
    Uma célula viva morre por superpopulação se tiver mais que três vizinhas vivas.
    Uma célula viva sobrevive se tiver duas ou três vizinhas vivas.
    Uma célula morta ganha vida se tiver exatamente três vizinhas vivas */
    int vivos = 0;

    for (int i = 0; i < tam_x; i++)
        for (int j = 0; j < tam_y; j++)
        {
            if (pos_x_possiveis[i] == x_atual && pos_y_possiveis[j] == y_atual) continue;
            if (mAnt[pos_x_possiveis[i]][pos_y_possiveis[j]] == 'X') vivos++;
        }

    if (mAnt[x_atual][y_atual] == 'X')
        return (vivos > 3 || vivos < 2) ? '.' : 'X';

    return vivos == 3 ? 'X' : '.';
    
}
