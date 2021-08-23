#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
int mod=1e9+7;

int main ()
{
    FASTER
    ll N,res;
    cin>>N;
    if(N%2==1)
    {
        res=N/2+1;
    }
    else
    {
        res=N/2;
    }
    cout<<res<<endl;


    return 0;

}

