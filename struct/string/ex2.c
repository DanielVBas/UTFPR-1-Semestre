#include <stdio.h>

int busca_palavra(char frase[],char palavra[],int n_pal);

int main(){

    char frase[100],palavra[20];
    int rep,n_pal=0;

    printf("Digite a frase:\n");
    fgets (frase, 100, stdin);

    printf("Digite a palavra:\n");
    fgets (palavra, 20, stdin);

    for(int b=0;palavra[b]!='\0';b++){
        n_pal +=1;
    }
    n_pal-=1;
    rep=busca_palavra(frase,palavra,n_pal);
    printf("\n%d",rep);


    return 0;
}

int busca_palavra(char frase[],char palavra[],int n_pal){
    int n=0,aux=0;


                                                                                                                                                                                                           

    for (int i=0;frase[i]!='\0';i++){
        aux=0;
        int k=0;                                 
        for(int j=i;frase[j]==palavra[k];j++,k++){
            aux +=1;                                                                                                                                                                                                                       
            if(aux==n_pal){
                n+=1;
            }                                                                                                                                                                                                                                                                                 

        }
        
    }






    return n;
}