#include <stdio.h>

int main(){

    struct cliente{ 
        int idade;
        char nome[50];
        int telefone;
        
    };

    struct cliente c[5];

    printf("digite o nome do cliente: ");
    fgets(c[0].nome,50,stdin);
    printf("digite sua idade: ");
    scanf("%d", &c[0].idade);
    printf("digite seu telefone: ");
    scanf("%d", &c[0].telefone);

    printf("nome: %sidade: %d\ntelefone: %d", c[0].nome, c[0].idade, c[0].telefone);
}