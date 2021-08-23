#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{
    FASTER

    ll n2[14]={4,7,44,77,47,74,444,777,447,774,474,747,744,477};

    ll n;
    cin>>n;

    for(ll i=0;i<14;i++)
    {
        if(n%n2[i] == 0)

        {
             cout<<"YES"<<endl;
             return 0;
        }

    }

    cout<<"NO"<<endl;

    return 0;

}
