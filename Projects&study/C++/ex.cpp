#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string cinema(int l, int c)
{
    if(l<0 || c<0)
    {
        return "Assento invalido";
    }
    int assentos[5][5];
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            assentos[i][j]=rand()%1;
        }
    }
    for(int i=0;i<=l;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(assentos[l][c]==0)
            {
                return "Assento livre";
            }
            else
            {
                return "Assento ocupado";
            }
        }
    }

}



int main()
{
    /* 
    //----------------------------------------------------------------------------Ex-08
    int m1[2][2],m2[2][2],mr[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>m1[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>m2[i][j];
            mr[i][j]=m2[i][j]+m1[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<mr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //----------------------------------------------------------------------------Ex-09
    
    cout<<"maior valor matriz 10x10"<<endl;
    int m10[10][10],maior=0,posi,posl;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            m10[i][j]=rand()%100;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(m10[i][j]>maior)
            {
                maior=m10[i][j];
                posi=i;
                posl=j;
            }
        }
    }
    cout<<"Maior valor: "<<maior<<endl<<"linha: "<<posi<<endl<<"coluna: "<<posl<<endl;

    //----------------------------------------------------------------------------Ex-10

    int assento[10][4];
    int livre=0;
    cout<<"Assentos disponiveis preencher com '0' para livre e '1' ocupado"<<endl;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=4;j++)
        {
            cout<<"Assento ["<<i<<"] ["<<j<<"]: ";
            assento[i][j]=0;
            if(assento[i][j]==0)
            {
                livre++;
            }
        }
    }
    
    cout<<"Total de assentos livres: "<<livre<<endl;

    //----------------------------------------------------------------------------Ex-11
    int mats[5][5],aux;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mats[i][j];
            if(i==4)
            {
                aux=mats[i][j];
                mats[i][j]=mats[2][j];
                mats[2][j]=aux;
            }
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<mats[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //----------------------------------------------------------------------------Ex-12
    
    int ma[3][3],sl[3]={0},sc[3]={0},sd=0,sds=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ma[i][j];
        }
    }
    for(int i=0;i<3;i++)
    { 
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sd=sd+ma[i][j];
                if(i+j==2)
                {
                    sds=sds+ma[i][j];
                }
            }
            else if((i+j)==2)
            {
                sds=sds+ma[i][j];
            }
            sc[j]=sc[j]+ma[i][j];
            sl[i]=sl[i]+ma[i][j];
        }
    }
    if(sl[0]==sl[1] && sl[1]==sl[2] && sc[0]==sc[1] && sc[1]==sc[2] && sd==sds)
    {
        cout<<"eh magica"<<endl;
    }
    else
    {
        cout<<"nao eh magica"<<endl;
    }

    //----------------------------------------------------------------------------Ex-13

    char pro[5][10],gab[10]={'A','E','B','A','C','D','E','B','A','A'};   //cada questao vale 0,5 pontos
    float nota[5]={0};

    for(int i=0;i<5;i++)
    {
        
        for(int j=0;j<10;j++)
        {
            cout<<"Questao "<<j+1<<": ";
            cin>>pro[i][j];
            if(toupper(pro[i][j])==gab[j])
            {
                nota[i]=nota[i]+0.5;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        
        cout<<"Aluno "<<i+1<<": "<<nota[i]<<endl;
    }*/

    //----------------------------------------------------------------------------Ex-14

    int l,c;
    cout<<"Digite a linha e coluna do assento desejado: ";
    cin>>l>>c;
    cout<<cinema(l,c)<<endl;

    //----------------------------------------------------------------------------Ex-15

    int o[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>o[i][j];
        }
        cout<<endl;
    }

}