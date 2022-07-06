#include <stdio.h>
#define TAM 10
typedef struct{
    int mat; /* matricula do funcionario */
    char nome; /* inicial do nome do funcionario */
    int sup; /* matricula do superior imediato */
}Funcionario;

int Indice_funcionario(Funcionario* vet, int n, int mat);
Funcionario* cadastra(int n);
void preenche (Funcionario *vet,int n);

int main(){

    int mat,result,n;
    Funcionario *funci;
    
    printf("Quantos funcionarios quer cadastras?\n");
    scanf("%d",&n);
    funci=cadastra(n);
    preenche(funci,n);

    printf("Qual  o numero da matricula do funcionario?:\n");
    scanf("%d",&mat);

   result = Indice_funcionario(funci,n,mat);

    if(result==-1)printf("Essa matricula nao esta nos nossos registros");
    else printf("Esta no indice: %d",result);
    return 0;
}

int Indice_funcionario(Funcionario* vet, int n, int mat){

    for(int i=0;i<n;i++){
        if(vet[i].mat==mat){
            return i;
            break;
        }
    }
    return -1;
}
Funcionario* cadastra(int n){
    Funcionario *funcionarios = (Funcionario *) malloc(n * sizeof(Funcionario));
    return funcionarios;
}

void preenche (Funcionario *vet,int n){
    for(int i=0;i<n;i++){
        printf("Qual o numero da matricula do funcionario %d?\n",i);
        scanf("%d",&vet[i]);
    }
}