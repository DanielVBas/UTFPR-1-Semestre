#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 3
#define C 3

void imprime_matriz(int m[][C], int l, int c);
void preenche_matriz(int m[][C], int l,int c);
void quadrado_magico(int m[][C],int l, int c);

int main(){

    int matriz[L][C];
    preenche_matriz(matriz,L,C);
    quadrado_magico(matriz,L,C);

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
    int n;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
        printf("Digite o numero que vai estar na coluna: %d e na linha: %d\n",j,i);
        scanf("%d",&n);
        m[i][j]=n;
        }   
    }
}
void quadrado_magico(int m[][C],int l, int c){
    int n=m[0][0]+m[0][1]+m[0][2],ant,i=0,j=0,ver=0;
     for(int i=0;i<l;i++){
            ant=m[i][j]+m[i][j+1]+m[i][j+1];
            if(n==ant){
                continue;
            }
            else{
                ver=1;
                break;
            };
     }
     for(int j=0;j<c && ver==0;j++){
            ant=m[i][j]+m[i+1][j]+m[i+1][j];
            if(n==ant){
                continue;
            }
            else{
                ver=1;
                break;
            };
     }
    if(ver==1)printf("Nao eh um quadrado magico\n");
    else printf("Eh um quadrado maigco");
}   
