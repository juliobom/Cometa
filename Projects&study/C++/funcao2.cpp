#include <iostream>
#include <cmath>
using namespace std;

int minhamatriz(int x,int y)
{
    return pow(x,y);

}
int main()
{
    int l,c;
    while(cin>>l>>c)
    {
        minhamatriz(l,c);
        cout<<minhamatriz(l,c)<<endl;
    }
}