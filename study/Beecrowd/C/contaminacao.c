#include <stdio.h> //documentado para a me perder

void contaminacao(int m, int n, char mat[m][n], int i, int j){    //verifica a contaminação
    if(i<0 || i>=m || j<0 || j>=n){          //esta em posicao invalida da matriz
        return;
    }
    if(mat[i][j]!='A'){         //aque ele esta em (terra) nao tem agua ent retorna
        return;
    }
    mat[i][j]='T';    //se nao retornar, e por que e agua, entao contamina.
    contaminacao(m,n,mat,i+1,j);//verifica da direita -->
    contaminacao(m,n,mat,i-1,j);//verifica da esquerda <--
    contaminacao(m,n,mat,i,j+1);//verifica de baixo para cima
    contaminacao(m,n,mat,i,j-1);//verifica de cima para baixo
}

void andar(int m, int n, char mat[m][n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]=='T'){//encontrou agua contaminada, entao contamina o resto (vamos verificar as proximas posicoes)
                contaminacao(m,n,mat,i+1,j);
                contaminacao(m,n,mat,i-1,j);
                contaminacao(m,n,mat,i,j+1);
                contaminacao(m,n,mat,i,j-1);
            }
        }
    }

}

void criar(int m,int n, char mat[m][n]){//preenche a matriz para percorrer
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf(" %c", &mat[i][j]);
        }
    }
    andar(m,n,mat);
}


int main(){

    int m,n;
    scanf("%d%d",&m,&n);
    while(m != 0 && n != 0){

        char Mat[m][n];
        criar(m ,n ,Mat);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%c", Mat[i][j]);
            }
            printf("\n");
        }
        scanf("%d%d",&m,&n);
    }


}
