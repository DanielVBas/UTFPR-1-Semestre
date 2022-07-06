#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 10
#define C 10



void imprime_matriz(int m[][C], int l, int c);
void preenche_matriz(int m[][C], int l,int c);
void minimax(int m[][C], int l,int c);
int main(){
    int matriz[L][C];
    preenche_matriz(matriz,L,C);
    imprime_matriz(matriz,L,C);
    minimax(matriz,L,C);

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
void minimax(int m[][C], int l,int c){
    int min,max=m[0][0],line,col;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(max<m[i][j]){
                max=m[i][j];
                line=i;
                col=j;
            }
        }
    }
    for(int i=0;i<l;i++){
        if(min>m[i][col])min=m[i][col];
    }
    printf("o maior elemento da matriz eh %d e o menor elemento da linha eh %d, que se encontra na linha %d e coluna %d",max,min,line,col);


}