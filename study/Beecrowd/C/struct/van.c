#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{

    char nome[50];
    char posi[1];
    int cust;

}Aluno;

int comparar(const void *a,const void *b){

    Aluno *c1 = (Aluno*)a;
    Aluno *c2 = (Aluno*)b;

    if(c1->cust != c2->cust){
        return c1->cust - c2->cust;
    }
    int dif = strcmp(c1->posi , c2->posi);
    
    if(dif != 0){
        return dif;
    }

    return strcmp(c1->nome, c2->nome);
}



int main (){

    int m;
    while(scanf("%d",&m)!=EOF){
        Aluno a[m];
        for(int i=0;i<m;i++){
            scanf("%s %c %d",a[i].nome,a[i].posi,&a[i].cust);
        }
        qsort(a,m,sizeof(Aluno),comparar);
        for(int i=0;i<m;i++){

            printf("%s\n",a[i].nome);
        }

    }

}