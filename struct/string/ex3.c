#include <stdio.h>

int main(){

    char v1[100],v2[100];
    int j=0,k=0,l=-1;

    printf("Digite as duas frases:\n");
    fgets (v1, 100, stdin);
    fgets (v2, 100, stdin);

    for( int i=0; v1[j] !='\0' || v2[k] !='\0';i++,j++,k++){

       for(;j !=' ';j++){
           printf("%c ",v1[j]);
       }
       printf("igual");
        for(;k !=' ';k++){
           printf("%c ",v2[k]);
       }
    }




    return 0;
}