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
    ll n,k;
    cin>>n>>k;

    ll oddnum,evennum;

    if(n%2==0)
    {
        oddnum=n/2;
        //evennum=n/2;

        ll os=1;
        ll oe=n/2;
        // ll es=n/2 +1;
        // ll ee=n;

        if(k>=os && k<=oe)
        {
            cout<<(2*k)-1<<endl;
        }

        else
        {

            cout<<2*abs(k-oddnum)<<endl;
        }


    }

    else
    {
        oddnum=(n/2)+1;
        // evennum=n/2;


        ll os=1;
        ll oe=n/2 +1 ;
        // ll es=n/2 +2;
        // ll ee=n;

        if(k>=os && k<=oe)
        {
            cout<<(2*k)-1<<endl;
        }

        else
        {

            cout<<2*abs(k-oddnum)<<endl;
        }




    }






    return 0;

}


