#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 5
#define C 5

void imprime_matriz(int m[][C], int l, int c);
void preenche_matriz(int m[][C], int l,int c);
int verifica(int m[][C],int elemento,int l, int c);
int main(){
    int matriz[L][C];
    srand(time(NULL));
    preenche_matriz(matriz,L,C);
    imprime_matriz(matriz,L,C);

    return 0;

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
void preenche_matriz(int m[][C], int l,int c){
    int elemento,test=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            elemento=rand()%100;
            for(int k=0;k<=i;k++){
                for(int f=0;f<=j;f++){
                    if(elemento==m[i][j]){
                        j-=1;
                        test=1;
                    }
                    if(f==j && k==i && test==0){
                        m[i][j]=elemento;
                        test=0;
                    }
                }

            }
        }
    }
}
int verifica(int m[][C],int elemento,int l, int c){

    int test=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(elemento==m[i][j]){
                test=1;
            }
        }
    }
    if(test==1) return 1;
    else return 0;

}
