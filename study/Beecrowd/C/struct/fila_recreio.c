#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int nota;
}aluno;

int comparar(const void *a,const void *b){

    aluno *c1 = (aluno*)a;
    aluno *c2 = (aluno*)b;
    return c2->nota - c1->nota;


}

int main(){
    int n,m;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&m);
        aluno a[m],ad[m];
        for(int j=0;j<m;j++){

            scanf("%d", &a[j].nota);
            ad[j].nota = a[j].nota;

        }
        qsort(a,m,sizeof(aluno),comparar);
        int count = 0;
        for(int j=0;j<m;j++){

            if(a[j].nota == ad[j].nota){
                count ++;
            }

        }

        printf("%d\n",count);
    }

}