#include <stdio.h>

void imprime(int n,char c);
int main(){

    char vet [1000];
    int a=0,e=0,i=0,o=0,u=0;

    printf("Digite a frase para contar as vogais:\n");
    fgets (vet, 1000, stdin);

    for(int j=0;vet[j]!='\0';j++){
        if(vet[j]=='a')a+=1;
        else if(vet[j]=='e' || vet[j]=='E')e+=1;
        else if(vet[j]=='i'||vet[j]=='I')i+=1;
        else if(vet[j]=='o'||vet[j]=='O')o+=1;
        else if(vet[j]=='u'||vet[j]=='U')u+=1;
    }
    imprime(a,'a');
    imprime(e,'e');
    imprime(i,'i');
    imprime(o,'o');
    imprime(u,'u');

    return 0;
}
void imprime(int n,char c){
    printf("%c : ",c);
    for(int j=0;j<n;j++)
        printf("*");

    printf("  (%d)\n",n);

}