#include <stdio.h>
#include <stdlib.h>

void contaminacao(int linha, int coluna, char **matriz, int i, int j){
    if(i<0 || i>=linha || j<0 || j>=coluna || matriz[i][j]!='A'){
        return;
    }
    matriz[i][j]='T';
    contaminacao(linha,coluna,matriz,i-1,j);
    contaminacao(linha,coluna,matriz,i,j+1);
    contaminacao(linha,coluna,matriz,i,j-1);
    contaminacao(linha,coluna,matriz,i+1,j);
}

void andar(int linha, int coluna, char **matriz){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            if(matriz[i][j]=='T'){
                contaminacao(linha,coluna,matriz,i-1,j);
                contaminacao(linha,coluna,matriz,i,j+1);
                contaminacao(linha,coluna,matriz,i,j-1);
                contaminacao(linha,coluna,matriz,i+1,j);
            }
        }
    }
}


void lendo(int linha,int coluna,char **matriz){

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            scanf(" %c",&matriz[i][j]);
        }
    }
    andar(linha, coluna, matriz);


}

int main(){

    int m,n;
    scanf("%d%d",&m,&n);
    while( m!=0 && n!=0 ){
        char **mat;
        mat = (char**)malloc(m*sizeof(char*));
        for(int i=0;i<m;i++){
            mat[i]=(char*)malloc(n*sizeof(char));
        }
        lendo( m, n, mat);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%c", mat[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<m;i++){
            free(mat[i]);
        }
        free(mat);
        scanf("%d%d",&m,&n);
    }
}