#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    int mat;
}aluno;

int main(){

        aluno a[10];

        strcpy(a[0].nome, "julio");
        a[0].idade = 25;

        printf("%s\n%d\n",a[0].nome,a[0].idade);

}
