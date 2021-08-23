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
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a==b && c==d || a==c && b==d || a==d && b==c )
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }

    return 0;

}

