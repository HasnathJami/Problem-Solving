#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    if(n==0)
    {
        cout<<0<<endl;

    }

    else if((n+1)%2==0 && n>0)
    {
        cout<<(n+1)/2<<endl;
    }

     else if((n+1)%2!=0 && n>0){
        cout<<n+1<<endl;
    }

}
