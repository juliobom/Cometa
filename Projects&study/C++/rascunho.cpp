#include <iostream>
using namespace std;

int main()
{
    int count=0,c;
    float  m[12][12],soma,valor,media;
    char t;
    cin>>t;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin >> m[i][j];
        }
    }
    c=11;
    for(int i=1;i<11;i++)
    {
        for(int j=c;j<12;j++)
        {
            soma=soma+m[i][j];
            count++;
            
        }
        if(i==5)
        {
            c=c+1;
        }
        else if(i>5)
        {
            c=c+2;
        }

        c--;
    }
    if(t=='S')
    {
        printf("%.1f\n",float(soma));
    }
    else if(t=='M')
    {
        media=soma/count;
        printf("%.1f\n",float(media));
    }


    
}