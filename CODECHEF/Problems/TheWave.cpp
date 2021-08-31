#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
#define pb push_back
#define lb lower_bound

int mod=1e9+7;


int main ()
{
    FASTER
    ll n,n2,x;
    cin>>n>>n2;

    vector<ll>vec;
    for(int i=0; i<n; i++)
    {
        ll inp;
        cin>>inp;
        vec.pb(inp);
    }
    sort(vec.begin(),vec.end());

    while(n2--)
    {
        cin>>x;
        ll pos=lb(vec.begin(),vec.end(),x)-vec.begin();

        // cout<<*(position)<<endl;
        //ll  pos=(position) - 1;

        if(vec[pos]==x)
            cout<<0<<endl;

        else if((n-pos)%2==0)
            cout<<"POSITIVE"<<endl;

        else
            cout<<"NEGATIVE"<<endl;



    }







    return 0;

}



