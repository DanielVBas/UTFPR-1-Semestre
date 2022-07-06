#include <stdio.h>

char* criaSenha(char nome[],char bairro[]);
void imprime (char senha[]);
int main(){

    char nome[100],bairro[20],*senha;
    printf("Qual o nome e bairro?\n");
    fgets (nome, 100, stdin);
    fgets (bairro, 20, stdin);

    senha= criaSenha(nome,bairro);
    imprime(senha);

    return 0;
}
char* criaSenha(char nome[],char bairro[]){
    int k=0;
    char vogais[11]={'a','e','i','o','u','A','E','I','O','U'};
    char *frase_resultante = (char *) malloc((20) * sizeof(char));
    for (int i=0;nome[i]!='\0';i++){
        for(int j=0;j<10;j++){
            if(vogais[j]==nome[i]){
                frase_resultante[k]=nome[i];
                k+=1;
            }
        }
    }
    for (int i=0; bairro[i]!='\0';i++){
        for(int j=0;j<10;j++){
            if(vogais[j]==bairro[i]){
                frase_resultante[k]=bairro[i];
                
                k+=1;
            }
        }
    }
    frase_resultante[k]='\0';
    printf("%c",frase_resultante[0]);
    return frase_resultante;
}
void imprime (char senha[]){
    printf("%s",senha);
}