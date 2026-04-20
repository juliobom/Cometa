#include <iostream>
using namespace std;
float matriz(char op)
{
    float m[12][12],soma=0;
    int count=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>m[i][j];
        }
    }
    int col=1;
    for (int i = 1; i <= 10; i++) 
    {
        
        for(int j = 0; j < col; j++) {
            soma = soma + m[i][j];
            count++;
        }
        if(i==5)
        {
            col=col-1;
        }
        else if(i>5)
        {
            col=col-2;
        }
        col++;

    }
    if(op=='S')
    {
        return soma;
    }
    else
    {
        float media=soma/count;
        return media;
    }
}
int main()
{
    char op;
    cin>>op;
    float resultado=matriz(op);
    printf("%.1f\n",resultado);
    return 0;
}