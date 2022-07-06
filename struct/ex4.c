#include <stdio.h>
#include <math.h>
typedef struct {
    float p[3];
    float M;
}Provas;


typedef struct {
    int ra;
    int frequencia;
    Provas Ps;
}Aluno;

void pegaNotas(Aluno* vetAlunos, int n);
void imprime(Aluno* vetAlunos, int n,float desvios_Ps[],float medias_Ps[]);
void medias_des(Aluno* vetAlunos, int n,float desvios_Ps[],float medias_Ps[]);


int main(void) {
    int n,i,j;
    float desvios_Ps[3]={0.0, 0.0, 0.0}, medias_Ps[3]={0.0, 0.0, 0.0};
    Aluno *vetAlunos;
    printf("Digite o numero de alunos:\n");
    scanf("%d", &n);

    vetAlunos = (Aluno*) malloc (n * sizeof (Aluno));
    pegaNotas(vetAlunos,n);
    medias_des(vetAlunos,n,desvios_Ps,medias_Ps);
    imprime(vetAlunos,n,desvios_Ps,medias_Ps);

    return 0;

}
void pegaNotas(Aluno* vetAlunos, int n){

    for(int i=0;i<n;i++){
        printf("Digite o RA do aluno %d:\n",i+1);
        scanf("%d",&vetAlunos[i].ra);

        for(int j=0;j<3;j++){
            printf("Digite a nota da prova: %d\n",j+1);
            scanf("%f",&vetAlunos[i].Ps.p[j]);
        }

    }
}
void imprime(Aluno* vetAlunos, int n,float desvios_Ps[],float medias_Ps[]){

    float soma=0,med=0,des=0;
    for (int i=0;i<n;i++){
        soma=0;
        printf("RA: %d\n",vetAlunos[i].ra);
        for( int j=0; j<3;j++){
            printf("Prova %d: %.3f\n",j,vetAlunos[i].Ps.p[j]);
            soma += vetAlunos[i].Ps.p[j];
        }
        soma=soma/n;
        printf("Media:%f\n",soma);
        printf("----------------\n");
    }
    for (int k=0;k<3;k++){
        printf("Media geral P%d: %f\n",k,medias_Ps[k]);
        printf("Desvio padrão P%d: %f\n",k,desvios_Ps[k]);

    }

 
}

void medias_des(Aluno* vetAlunos, int n,float desvios_Ps[],float medias_Ps[]){

    for (int i=0;i<3;i++){
        for (int j=0;j<n;j++){
            medias_Ps[i] += vetAlunos[j].Ps.p[i];
        }
        medias_Ps[i] /= n;
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<n;j++){
            desvios_Ps[i] += pow((vetAlunos[j].Ps.p[i] - medias_Ps[i]), 2);
        }
        desvios_Ps[i] /=n;
        desvios_Ps[i] =sqrt(desvios_Ps[i]);

    }
}