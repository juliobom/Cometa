#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char nome[25];
    int data;

}Carne;

int comparar(const void*a, const void*b){
    Carne *c1 = (Carne*)a;
    Carne *c2 = (Carne*)b;

    return c1->data - c2->data;
}

int main(){

    int n;
    
    scanf("%d",&n);
    while(n!=0){

        Carne peca[n];
        for(int i=0;i<n;i++){

            scanf("%s %d",peca[i].nome, &peca[i].data);

        }
        qsort(peca,n,sizeof(Carne),comparar);
        for(int i=0;i<n;i++){

            if(i>0){printf(" ");}

            printf("%s",peca[i].nome);

        }
        printf("\n");
        scanf("%d",&n);
    }
}