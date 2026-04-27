#include <stdio.h>
#include <stdlib.h>

//vamos mallocar uma matris dinamicamente

int main(){

    int m,n;// 'm'== linhas, 'n'== colunas.
    char **mat;
    scanf("%d%d",&m,&n);
    mat = malloc(m*sizeof(char));//alocando o numero de linhas da matriz
    for(int i=0;i<m;i++){
        mat[i] = malloc(n*sizeof(char));//alocando o numero de colunas da matriz
    }
    for(int i=0;i<m;i++){//preenchendo a matriz
        for(int j=0;j<n;j++){
            scanf(" %c", &mat[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
    //agora vamos zerar a matriz, comecando pelas colunas.
    for(int i=0; i<m;i++){
        free(mat[i]);//liberando a memoria alocada para as colunas
    }//agora vamos liberar a memoria alocada para as linhas
    free(mat);


}