//2453 - Lingua do P (beecrowd)
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string frase;

    getline(cin,frase) ;

    int tamanho = frase.length();

    for(int i=0;i<tamanho;i++)
    {
        if(frase[i]=='p')
        {
            if(i+1<tamanho)
            {
                cout<<frase[i+1];
                i++;
            }
            
        }
        else{
            cout<<frase[i];
        }
    }

}