#include <stdio.h>
int retornaMaior(int n1, int n2){

    if(n1>n2)return n1;
    else return n2;
    

}
int main(){
    int n1,n2,result;

    printf("Digite os dois numeros para ver quem e maior:\n");
    scanf("%d %d",&n1,&n2);

    result = retornaMaior(n1,n2);
    printf("%d",result);
    return 0;

}