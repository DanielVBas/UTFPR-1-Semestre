#include <stdio.h>
int retornaMDCC(int num1, int num2){

    while(num1!=num2){

        if(num1>num2){
            num1-=num2;
        }
        else num2-=num1;
    }
    return num1;
}
int main(){
    int n1,n2,result;
    printf("Digite os dois numeros para descobrir o MDC:\n");
    scanf("%d %d",&n1,&n2);

    result = retornaMDCC(n1,n2);
    printf("O MD eh %d",result);
    return 0;
}