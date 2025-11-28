#include <iostream>
#include <vector>
using namespace std;

int main()
{
    double m[12][12],soma=0,media,valor;
    int cont=0,c;
    char tipo;

    cin>>c;
    cin>>tipo;
    for(int i=0 ;i<12 ;i++)
    {
        for(int j=0 ;j<12 ;j++)
        {
            cin>>m[i][j];
        }
    }
    if(tipo=='S')
    {
        for(int i=0;i<12;i++)
        {
            soma+=m[i][c];
        }
        valor=soma;
    }
    else if(tipo=='M')
    {
        for(int i=0;i<12;i++)
        {
            soma+=m[i][c];
            cont++;
        }
        media=soma/cont;
        valor=media;
    }
    printf("%.1f\n",valor);

    
    
}