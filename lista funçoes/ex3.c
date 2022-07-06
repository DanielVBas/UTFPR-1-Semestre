#include <stdio.h>
int testaTipoChar (char c){

    if(c>='A' && c<='Z') return 1;
    else if(c>='a' && c<='z') return 2;
    else if(c>='0' && c<='9') return 3;
    else return 0;

}
int main(){
    char c;
    int a;
    printf("Entre com um caracter qualquer:\n");
    scanf("%c",&c);

    a=testaTipoChar(c);

    printf("%d",a);
    return 0;
}