#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    float preco;
}produto;

float calcular(char nome[50], int qtd,int tam,produto *a){

    for(int i=0;i<tam;i++){
        if(strcmp(nome, a[i].nome) ==0 ){
            return (a[i].preco)*qtd;
        }
    }
    return 0;

}

int main(){

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    
        int m;
        scanf("%d",&m);
            produto merca[m];

        for(int j=0;j<m;j++){

            scanf("%s %f",merca[j].nome, &merca[j].preco);
        }
        int comprado;
        scanf("%d",&comprado);
            char comp[50];
            int qtd;
            float soma = 0;
        for(int k=0;k<comprado;k++){

            scanf("%s %d",comp, &qtd);
            soma += calcular(comp,qtd,m,merca);

        }
        printf("R$ %.2f\n",soma);
    }
}