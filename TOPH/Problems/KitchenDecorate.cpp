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
    int T;
    cin>>T;
    while(T--)
    {
        ll W,H;
        cin>>W>>H;
        cout<<__gcd(W,H)<<endl;
    }


    return 0;

}

