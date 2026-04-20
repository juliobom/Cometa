#include <stdio.h>

int main()
{
int mat[10],m;
float notas[10];
int i=0;
scanf("%d",&mat[i]);
while(mat[i])
{
    scanf("%f",&notas[i]);
    i++;
    scanf("%d",&mat[i]);

}
int n=i;
scanf("%d",&m);
while(m)
{
    for(i=0;i<n&&m!=mat[i];i++);
    if(i<n)
    {
        printf("Matricula: %d\nNota: %.2f\n",mat[i],notas[i]);
    }
    else{
        printf("Matricula nao encontrada.\n");
    }
    scanf("%d",&m);
}
}