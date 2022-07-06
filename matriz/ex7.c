#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 10
#define C 10

void imprime_matriz(int m[][C], int l, int c);
void preenche_matriz(int m[][C], int l,int c);
void escolha0(int m[][C], int l,int c);
void escolha1(int m[][C],int m2[][C], int l,int c);
void escolha2(int m[][C],int m2[][C], int l,int c);
void escolha3(int m[][C],int m2[][C], int l,int c);
void escolha4(int m[][C], int l,int c);

int main(){
    int oqFazer,m1[L][C],m2[L][C];
    char sai;
    printf("Se desejar sair, digite #:\n");

    while(sai!='#'){
        printf("Digite (0) criar duas matrizes 10 x 10 com valores inteiros\n (1) imprimir as matrizes originais\n (2) somar as duas matrizes e imprimir o resultado\n(3) subtrair a primeira matriz da segunda e imprimir o resultado\n (4) multiplicar uma constante à primeira matriz e imprimir o resultado\n:");
        scanf("%d",&oqFazer);

        if(oqFazer==0){
            escolha0(m1,L,C);
            escolha0(m2,L,C);
        }
        else if(oqFazer==1)escolha1(m1,m2,L,C);
        else if(oqFazer==2)escolha2(m1,m2,L,C);
        else if(oqFazer==3)escolha3(m1,m2,L,C);
        else if(oqFazer==4)escolha4(m1,L,C);
    }
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
void escolha0(int m[][C], int l,int c){

    preenche_matriz(m,l,c);
    printf("\n")
}
void escolha1(int m[][C],int m2[][C], int l,int c){

    imprime_matriz(m,l,c);
    imprime_matriz(m2,l,c);

}
void escolha2(int m[][C],int m2[][C], int l,int c){

     for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ",m[i][j]+m2[i][j]);
        }
        printf("\n");
    }
}
void escolha3(int m[][C],int m2[][C], int l,int c){

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ",m2[i][j]-m[i][j]);
        }
        printf("\n");
    }
}
void escolha4(int m[][C], int l,int c){
    int n;
    printf("Qual vai ser a aconstante?\n");
    scanf("%d",&n);

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d ",m[i][j]*n);
        }
        printf("\n");
    }
}