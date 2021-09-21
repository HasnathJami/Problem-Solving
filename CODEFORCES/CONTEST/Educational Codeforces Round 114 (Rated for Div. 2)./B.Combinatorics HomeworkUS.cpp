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
        int a,b,c,m;
        cin>>a>>b>>c>>m;

        int firstMax=max(a,max(b,c));
        int thirdMax=min(a,min(b,c));
        int secondMax=(a+b+c)-(firstMax+thirdMax);
        int maxPair=firstMax+secondMax+thirdMax-3;
        int minPair=firstMax-1-secondMax-thirdMax;


        if(maxPair <m)
        {
            cout<<"NO"<<endl;
        }
        else if(minPair>m)
        {
            cout<<"NO"<<endl;

        }

        else
        {
            cout<<"YES"<<endl;
        }


    }



    return 0;

}


