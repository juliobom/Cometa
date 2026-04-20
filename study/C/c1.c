#include <stdio.h>
#include <stdlib.h>

int**matr(int l,int c){

    int**m=malloc(sizeof(int*)*l);
    for(int i=0;i<l;i++){

        m[i]=malloc(sizeof(int)*c);

    }
    return(m);
}

int main(){

    int**mat=matr(2,4);

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            mat[i][j]=j+i;
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d\n",mat[i][j]);
        }
    }

}
