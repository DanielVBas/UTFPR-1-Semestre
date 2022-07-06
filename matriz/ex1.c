#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 5
#define C 5



void imprime_matriz(int m[][C], int l, int c);
void preenche_matriz(int m[][C], int l,int c);
void transposta(int m[][L],int t[][C],int l, int c);

int main(){
    int matriz[L][C],transpos[C][L];
    preenche_matriz(matriz,L,C);
    imprime_matriz(matriz,L,C);
    transposta(matriz,transpos,C,L);
    printf("\n transporta:\n");
    imprime_matriz(transpos,C,L);
}

void preenche_matriz(int m[][C], int l,int c){

    srand(time(NULL));
    for(int i=0;i<=l;i++){
        for(int j=0;j<=c;j++){
        m[i][j]= rand()%100;
        }
    }
}
void imprime_matriz(int m[][C], int l, int c)
{

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
void transposta(int m[][L],int t[][C],int l, int c){
     for(int i=0;i<=l;i++){
        for(int j=0;j<=c;j++){
        t[i][j]= m[j][i];
        }
    }
}