#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n;
    char **mat;
    scanf("%d%d",&m,&n);
    mat = malloc(m*sizeof(char));
    for(int i=0;i<m;i++){
        mat[i]=malloc(n*sizeof(char));
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat[i][j] ='A';
        }

    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%c",mat[i][j]);
        }
        printf("\n");
    }
    return 0;

}