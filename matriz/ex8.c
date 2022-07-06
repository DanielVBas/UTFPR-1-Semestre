#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define L 3
#define C 3



void imprime_matriz(int m[][C], int l, int c);
void preenche_matriz(int m[][C], int l,int c);
void imprime_matriz_multi(int m[][C],int m2[][C], int l,int c);
void imprime_matriz_potencia2(int m[][C], int l,int c);
void imprime_matriz_potencia(int m[][C], int l,int c);

int main(){

    int m1[L][C],m2[L][C];
    printf("calcule C = A * B=\n");
    preenche_matriz(m1,L,C);
    preenche_matriz(m2,L,C);
    imprime_matriz_multi(m1,m2,L,C);
    printf("\ncalcule C = A * A\n");
    imprime_matriz_potencia2(m1,L,C);
    printf("\n");
    imprime_matriz_potencia(m1,L,C);



}

void preenche_matriz(int m[][C], int l,int c){

    srand(time(NULL));
    for(int i=0;i<=l;i++){
        for(int j=0;j<=c;j++){
        m[i][j]= rand()%10;
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
void imprime_matriz_multi(int m[][C],int m2[][C], int l,int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ",m[i][j]*m2[i][j]);
        }
        printf("\n");
    }
}
void imprime_matriz_potencia2(int m[][C], int l,int c){
     for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ",m[i][j]*m[i][j]);
        }
        printf("\n");
    }
}
void imprime_matriz_potencia(int m[][C], int l,int c){
    int n;
    printf("Qual vai ser o numero que ira elevar?\n");
    scanf("%d",&n);

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ",(int)(pow(m[i][j],n)+0.5));
        }
        printf("\n");
    }
}