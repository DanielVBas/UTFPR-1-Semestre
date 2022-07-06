#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINESIZE 1024

void le_padrao_de_arquivo(char *nome_do_arquivo)
{
    FILE *arquivo = fopen(nome_do_arquivo, "r");
    char line[LINESIZE+1], mat_caracteres[100][100], *token;
    int i, j;
    i = j = 0;

    if (arquivo == NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    while(fgets(line, LINESIZE, arquivo))
    {
        line[strlen(line)-1] = '\0';

        token = strtok(line, ",");

        while(token != NULL)
        {
            strcpy(&mat_caracteres[i][j], token);
            j++;
            token = strtok(NULL, ",");
        }

        i++;
        printf("%s\n", line);
    }

    for (int k = 0; k < 100; k++)
    {
        for (int l = 0; l < 100; l++)
            printf("%c", mat_caracteres[k][l]);

        printf("\n");
    }
}

int main(void)
{
    le_padrao_de_arquivo("teste.txt");
}