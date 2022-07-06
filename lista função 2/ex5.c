void removeExtremos(int *n, int *pri, int *ult)
{
    int tn,pot;
    *ult = *n % 10;
    pot=1;
    tn = *n;
    while(tn >= 10){
        tn = tn/10;
        pot *= 10;
    }
    *pri = *n / pot;
    *n = *n % pot;
    *n = *n / 10;
}
int main(){

    int ult,prim,n;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&n);
    
    removeExtremos(&n,&prim,&ult);
    

    while(n>10){
        removeExtremos(&n,&prim,&ult);
        if(prim!=ult){
            printf("Nao eh palindromo");
            break;
        }
        else if(n<10){
            printf("eh palindromo");
        }
    }
    return 0;

}

