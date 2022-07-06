#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    char path[100], c[80], *caract,s[2]={','},final;

    FILE *arquivo = fopen("iniciacoes/Bloco.csv", "r");
     if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }
   /* fgets(c,80,arquivo);
     caract = strtok(c, s);
   
    
    while( caract != NULL ) {
      printf( " %s\n", caract );
    
      caract = strtok(NULL, s);
       }
      */

     char *i;
    do
    {
        // Linha do organismo determinada pela linha em que está o caractere no .csv, e coluna pelo inteiro ao qual o caractere remete.
        i=fgets(c,80,arquivo);
        caract = strtok(c,s);
        if(i==NULL)break;
        while(caract != NULL){
        
                printf("%s\n",caract);
                
            caract = strtok(NULL,s);
        }
    } while (i!= NULL);

    return 0;
}