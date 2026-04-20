#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int n,a;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a;
        long long int fib[a+1];
        
        if(a==0)
        {
            fib[a] = 0;
        }
        else if(a==1)
        {
            fib[a] = 1;
        }
        else
        {
            fib[0] = 0;
            fib[1] = 1;
            for(int j=2;j<=a;j++)
            {
                fib[j]=fib[j-1]+fib[j-2];
            }
        }
        cout << "Fib(" << a << ") = "<<fib[a] << endl;
        
    }
    

}