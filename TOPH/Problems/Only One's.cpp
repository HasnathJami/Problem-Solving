#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    long long mul=(long long)a*b;
    vector<int>v;

    while(mul>0)
    {
        v.push_back(mul%10);
        mul=mul/10;
    }

    reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]+1;
    }
    cout<<endl;




}
