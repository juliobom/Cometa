#include <stdio.h>
#include <math.h>


typedef struct {
    float x,y;
}Ponto;

void Levetor(Ponto* V, int n){

    for(int i=0;i<n;i++){
        scanf("%f%f",&V[i].x,&V[i].y);
    }

}
void matrizdist(float** M,Ponto* v,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            M[i][j]=M[j][i]=sqrt(((v[i].x)-(v[j].x)*(v[i].x)-(v[j].x))+((v[i].y)-(v[j].y)*(v[i].y)-(v[j].y)));
        }
        M[i][i]=0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Ponto vet[n];
    float d[n][n];
    Levetor(vet,n);
    matrizdist( d[n][n], vet, n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%7.2fbbb",d[i][j]);
        }
        printf("\n");
    }

}
