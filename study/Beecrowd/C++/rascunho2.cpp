#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    string m[4];
    for(int i=0;i<4;i++)
    {
        cin>>m[i];
    }

    int colunas=m[0].size();
    int n=colunas-2;
    int f,l,M[n];
    for(int j=0;j<n+2;j++)
    {
        string conc="";
        for(int i=0;i<4;i++)
        {
            conc+=(m[i][j]);
        }
        if(j==0)
        {
            f=stoi(conc);
        }
        else if(j==n+1)
        {
            l=stoi(conc);
        }
        else
        {
            M[j]=stoi(conc);
        }
    }
    int a;
    for(int k=1;k<=n;k++)
    {
        a=(f*M[k]+l)%257;
        cout<<(char)a;
    }
    cout<<endl;
    return 0;
}