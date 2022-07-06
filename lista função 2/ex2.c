#include <stdio.h>
#include <math.h>
int calcula_raizes(float a, float b, float c, float *x1, float *x2){
    
    float delta= b*b-4*a*c;
    if(delta==0){
        return 0;
    }
    else if(delta>0){
        return 1;
    }
    else{
        return 2;
    }
    
    *x1=(-b+sqrt(delta))/(2*a);
    *x2=(-b-sqrt(delta))/(2*a);
    
    
}
int main(){
    
    float a,b,c,x1,x2,result;
    
    printf("Digite os valores de a,b e c\n");
    scanf("%f %f %f",&a,&b,&c);
    
    result = calcula_raizes(a,b,c,&x1,&x2);
    
    if(result==0){
        printf("Existe apenas uma raiz e ela eh=%f",x1);
    }
    else if(result==1){
        printf("x1=%f e x2=%f",x1,x2);
    }
    else if(result==2){
        printf("Nao existe raiz real");
    }
    
    
    
    
    
    
    

    return 0;
}