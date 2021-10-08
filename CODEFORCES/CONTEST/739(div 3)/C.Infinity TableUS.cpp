#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
#define pb push_back
#define lb lower_bound
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN

int mod=1e9+7;


int main ()
{
    FASTER
    int t;
    cin>>t;

    while(t--)
    {

        ll k;
        cin>>k;

        double sq=sqrt(k);
        ll sqBase=ceil(sq);
        ll sqBaseSq=sqBase*sqBase;
        ll sqBaseMid1=abs(sqBaseSq-abs(sqBase-1));
        ll sqBaseMid2=abs(sqBase-abs(sqBaseMid1-k));

        if(abs(sqBaseSq - k) <abs(sqBase-1))
            cout<<sqBase<<" "<<abs(sqBaseSq-k)+1<<endl;

        else if (abs(sqBaseSq - k) ==abs(sqBase-1))
            cout<<sqBase<<" "<<sqBase<<endl;

        else
            cout<<sqBaseMid2<<" "<<sqBase<<endl;

    }




    return 0;

}







