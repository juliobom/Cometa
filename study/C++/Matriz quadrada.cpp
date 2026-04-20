#include <iostream>
using namespace std;
int main()
{
   int n;
   
   while(cin>>n)
   {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j&&i+j==n-1)
                {
                    cout<<"4";
                }
                else if(i>=(n/3)&&i<=(n-1-(n/3))&&j>=(n/3)&&j<=(n-1-(n/3)))
                {
                    cout<<"1";
                }
                else if(i+j==n-1)
                {
                    cout<<"3";
                }
                else if (i==j)
                {
                    cout<<"2";
                }
                else{
                    cout<<"0";
                }
                
                
            }
                cout<<endl;
        }
        cout<<endl<<endl;
   }
}