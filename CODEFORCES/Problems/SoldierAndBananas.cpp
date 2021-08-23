#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    int res=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        res=res+i*k;
    }

    if(res>n)
        cout<<res-n<<endl;
    else
    {
        cout<<0<<endl;
    }
}
