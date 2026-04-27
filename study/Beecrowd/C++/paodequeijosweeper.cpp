#include <iostream>
using namespace std;

int main()
{
    int n,m;
    while(cin >> n >> m)
    {    
        int a[n][m],b[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                b[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
             cin >> a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==0)
                {
                    if(j>0)
                    {
                        b[i][j]=b[i][j]+a[i][j-1];
                    }
                    if(j<m-1)
                    {
                        b[i][j]=b[i][j]+a[i][j+1];
                    }
                    if(i>0)
                    {
                        b[i][j]=b[i][j]+a[i-1][j];
                    }
                    if(i<n-1)
                    {
                        b[i][j]=b[i][j]+a[i+1][j];
                    }
                }
                else if(a[i][j]==1)
                {
                    b[i][j]=9;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
}

