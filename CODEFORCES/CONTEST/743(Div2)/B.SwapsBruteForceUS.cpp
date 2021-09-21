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
        int n,mini=imax;
        cin>>n;
        vector<pair<int,int>> a(n),b(n);

        for(int i=0; i<n; i++)
        {

            cin>>a[i].first;
            a[i].second=i;

        }

        for(int i=0; i<n; i++)
        {
            cin>>b[i].first;
            b[i].second=i;

        }

        if(a[0]<b[0])
        {
            cout<<0<<endl;
            continue;
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for(int i=0; i<n; i++)
        {
            for(int k=i; k<n; k++)
            {
                mini=min(mini,(a[i].second+b[k].second));
            }
        }

        cout<<mini<<endl;





    }



    return 0;

}



