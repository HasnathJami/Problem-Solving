#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int store=(a+b+c)-(max(max(a,b),c))-(min(min(a,b),c));
        cout<<"Case "<<i<<": "<<store<<endl;
    }
}
