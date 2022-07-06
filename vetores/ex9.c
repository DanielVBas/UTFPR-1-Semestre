#include <stdio.h>
#define N 10
void imprime_vetor(int vetor[], int tam);
void intercalaVetores(int v1[], int v2[], int v3[], int n);

int main(){
    int v1[N]={6,5,2,3,1,5,7,6,3,5},
    v2[N]={9,2,5,4,5,7,6,3,4,7},
    v3[N*2];

    intercalaVetores(v1,v2,v3,N);
    imprime_vetor(v3,N*2);



}
void imprime_vetor(int vetor[], int tam)
{

    for (int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
void intercalaVetores(int v1[], int v2[], int v3[], int n){

    int j=0;
    for(int i=0;i<n;i++){

        for(int m=0;m<2;m++,j++){
            if(m%2==0) v3[j]=v1[i];
            else v3[j]=v2[i];
        }
    }
}
