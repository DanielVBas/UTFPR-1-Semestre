#include <stdio.h>
int arredonda (float x){

    int a;
    a=x;

    if(a+0.5<=x && x>=0)return a+1;
    else if(a+0.5>x && x>=0)return a;
    else if(a-0.5<=x && x<0)return a;
    else if(a-0.5>x && x<0)return a-1;



}
int main(){

    float entrada;
    int result;
    printf("Digite um numero para arredondalo\n");
    scanf("%f",&entrada);

    result = arredonda(entrada);

    printf("%d",result);



    return 0;
}
