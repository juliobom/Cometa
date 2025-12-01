#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    
    while(cin>>n&&n!=0)
    {
       int c,j=0,di; 
    vector< vector<long long> > m(n,vector<long long>(n));
    m[0][0]=1;
    for(int i=0;i<n;i++)
    {
        if(i>0)
        {
            m[i][0]=m[i-1][0]*2;
        }
        for(j=1;j<n;j++)
        {
            di=0;
            m[i][j]=m[i][j-1]*2;
            c=m[i][j];
            while(c!=0)
            {
                di++;
                c=c/10;
            }
        }
        
    }
    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            cout.width(di);
            cout<<m[i][j];
            if(j<n-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
    }
    di=0;
    cout<<endl;


    }

}