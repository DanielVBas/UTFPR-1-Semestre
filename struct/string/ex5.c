#include <stdio.h>
void abreviacao(char nome[],int v[]);
int main(){

    char nome[100];
    int espacos[20];
    printf("Digite o nome completo:\n");
    fgets (nome, 100, stdin);


    abreviacao(nome,espacos);



    return 0;
}

void abreviacao(char nome[],int v[]){

    int tamanho=0;
    for(int k=0;nome[k]!='\0';k++){
        if(nome[k]==' '){
            tamanho+=1;
            v[tamanho-1]=k;
            printf("teste\n");
        }
        
    }
    printf("%c. ",nome[0]);
    for(int i=0;i<tamanho;i++){
        if(v[i+1]-v[i]<=3 && i+2<tamanho){
            printf("%c%c ",nome[(v[i]+1)],nome[(v[i]+2)]);
        }
        else{
            printf("%c. ",nome[v[i]+1]);
        }
    }

    for(int b=0;b<tamanho;b++)printf("%d ",v[b]);
}