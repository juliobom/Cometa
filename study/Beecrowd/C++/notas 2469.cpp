// 2469 - Notas (beecrowd)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,rep,maior=0;    ;
    cin>>n;
    vector<int> nota(n);
    for(int i=0;i<n;i++)
    {
        cin>>nota[i];
    }
    for(int i=0;i<n;i++)
        {   int cont=0;
            for(int j=0;j<=i;j++)
            {
                if(nota[j]==nota[i])
                {
                    cont++;
                }
            }
            if(cont>=maior)
            {
                if(nota[i]>rep)
                {
                    rep=nota[i];
                    maior=cont;
                }
                else{
                    if(cont>maior)
                    {
                        rep=nota[i];
                        maior=cont;  
                    }    
                }
                
            }
        }
    cout<<rep<<endl;
}